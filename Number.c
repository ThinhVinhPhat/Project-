#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n;
	printf("\n hay nhap 1 so: ");
	scanf("%d",&n);
	do{
	switch (n/10){
		case 1:
			printf("muoi");
			break;
		case 2:
			printf(" hai muoi");
			break;
		case 3:
			printf(" ba muoi");
			break;
		case 4:
			printf(" bon muoi");
			break;
		case 5:
			printf(" nam muoi");
			break;
		case 6:
			printf(" sau muoi");
			break;
		case 7:
			printf("bay muoi");
			break;
		case 8:
			printf(" tam muoi");
			break;
		case 9:
			printf("chin muoi");
			break;		
	}
		switch (n%10){
		case 1:
			printf(" mot");
			break;
		case 2:
			printf(" hai ");
			break;
		case 3:
			printf(" ba ");
			break;
		case 4:
			printf(" bon ");
			break;
		case 5:
			printf(" lam");
			break;
		case 6:
			printf(" sau");
			break;
		case 7:
			printf(" bay");
			break;
		case 8:
			printf(" tam");
			break;
		case 9:
			printf(" chin");
			break;		
	}
}while(n<1);
	return 0;
}
