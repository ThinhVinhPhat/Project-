#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct Words {
    char tu[40];
    char loaitu[200];
    char vidu[200];
    char nghiatu[200];
};

struct tree{
    Words data;
    tree* left;
    tree* right;
};

struct tree* createTreeNode(struct Words data) {
    struct tree* newNode = (struct tree*)malloc(sizeof(struct tree));
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}
// nhap thong tin tu
void Nhap_Tu(Words* s){
   
    printf("\n hay nhap tu: ");
    gets(s->tu);
    printf("\n hay nhap loai tu: ");
    gets(s->loaitu);
    printf("\n hay nhap vi du ve tu do: ");
    gets(s->vidu);
    printf("\n hay nhap nghia cua tu do: ");
    gets(s->nghiatu);
}

// them tu vao tu dien
int Them_Tu(tree* &s , Words* p){
    if(s != NULL){
        if(strcmp(s->data.tu,p->tu)==0){
            return 0;
        }
        else if(strcmp(s->data.tu,p->tu)>0){
            Them_Tu(s->left,p);
        }
        else if(strcmp(s->data.tu,p->tu)<0){
            Them_Tu(s->right,p);
        }
    }
    else if(s == NULL){
      s= createTreeNode(*p);
    }
}

// cho phep vo so lan tu vao tu dien cho den khi nhap trung
void Nhap_cay(tree *&s){
    Words x;
    do{
        Nhap_Tu(&x);
        int kq = Them_Tu(s,&x);
    if(kq == 0 || kq ==-1){
        break;
    }

    }while(true);


}
// ham sua nghia cua tu trong tu dien
int sua_nghia(tree *&s,char* nghia,char* tu){
    if(s== NULL){
        return -1;
    }
    else{
        if(strcmp(s->data.tu,tu)==0){
            strcpy(s->data.nghiatu,nghia);
            return 1;
        }
        else if(strcmp(s->data.tu,tu)>0){
            sua_nghia(s->left,nghia,tu);
        }
        else{
             sua_nghia(s->right,nghia,tu);
        }
    }
}


// ham tim tu trong tu dien thong qua nghia cua tu
tree* find_word_through_meane(tree* &s, char* nghia){
   
     if(s== NULL){
        return NULL;
    }
    else{
        if(strcmp(s->data.nghiatu,nghia)==0){
            return s;
        }
        else if(strcmp(s->data.nghiatu,nghia)>0){
          find_word_through_meane(s->left,nghia);
        }
        else{
             find_word_through_meane(s->right,nghia);
        }
    }
}
// ham dem so luong tu trong tu dien
int count_node(tree* &s){
    if(s== NULL){
        return 0;
    }
    return 1 + count_node(s->left) + count_node(s->right);
}
// ham chi bo tro cho ham xoa
tree* find_word(tree* &s, char* tu){
   
     if(s== NULL){
        return NULL;
    }
    else{
        if(strcmp(s->data.tu,tu)==0){
            return s;
        }
        else if(strcmp(s->data.tu,tu)>0){
          find_word(s->left,tu);
        }
        else{
             find_word(s->right,tu);
        }
    }
}

// ham chi bo tro cho ham xoa 
tree* Minvalue(tree* &s){
    tree* min = s;
    while(min && min->left != NULL){
        min= min->left;
    }
    return min;
}

// ham cho phep xoa mot tu trong tu dien
tree* Xoa_tu(tree *&s,tree*x){
    if(s== NULL){
        return s;
    }
else{
    if(strcmp(s->data.tu,x->data.tu)>0){
        s->left = Xoa_tu(s->left,x);
    }
    else if(strcmp(s->data.tu,x->data.tu)<0){
        s->right = Xoa_tu(s->right,x);
    }
    else{
        tree* p =s;
        if(s->left == NULL){
            s = s->right;
            delete p ;
        }
        else if(s->right == NULL){
            s = s->left;
            delete p;
        }
        else{
        tree* temp = Minvalue(s->right);
        s->data = temp->data;
        s->right = Xoa_tu(s->right,temp);
        }
    }
    
}
    return s;
}
// ham xuat du lieu
void title(){
printf("+--------------------------------+-------------------------------+-------------------------------+-------------------------------+\n");
printf("| %-30s| %-30s| %-30s| %-30s|\n", "WORD", "WORD TYPE", "TRANSLATED", "EXAMPLES");
printf("+--------------------------------+-------------------------------+-------------------------------+-------------------------------+\n");
}

