#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include<math.h>
#include<time.h>


struct truyen{
    char matruyen[10];
    char tentruyen[40];
    char tacgia[40];
    char ngayxuatban[40];
    double gia;
};
typedef struct truyen truyen;

struct node{
    truyen data;
    struct node* next;
};
typedef struct node node;

struct stack{
    node *top;
};
typedef struct stack stack;

//Tao node
node *initNode(truyen x){
    node *newNode = (node*)malloc(sizeof (node));
    newNode->data = x;
    newNode->next = NULL;
    return newNode;
}

//Tao stack
void initStack(stack *s){
    s->top = NULL;
}

//Kiem tra stack rong
bool isEmpty(stack s){
    if(s.top==NULL) return true;
    return false;
}

//Kiem tra stack day
bool isFull(){
    node *p = new node;
    if(p == NULL){
        return true;
    }
    delete p ;
    return false;
}

//Dem so node trong stack
int count(stack s){
	int cnt=0;
	while(s.top!=NULL){
		cnt++;
		s.top=(s.top)->next;
	}
	return cnt;
}

//Kiem tra ma truyen trung nhau
int trung_ma(stack s,char *matruyen){
    node *p = s.top;
    while(p!= NULL){
        if(strcmp(p->data.matruyen,matruyen)==0){
            return 1;
        }
        p=p->next;
    }
    return 0;
}

//Nhap du lieu cho truyen
void input_truyen(truyen *x){
    printf("\nHay nhap ma truyen: ");
    gets(x->matruyen);
   
    printf("Hay nhap ten truyen: ");
    gets(x->tentruyen);
   
    printf("Hay nhap tac gia: ");
    gets(x->tacgia);
  
    printf("Hay nhap ngay xuat ban: ");
    gets(x->ngayxuatban);
    
    printf("Hay nhap gia: ");
    scanf("%lf",&x->gia);
    getchar();
    
}

//Them truyen vao danh sach
bool Push(stack &s,truyen x){
    node *p = initNode(x);
    if(isFull()){
        return false;
    }        
    else if(s.top == NULL){
        s.top = p;
    }
    else{
        p->next=s.top;
        s.top=p;
    }
    return  true;
}

//Xoa truyen ra khoi danh sach
bool Pop(stack &s,truyen &x){
    if(isEmpty(s)){
        return false;
    }
    else{
        node *q = s.top;
        x = s.top->data;
        s.top = s.top->next;
        delete q;
        return true; 
    }
}

//Xoa toan bo danh sach
void Clear(stack *s){
	for(node *i=s->top;i!=NULL;i=i->next){
		node *tmp=s->top;
		s->top=tmp->next;
		delete tmp;
	}
}

//Thong tin cua mot cuon truyen
void out_put_one(node* &p){
	printf("******************************************************************************************************************\n");
    printf("%-15s%-30s%-30s%-30s%-15.2lf\n",(p->data).matruyen,(p->data).tentruyen,
				(p->data).tacgia, (p->data).ngayxuatban
				,(p->data).gia);
}

//Thong tin danh sach truyen
void out_put_comic_list(stack s){
    node* p =s.top;
    printf("%-15s%-30s%-30s%-30s%-15s\n","ID","Name","Author","Release-date","Price");
    while(p!= NULL){
        out_put_one(p);
        p=p->next;
    }
    printf("******************************************************************************************************************\n");
}

//Kiem tra thong tin truyen dau tien
void check_first_comic(stack s){
    node *p = s.top;
    if(s.top == NULL){
        return;
    }
    else{
        out_put_one(p);
    }
  
}

// Tim 1 cuon sach theo ten
node *find(stack s){   
    node *p =s.top;
    char find_comic[40];
    printf("\nHay nhap ma truyen muon tim: ");
    gets(find_comic);
    while(p!= NULL){
        if(strcmp(p->data.matruyen,find_comic)==0){
            return p;
        }
        p=p->next;
    }
   return NULL;
   
}

