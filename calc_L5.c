#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float num1,num2;
	float p;
	printf ("\n hay nhap 2 so : ");
	scanf("%f%f",&num1,&num2);
	char op;
	printf("\n hay nhap 1 phep tinh + - * /: ");
	scanf("%s",&op);
	switch(op){
		case '+':
			p=num1+num2;
			printf("phep tinh la:%0.1f + %0.1f = %0.1f",num1,num2,p);
		break;
		case '-':
			p=num1-num2;
	printf("phep tinh la:%0.1f - %0.1f = %0.1f",num1,num2,p);	
		break;
		case '*':
			p=num1*num2;
	printf("phep tinh la:%0.1f * %0.1f = %0.1f",num1,num2,p);	
		break;
		case '/':
			if(num2==0){
				printf("phep tinh ko hop le");
			}
			else{
			p=num1+num2;
	printf("phep tinh la:%0.1f / %0.1f = %0.1f",num1,num2,p);	
		}
		break;
		
}
	return 0;
}
