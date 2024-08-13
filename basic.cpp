#include <iostream>
#include <vector>
#include <string>
#define pi 3.141591

using namespace std;

int main()
{
    int global_var=1000;
    vector<string> msg {"Hello Trung Dang dev with C++", "C++", "World", "from", "VS Code", "and the C++ extension!"};
    int i =99;
    std::string s = std::to_string(i);
    for (const string& word : msg)
    {
        cout << word +s << " ";
    }
    cout << endl;
    cout<< "Min INT"<<INT16_MIN<<endl;
    cout<< "Max INT"<<INT16_MAX<<endl;
    cout<< "Max double"<<LONG_MAX<<endl;
    double t;
    cout<< "size of double "<<sizeof(double)<<endl;
    cout<< "size of float "<<sizeof(float)<<endl;
    cout<< "size of long"<<sizeof(long)<<endl;
    //scope
    int main_var=0;
    cout <<"scope"<<main_var<<endl;
    { //scope 1
        int scope_var_1=1;
        cout <<"scope_1"<<scope_var_1<<endl;
        {
            cout <<"scope_1"<<scope_var_1<<endl;

        }

    }
    { //scope 2
        int scope_var_2=2;
        int scope_var_1=4;
        cout <<"scope_2"<<scope_var_2<<endl;
        {
            int scope_var_2=20;
            int global_var=1001;

            cout <<"scope_2"<<scope_var_2<<endl;
            cout <<"scope_1"<<scope_var_1<<endl;
            cout <<"scope_global"<<global_var<<endl;

        }

    }
    //constant
    const double PI=3.14159;
    cout <<"define macro pi= "<<pi<<endl;
    //assign method & operator
    int i2=1.4;
    int a=6,b=4;
    int c=a/b;
    float c1=(float)a/b;
    int c2=a/b;
    cout<<i2<<endl<<c<<endl<<c1<<endl<<c2<<endl;
    int age=16;
    int next_age=++age;
    cout<<age<<endl<<next_age<<endl;





    return 0;

}