// Thay doi cuon sach theo ten
void changed_comic(stack *s, char *change_comic, char *find_comic){
    node *p = s->top;
    int flag= 0;
    while(p!= NULL){
        if(strcmp(p->data.matruyen,find_comic)==0){
            strcpy(p->data.tentruyen, change_comic);
       		flag=1;
       		break;
        }
        p= p->next;
    }
    if(flag==0){
        printf("Khong tim duoc truyen");
    }
    else{
        printf("Thay doi ten truyen thanh cong");
    }
    printf("\n");
}

//Thong tin truyen theo tac gia
void comicByAuthor(stack s, char *nameAuthor){
	node *tmp=s.top;
	int flag=0;
	while(tmp!=NULL){
		if(strcmp((tmp->data).tacgia,nameAuthor)==0){
			out_put_one(tmp);
			flag=1;
		}
		tmp=tmp->next;
	}
	if(flag==0){
		printf("Khong tim thay tac gia\n");
	}
}

//Dao nguoc danh sach
void reverse_comic_list(stack &s){
    node* parent = s.top;
    node* current = s.top->next;
    s.top = current->next;
    parent->next = NULL;
    current->next = parent;

    while(s.top->next){
        parent = current;
        current = s.top;
        s.top = s.top->next;
        current->next = parent;
    }
    s.top->next = current;
}

//Doc file 
void readFile(stack &s,truyen * data,char *filename){
	FILE *f=fopen(filename,"r");
	if(f==NULL){
		printf("Can't open file\n");
	}
	else{
		while(fgets(data->matruyen,10,f)!=NULL){
			data->matruyen[strlen(data->matruyen)-1]='\0';
			
			fgets(data->tentruyen,40,f);
			data->tentruyen[strlen(data->tentruyen)-1]='\0';
					
			fgets(data->tacgia,40,f);
			data->tacgia[strlen(data->tacgia)-1]='\0';
	
			fgets(data->ngayxuatban,40,f);
			data->ngayxuatban[strlen(data->ngayxuatban)-1]='\0';
					
			fscanf(f,"%lf",&data->gia);
			fgetc(f);
			
			if(trung_ma(s,data->matruyen)!=1){
				Push(s,*data);
				printf("\nDa them %s vao danh sach",data->tentruyen);	
			}
			else{
				printf("\nDa co %s trong danh sach",data->tentruyen);
			}	
		}
		printf("\n");
	}
	fclose(f);
}

//Viet file
void writeFile(truyen *data, char *filename){
	FILE *f=fopen(filename,"a+");
	if(!f){
		printf("Can't find file\n'");
	}
	else{
		fprintf(f,"%s\n",data->matruyen);
		fprintf(f,"%s\n",data->tentruyen);
		fprintf(f,"%s\n",data->tacgia);
		fprintf(f,"%s\n",data->ngayxuatban);
		fprintf(f,"%.2lf\n",data->gia);
	}
	fclose(f);
}

//Dua danh sach truyen vao file
void writeStack(stack s, char *filename){
	while(s.top!=NULL){
		writeFile(&(s.top->data),filename);
		s.top=s.top->next;
	}
}

