#include <iostream>
using namespace std;
int main(){
    int sotien, sotien5,sotien10,sotien20,sotien50;
cout<<"nhay nhap so tien: "<<endl;
cin>>sotien;
if(sotien%50000!=0 && sotien<50000){
    cout<<"so tien ban nhap ko hop le"<<endl;
}
else {
    sotien5=sotien/50000;
    sotien10=sotien/100000;
    sotien20=sotien/200000;
    sotien50=sotien/500000;

    for(int a=0;a<=sotien5;a++){
        for(int b=0;b<=sotien10;b++){
            for(int c=0;c<=sotien20;c++){
                for(int d=0;d<=sotien50;d++){
                    if(sotien==a*50000+b*100000+c*200000+d*500000){
                        cout<<a<<" to 50000"<<b<<" to 100000"<<c<<" to 200000"<<d<<" to 500000"<<endl;
                    }
                }
            }
        }
    }



}


return 0;
}