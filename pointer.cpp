#include<iostream>
using namespace std;

int main(){
    int a=10;
    int *ptr;
    ptr=&a;
    cout<<"The value of a is : "<<a<<endl;
    cout<<"The value of pointer is : "<<*ptr<<endl;
    cout<<"The address of a is : "<<ptr<<endl;
    cout<<"The address of ptr is : "<<&ptr<<endl;
    return 0;
}