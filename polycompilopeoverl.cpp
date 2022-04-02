#include <iostream>
using namespace std;
class compileoperoverl{
    private:
        int real,imag;
    public:
        compileoperoverl (int r=0,int i=0){
            real = r;
            imag = i;
        }

        compileoperoverl operator + (compileoperoverl const &obj){
            compileoperoverl res;
            res.real = real + obj.real;
            res.imag = imag + obj.imag;
            return res;
        }
    void display(){
    cout<<real<<" + i "<<imag<<endl;
    }
};

int main () {
    cout<<"PolyCompile Time - Operator Overloading"<<endl;
    compileoperoverl ab(4,5);
    compileoperoverl cd(6,7);
    compileoperoverl ef = ab + cd;
    ef.display();
}