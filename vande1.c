#include<stdio.h>
#include<time.h>
#include <stdlib.h>
#include <string.h>
int a[10];
int b[10];
int c[10];
int n1;
int n2;
int maximum=100;
int lenght=100;
int max;
int min;
//Vande1.1
void option1(){
       
    printf("\n hay nhap so luong phan tu co trong mang n: ");
     scanf("%d",&n1);
    for(int i=0;i<=n1;i++){
        printf("hay nhap phan tu cua mang: ");
        scanf("%d",&a[i]);
    }
     printf("\n so luong phan tu co trong mang n:%d ",n1);
    for(int i=0;i<=n1;i++){
        printf("\n a[%d]:%d",i,a[i]);
    }

}

//Vande 1.2
void fillednumbers(int *b,int maximum,int lenght){
    for(int i=0;i<lenght;i++){
        b[i]=(rand() %maximum) +1;
    }


}
void option3(){
    int i;
    printf("\n please enter value of max: ");
    scanf("%d",&max);
    printf("\n please enter value of min: ");
    scanf("%d",&min);
      printf("\n hay nhap so luong phan tu co trong mang n: ");
     scanf("%d",&n2);
    for( i=0;i<n2;i++){
         printf("hay nhap phan tu cua mang: ");
        scanf("%d",&c[i]);
}
        if(c[i]>min || c[i]<max){
            for( i=n2-1;i>=0;i--){
            printf("\n a[%d]:%d",i,c[i]);       
            }
        }
    
    
}
void xuatvande1(){
    option1();
}

void xuatvande3(){
    option3();
}
int main(){
    printf("\n Van de 1.1: ");
    xuatvande1();
    printf("\n Van de 1.2: ");
    fillednumbers(b,maximum,lenght);
                
    for(int i=0;i<10;i++){
        printf("\n b[%d]:%d",i,b[i]);
    }
    printf("\n Van de 1.3: ");
    xuatvande3();
    return 0;
}
