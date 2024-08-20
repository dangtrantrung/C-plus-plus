#include <iostream>
// #include <iomanip.h>
#include <stdlib.h>
#include <vector>
using std::cout;
using std::vector;

int main(){
    int mt1[2][3]={1,4,5,3,6,7};
    int mt2[][3]={{2,3,4},{4,5,6}};
    int mt3[2][3]={2,3,4,4,5,6};
    for (int i=0;i<2;i++){
        for (int j=0;j<3;j++){
            cout<<mt1[i][j];
            cout<<std::endl;
        }
    }
    for (int i=0;i<2;i++){
        for (int j=0;j<3;j++){
            cout<<mt2[i][j];
            cout<<std::endl;
        }
    }
   for (int i=0;i<2;i++){
        for (int j=0;j<3;j++){
            cout<<mt3[i][j];
            cout<<std::endl;
        }
    }
    return 0;
}
