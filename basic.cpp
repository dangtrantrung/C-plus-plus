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

    //relational and logic operator
    bool b2=true&&true;
    bool d=false||true;
    bool f =!((b2==d)and(b2>d));
    cout<<b2<<endl<<d<<endl<<f<<endl;
    //type cast and ASCII
    int ch='a';
    cout<<ch<<endl; // compiler auto cast ch 'a' from ASCII->int (decimal 97)
    int ch1='A';
    cout<<ch1<<endl; // compiler auto cast ch 'A' from ASCII->int (decimal 65)
    cout<<(char)(ch1+32)<<endl; // compiler auto cast ch1 'A' from ASCII->int (decimal 65) +32=97->dev try cast (97) to ASCII='a'
    int n1=3;
    int n2=2;
    float n3=(float)n1/n2; // try cast by dev
    cout<<n3<<endl;

    //ex1
    int a2,b5;
    cout<<"a=";
    cin>>a2;
    cout<<"b=";
    cin>>b5;
    cout<<"a+b="<<a2+b5<<endl;
    cout<<"a-b="<<a2-b5<<endl;
    printf("a+b=%d\n",a2+b5);
    printf("a-b=%d\n",a2-b5);
    //ex2
    char chuthuong;
    cout<<"chu cai viet thuong:"<<endl;
    cin>>chuthuong;
    cout<<"chu cai viet hoa:"<<(char)(chuthuong-32)<<endl;




    return 0;

}