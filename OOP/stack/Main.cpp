#include "tstack.h"
int main(){

Stack<char> st(10);
st.push('a');st.push('c');st.push('z');
while(!st.isEmpty()){
    cout<<st.pop()<<endl;
}
return 0;
}