int main(){
    stack s; 
    stack r;
    
    truyen x;
    int choice;
    
    char filename[]="store.txt";
    char change_comic[40];
    char find_comic[40];
    char nameAuthor[40];
    
    initStack(&s);

    do{
	    printf("\n**********DANH SACH QUAN LY TRUYEN***********");
	    printf("\n|1.NHAP MOT CUON SACH VAO DANH SACH         |");
	    printf("\n|2.NHAP SACH TU FILE VAO DANH SACH          |");
	    printf("\n|3.XOA MOT CUON SACH TU DANH SACH           |");
	    printf("\n|4.KIEM TRA CUON SACH DAU TIEN CUA DANH SACH|");
	    printf("\n|5.TIM CUON SACH THEO TEN CUA DANH SACH     |");
	    printf("\n|6.THAY DOI MOT CUON SACH THEO TEN          |");
	    printf("\n|7.XUAT RA DANH SACH                        |");
	    printf("\n|8.SO TRUYEN TRONG DANH SACH                |");
	    printf("\n|9.DANH SACH TRUYEN THEO TAC GIA            |");
	    printf("\n|10.DAO NGUOC DANH SACH                     |");
	    printf("\n|11.HUY DANH SACH                           |");
	    printf("\n|0.THOAT                                    |");
	    printf("\n*********************************************");
	    printf("\nHay nhap lua chon:");
	    scanf("%d",&choice); getchar();
	    
	    switch (choice){
	    	case 1:
	    		readFile(s,&x,filename);
	     		printf("\n1.NHAP MOT CUON SACH VAO DANH SACH");
	            input_truyen(&x);
	            if(trung_ma(s,x.matruyen)!=1){
	            	Push(s,x);
	            	writeFile(&x,filename);
				}
				else{
					printf("Da co %s trong danh sach\n",x.tentruyen);
				}
	        	break; 
	    	case 2:
	     		printf("\n2.NHAP SACH TU FILE VAO DANH SACH");
	    		readFile(s,&x,filename);
	    		break;
	    	case 3:
	     		printf("\n3.XOA MOT CUON SACH TU DANH SACH");
	      		if(!Pop(s,x)){
	        		printf("\nDanh sach rong\n");
	     		}
	     		else{
	        		printf("\nDa xoa truyen %s\n",x.tentruyen);
	        		if(remove(filename)==0){
	        			writeStack(s,filename);
					}
	     		}
	     		break;
	    	case 4:
	    		printf("\n4.KIEM TRA CUON SACH DAU TIEN CUA DANH SACH\n");
	       		if(isEmpty(s)){
	        		printf("Danh sach rong\n");
	     		}
	     		else{
	       			check_first_comic(s);
	     		}
	     		break;
	     	case 5:
	        	printf("\n5.TIM CUON SACH THEO TEN CUA DANH SACH");
	        	if(isEmpty(s)){
	        		printf("\nDanh sach rong\n");
	      		}
	     		else{
	          		node *tmp = find(s);
	           		if(tmp!=NULL){
	               		out_put_one(tmp);
	           		}
	           		else{
	               		printf("Khong tim thay truyen\n");
	           		}
	     		}
	     		break;
	     	case 6:
	        	printf("\n6.THAY DOI MOT CUON SACH THEO TEN");
	      		if(isEmpty(s)){
	        		printf("\nDanh sach rong");
	     		}
	     		else{
	     			printf("\nHay nhap ma truyen de doi ten: "); gets(find_comic);
	     			printf("Hay nhap ten truyen moi de thay doi: "); gets(change_comic);
	        		changed_comic(&s,change_comic, find_comic);
	        		
	        		if(remove(filename)==0){
	        			writeStack(s,filename);
					}
	     		}
	     		break;
	     	case 7:
	         	printf("\n7.XUAT RA DANH SACH\n");
	      		if(isEmpty(s)){
	        		printf("Danh sach rong\n");
	     		}
	     		else{
	      			out_put_comic_list(s);
	     		}
	     		break;
	     	case 8:
	     		printf("\n8.SO TRUYEN TRONG DANH SACH");
	     		printf("\nSo truyen trong danh sach: %d\n",count(s));
	     		break;
	     	case 9:
	     		printf("\n9.DANH SACH TRUYEN THEO TAC GIA\n");
	     		if(isEmpty(s)){
	     			printf("Danh sach rong\n");	
				}
				else{
	     			printf("Hay nhap ten tac gia de tim:");
	     			gets(nameAuthor);
	     			comicByAuthor(s,nameAuthor);	
				}
	     		break;
	     	case 10:
	     		printf("\n10.DAO NGUOC DANH SACH\n");
	     		reverse_comic_list(s);
	     		printf("Dao nguoc thanh cong\n");
	     		break;
	     	case 11:
	     		printf("\n10.HUY DANH SACH\n");
	     		Clear(&s);
	     		printf("Da huy danh sach\n");
	     		break;
	     	case 0:
	     		printf("Thoat\n");
	    		break;
	    	default:
	    		printf("\nLua chon khong hop le");
	        	break;
	    }
    }while(choice !=0);
}
