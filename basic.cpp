#include <iostream>
#include <vector>
#include <string>

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






    return 0;

}