void output(tree *s){
printf("| %-30s| %-30s| %-30s| %-30s|\n", s->data.tu,s->data.loaitu,s->data.nghiatu,s->data.vidu );
printf("+--------------------------------+-------------------------------+-------------------------------+-------------------------------+\n");    
}
// ham xuat du lieu kieu NLR
void NLR(tree* s){
    if(s!= NULL){
   output(s);

    NLR(s->left);
    NLR(s->right);
    }
  
}
// ham xuat du lieu kieu LNR
void LNR(tree* s){
    if(s!= NULL){

    NLR(s->left);
   output(s);
    NLR(s->right);
    }
  
}
// ham xuat du lieu kieu LRN
void LRN(tree* s){
    if(s!= NULL){

    NLR(s->left);
    NLR(s->right);
 output(s);
    }
  
}
// HAM XOA TAT CA DU LIEU TRONG TU DIEN 
int delete_all(tree* &s){
   if(s== NULL){
    return 1;
   }
   delete_all(s->left);
   delete_all(s->right);

   delete s;
}
// HAM DOC FILE
void readFile(tree* &s,Words* p,char* filename){
    FILE* f = fopen(filename,"r");
    if(f == NULL){
        printf("\n khong the mo file");
    }
    else{
        while(fgets(p->tu,40,f)!=NULL){
        p->tu[strlen(p->tu)-1]='\0';

         fgets(p->loaitu,40,f);
        p->loaitu[strlen(p->loaitu)-1]='\0';

        fgets(p->nghiatu,40,f);
        p->nghiatu[strlen(p->nghiatu)-1]='\0';

        fgets(p->vidu,40,f);
        p->vidu[strlen(p->vidu)-1]='\0';

        Them_Tu(s,p);
        printf("da them tu %s vao tu dien \n",p->tu);
        }
    }
    fclose(f);

}
// HAM NHAP FILE
void writeFile(tree* s,Words *p , char* filename){
    FILE* f = fopen(filename, "a+");
    if(s== NULL){
        printf("\n khong the mo file");
    }
    else{
        fprintf(f,"%s\n",p->tu);
        fprintf(f,"%s\n",p->loaitu);
        fprintf(f,"%s\n",p->nghiatu);
        fprintf(f,"%s\n",p->vidu);

    }
    fclose(f);
}

