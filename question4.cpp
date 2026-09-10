#include <stdio.h>
int turncount=0,check;
void turncountt(int direction,int tmp){
	if(direction!=tmp){turncount++;}
	else check=1;
}
int main(){
	int n,distance;
	char direction;
	scanf("%d",&n);
	int x=50,y=50,sumdistance=0,reject=0;
	char tmp='X';
	for(int i=0;i<n;i++){
		scanf(" %c %d",&direction,&distance);
		if(direction=='R'&&x+distance<=100){ x+=distance; sumdistance+=distance; turncountt(direction,tmp);}
		else if(direction=='L'&&x-distance>=0){ x-=distance; sumdistance+=distance; turncountt(direction,tmp);}
		else if(direction=='U'&&y+distance<=100){ y+=distance; sumdistance+=distance; turncountt(direction,tmp);}
		else if(direction=='D'&&y-distance>=0){ y-=distance; sumdistance+=distance; turncountt(direction,tmp);}
		else reject++;
		tmp = direction;
	}
	printf("x = %d , y = %d\n",x,y);
	printf("Total distance : %d\n",sumdistance);
	printf("Total reject : %d\n",reject);
	printf("Direction changed : %d",check && turncount==0 ? turncount : turncount-1);
}
