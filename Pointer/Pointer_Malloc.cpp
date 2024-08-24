#include <iostream>
using namespace std;

int main(){
    char *p;
    p=(char*)malloc(1000); //memory allocation 1000 bytes
    if(p==NULL){
    cout<<"khong du bo nho heap";
    exit(1);
   }
   else{
   cout<<(int*)p<<endl;
    cout<<*p<<endl;

   }
   int *p1;
   p1=(int*)malloc(1000); //memory allocation 1000 bytes
    if(p1==NULL){
    cout<<"khong du bo nho heap";
    exit(1);
   }
   else{
   cout<<p1<<endl;
    cout<<*p1<<endl;
   }

   // dynamic memory allocation-heap by C++
   int *p2=new int;
   if(p2==NULL){
    cout<<"khong du bo nho heap";
    exit(1);
   }
   *p2=100;
   cout<<"tai o nho address:"<<p2<<endl;
   cout<<"la gia tri:"<<*p2<<endl;
   //Gargabe collection
   if(p2!=NULL){
    delete p2;
    p2=NULL;
   }
}
