#include <iostream>
using namespace std;
class compilefuncoverl{
public:
        void funA(){
            cout<<"Func with no arguments "<<endl;
        }
        void funA(int x){
            cout<<"Func with int arguments "<<endl;
        }
        void funA(double x){
            cout<<"Func with double arguments "<<endl;
        }     
};

int main(){
    cout<<"Compile Time - Function overloading : "<<endl;
    compilefuncoverl ab;
    ab.funA();
    ab.funA(7);
    ab.funA(6.0);
}