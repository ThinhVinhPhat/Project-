#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
   long int n;
	
printf("\n hay nhap tong tien: ");
scanf("%d",&n);
	switch(n/10000){
	case 1:
	printf ("muoi  ");
	break;
	case 2:
	printf ("hai muoi ");
	break;
	case 3:
	printf ("ba muoi  ");
	break;
	case 4:
	printf ("bon muoi  ");
	break;
	case 5:
	printf ("nam muoi  ");
	break;
	case 6:
	printf ("sau muoi  ");
	break;
	case 7:
	printf ("bay muoi ");
	break;
	case 8:
	printf ("tam muoi ");
	break;
	case 9:
	printf ("chin muoi  ");
	break;
}
	switch((n%10000/1000)){
	case 1:
	printf (" mot nghin ");
	break;
	case 2:
	printf ("hai  nghin");
	break;
	case 3:
	printf ("ba  nghin ");
	break;
	case 4:
	printf ("bon nghin ");
	break;
	case 5:
	printf ("nam  nghin ");
	break;
	case 6:
	printf ("sau  nghin ");
	break;
	case 7:
	printf ("bay nghin ");
	break;
	case 8:
	printf ("tam  nghin ");
	break;
	case 9:
	printf ("chin  nghin ");
	break;
}
	switch((n%1000/100)){
	case 1:
	printf ("mot tram ");
	break;
	case 2:
	printf ("hai tram ");
	break;
	case 3:
	printf ("ba tram ");
	break;
	case 4:
	printf ("bon tram ");
	break;
	case 5:
	printf ("nam tram ");
	break;
	case 6:
	printf ("sau tram ");
	break;
	case 7:
	printf ("bay tram ");
	break;
	case 8:
	printf ("tam tram ");
	break;
	case 9:
	printf ("chin tram ");
	break;
}
	switch ((n%100/10)){
	case 1:
	printf ("muoi ");
	break;
	case 2:
	printf ("hai muoi ");
	break;
	case 3:
	printf ("ba muoi ");
	break;
	case 4:
	printf ("bon muoi ");
	break;
	case 5:
	printf ("nam muoi ");
	break;
	case 6:
	printf ("sau muoi ");
	break;
	case 7:
	printf ("bay muoi ");
	break;
	case 8:
	printf ("tam muoi ");
	break;
	case 9:
	printf ("chin muoi ");
	break;	
}

	switch(n%10){
			case 1:
	printf ("mot ");
	break;
	case 2:
	printf ("hai ");
	break;
	case 3:
	printf ("ba ");
	break;
	case 4:
	printf ("bon ");
	break;
	case 5:
	printf ("nam ");
	break;
	case 6:
	printf ("sau ");
	break;
	case 7:
	printf ("bay ");
	break;
	case 8:
	printf ("tam ");
	break;
	case 9:
	printf ("chin ");
	break;	
	}
	return 0;
}
