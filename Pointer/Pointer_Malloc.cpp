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
   free(p);
   free(p1);
   cout<<"sau khi free ..."<<endl;
   cout<<p<<endl;
   cout<<p1<<endl;
//    p=NULL;
//    p1=NULL;
   cout<<*p<<endl;
   cout<<*p1<<endl;
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
   //void pointer
   int a=5;
   float f=1.5;
   int* pa;
   float* pf;
   void *pvoid;
   pa=&a;
   pf=&f;
   pvoid=&a;
   cout<<" int pointer void="<<*((int*)pvoid);
   pvoid=&f;
   cout<<"\n float pointer void="<<*((float*)pvoid)<<endl;



}
