#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
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







    return 0;

}