int main(){
    tree* s = NULL;
    int choice;
    Words q;
 char filename[]="C:\\Users\\Admin\\Desktop\\CTDL&GT\\tudien.txt";
do{

printf("\n|--------------------------------------------------|\n");
printf("|           TU DIEN ANH VIET                       |\n");
printf("|--------------------------------------------------|\n");
printf("| 1.NHAP VAO TU MOI                                |\n");
printf("| 2.NHAP TU CO SAN TU FILE VAO TU DIEN             |\n");
printf("| 3.XOA 1 TU TRONG TU DIEN                         |\n");
printf("| 4.XUAT RA TAT CA TU TRONG TU DIEN                |\n");
printf("| 5.TONG SO TU CO TRONG TU DIEN                    |\n");
printf("| 6.THAY DOI NGHIA CUA TU CO TRONG TU DIEN         |\n");
printf("| 7.TIM KIEM TU THEO NGHIA CUA TU                  |\n");
printf("| 8.XOA TOAN BO TU DIEN                            |\n");
printf("| 0. THOAT                                         |\n");
printf("|--------------------------------------------------|\n");
   printf("Hay nhap lua chon cua ban: ");
    scanf("%d",&choice);
     getchar();
    switch (choice)
    {
    case 0:
    printf("\n Thoat");
    break;
    
    case 1:
    printf("1.NHAP VAO TU MOI\n");
    Nhap_cay(s);
    break;
    case 2:
     printf("2.NHAP TU CO SAN TU FILE VAO TU DIEN\n");
        readFile(s,&q,filename);
        writeFile(s,&q,filename);
     break;
    case 3:
    printf("3.XOA 1 TU TRONG TU DIEN\n");
    if(s== NULL){
        printf("\n hien tai tu dien dang rong");
    }
    else{
    char tu[40];
    int del_choice;
    printf("\n hay nhap tu ban muon xoa: ");
    gets(tu);
 
         printf("\n ban co muon xoa tu ban vua nhap khong \n");
    printf("1.YES \n");
    printf("2.NO \n");
    printf("Hay nhap lua chon cua ban: ");
    scanf("%d",&del_choice);
   
    if(del_choice ==1 ){
         tree* p = find_word(s,tu);
    s= Xoa_tu(s,p);
    printf("\n da xoa thanh cong");
    }
     break;

    }
    case 4:
    printf("| 4.XUAT RA TAT CA TU TRONG TU DIEN   |\n");
    int output_choice;
    do{
    printf("\n ban muon xuat theo kieu nao \n");
    printf("1.NLR\n");
    printf("2.LNR\n");
    printf("3.LRN\n");  
    printf("0.THOAT\n");
    printf("Hay nhap lua chon cua ban: ");
    scanf("%d",&output_choice);

    switch (output_choice)
    {
    case 1:
    printf("1.NLR\n");
    if(s== NULL){
        printf("\n hien tai tu dien dang rong");
    }
    else{
        title();
        NLR(s);
    break;
    }
    case 2:
     printf("2.LNR\n");
    if(s== NULL){
        printf("\n hien tai tu dien dang rong");
    }
    else{
          title();
        LNR(s);
         break;
    }
   
    case 3:
     printf("3.LRN\n");  
    if(s== NULL){
        printf("\n hien tai tu dien dang rong");
    }
    else{
          title();
        LRN(s);
        break;
    }
    }
    }while(output_choice != 0);
    break;


    case 5:
    printf("5.TONG SO TU CO TRONG TU DIEN\n");
     if(s== NULL){
        printf("\n hien tai tu dien dang rong");
    }
    else{
       printf("\n tong so luong tu co trong tu dien la: %d",count_node(s)) ;
    }
    break;


    case 6:
    printf("6.THAY DOI NGHIA CUA TU CO TRONG TU DIEN\n");
     if(s== NULL){
        printf("\n hien tai tu dien dang rong");
    }
    else{
        char change_word[40];
        char change_mean[40];
   
        printf("\n hay nhap tu ban muon sua: ");
        gets(change_word);

        printf("\n hay nhap nghia muon thay doi: ");
        gets(change_mean);

        int k1= sua_nghia(s,change_mean,change_word);

        if(k1 ==1){
            printf("\n da sua thanh cong");
        }
        else{
            printf("\n khong tim thay tu");
        }
    }
    break;


    case 7:
    printf("7.TIM KIEM TU THEO NGHIA CUA TU \n");
    char nghia[40];
     
      tree* p ;
    printf("\n hay nhap nghia cua tu ban tim kiem: ");
    gets(nghia);

     p= find_word_through_meane(s,nghia);
       title();
    output(p);
    break;


    case 8:
    printf("8.XOA TOAN BO TU DIEN\n");
    
    if(delete_all(s)==1){
        printf("\n da xoa thanh cong");
    }
    break;

    default:
    printf("\n so ban chon khong hop le");
    break;
}

}while(choice != 0);
}