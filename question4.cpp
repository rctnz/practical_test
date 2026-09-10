// หุ่นยนต์เดินในกรอบ เริ่มต้นที่พิกัด (50,50)

// input : 
// รับค่า N เป็นจำนวนรอบที่จะสั่งหุ่นยนต์

//     การกรอกคำสั่งให้หุ่นยนต์ ให้ input
//     ทิศทาง ระยะทาง เช่น :
//     direction1 distance1
//     direction2 distance2
//     ...
//     directionN distanceN
    
//     R = ไปทางขวา
//     L = ไปทางซ้าย
//     U = ขึ้นบน
//     D = ลงล่าง

// ตย.เช่น :
//     3
//     R 30
//     D 50
//     R 25

// การปฏิเสธคำสั่ง : 
// จะรับคำสั่งก็ต่อเมื่อ 0 < x,y < 100 นอกนั้นให้ปฏิเสธ

// การเปลี่ยนทิศทาง :
// นับจำนวนครั้งหาก direction ไม่เหมือนเดิม

// output :
// บอกพิกัด x,y ล่าสุด
// ระยะทางโดยรวม
// จำนวนครั้งการปฏิเสธคำสั่ง
// จำนวนครั้งการเปลี่ยนทิศทาง

#include <stdio.h>
int turncount=0,check;
void turncountt(int direction,int tmp){
	if(direction!=lastDirection){turncount++;}
	else check=1;
}
int main(){
	int n,distance;
	char direction;
	scanf("%d",&n);
	int x=50,y=50,sumdistance=0,reject=0;
	char lastDirection='X';
	for(int i=0;i<n;i++){
		scanf(" %c %d",&direction,&distance);
		if(direction=='R'&&x+distance<=100){ x+=distance; sumdistance+=distance; turncountt(direction,tmp);}
		else if(direction=='L'&&x-distance>=0){ x-=distance; sumdistance+=distance; turncountt(direction,tmp);}
		else if(direction=='U'&&y+distance<=100){ y+=distance; sumdistance+=distance; turncountt(direction,tmp);}
		else if(direction=='D'&&y-distance>=0){ y-=distance; sumdistance+=distance; turncountt(direction,tmp);}
		else reject++;
		lastDirection = direction;
	}
	printf("x = %d , y = %d\n",x,y);
	printf("Total distance : %d\n",sumdistance);
	printf("Total reject : %d\n",reject);
	printf("Direction changed : %d",check && turncount==0 ? turncount : turncount-1);
}
