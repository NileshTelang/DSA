#include <iostream>
using namespace std;
class a{
public:
        void funcA(){
            cout<<"Single Inheritance"<<endl;
        }
};

class c:public a {
public:
        void funcC(){
            cout<<"Multiple Inheritance"<<endl;
        }
};

class b : public c {
    public:
            void funcB(){
                cout<<"Multi-Level Inheritance "<<endl;
            }
};

int main(){
    c C;
    C.funcA();
    b B;
    //B.funcA();
    B.funcC();  
    B.funcB();   
}