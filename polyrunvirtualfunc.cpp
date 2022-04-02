#include<iostream>
using namespace std;
class base{
    public:
        virtual void show(){
            cout<<"This is base class show func "<<endl;
        }
        void display(){
            cout<<"This is base class display func "<<endl;
        }
};

class derived:public base{
    public:
        void show(){
            cout<<"This is derived class show func "<<endl;
        }
        void display(){
            cout<<"This is derived class display func "<<endl;
        }
};

int main(){
    base *baseptr;
    derived obj;
    baseptr = &obj;
    baseptr -> show();
    baseptr -> display();
    
    return 0;
}