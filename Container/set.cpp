#include <bits/stdc++.h>
#include <set>
using namespace std;

//O(logn)
//size
//find
//count
//erase

int main(){
    set<int> s;
    s.insert(100);
    s.insert(200);
    s.insert(300);
    s.insert(100);
    cout<<s.size()<<endl;
    set<int> s1;
    for (int i=0;i<10;i++)
    {
        s1.insert(i);
    }
    if(s1.count(5)) cout<<"Found 5 in set"<<endl;
    else cout<<"Not found 5";
    s1.erase(9);
    cout<<s1.size()<<endl;
    if(s1.find(9)!=s1.end()) cout<<"Found 9 in set"<<endl;
    else cout<<"Not found 9"<<endl;
    //erase by iterator
    s1.erase(s1.find(6));
    for(int x:s1) cout<<x<<",";
    cout<<endl;
    cout<<*s1.begin()<<endl;
    cout<<*s1.rbegin()<<endl;
    cout<<*s1.end()<<endl;
    for(auto x:s1) cout<<x<<"-";
    cout<<endl;

    return 0;
}