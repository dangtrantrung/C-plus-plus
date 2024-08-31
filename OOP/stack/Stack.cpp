#include "tstack.h"
template <class T>
Stack<T>::Stack(int sz){
 this->sz=sz;
 this->top=-1;
 this->a=new T[sz];
}
template class Stack<int>;
template class Stack<char>;
template class Stack<double>;

template <class T>
Stack<T>::~Stack(){
    delete []a;
    a=NULL;
}
template <class T>
bool Stack<T>::isEmpty() const{
    return top==-1;
}
template <class T>
bool Stack<T>::isFull() const{
    return top==sz-1;
}
template <class T>
void Stack<T>::push( T item){
    if(!isFull()){
        a[++top]=item;
    }

}
template <class T>
T Stack<T>::pop(){
    if(!isEmpty()){
        return a[top--];
    }
}
