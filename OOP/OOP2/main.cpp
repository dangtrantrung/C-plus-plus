#include "Time.h"
#include <iostream>
using namespace std;

int main(){

    Time time1(0,10,15),time2(0,10,15);
    if(time1==time2) cout<<"2 time is equal";
    else cout<<"2 time is not the same time";
    return 0;

}