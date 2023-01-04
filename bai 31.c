#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a,b;
	int p;
	printf("\n hay nhap a va b: ");
	scanf("%d%d",&a,&b);
	if(a==0 || b==0){
		p=a-b;
	}
while(a!=b){
		if(a>b){
			a=a-b;
		}
		else{
			b=b-a;
	}
	p=a;
}
printf("USCLN la: %d",p);
	return 0;
}
