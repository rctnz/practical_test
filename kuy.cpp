#include <stdio.h>
int main(){
	char n[10];
	int digit=0,sum=0,max=0;
	scanf("%s",n);
	for(int i=0;n[i]!='\0';i++){
		digit++;
		int x = n[i]-48;
		sum+=x;
		if(x>max)max=x;
	}
	printf("Digit : %d\nSum : %d\nMax : %d",digit,sum,max);
}
