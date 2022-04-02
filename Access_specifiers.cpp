#include <iostream>
using namespace std;
class ase{
private:
	int a;
public:
	int b;
protected:
	int c;
public:
	int show(){
		a=10;
		b=20;
		c=30;
		cout<<"Accessing variables wthin the class : "<<endl;
		cout<<a<<endl;
		cout<<b<<endl;
		cout<<c<<endl;
	}
};

class sub_class:public ase{
public:
	void show(){
		b=15;
		c=25;
		cout<<"Accessing variables in sub-class : "<<endl;
		//cout<<a<<endl;
		cout<<b<<endl;
		cout<<c<<endl;
	}
};

int main(){
	int a,b,c;
	ase d;
	d.show();
	sub_class e;
	e.show();
	cout<<"Accessing variables outside the class : "<<endl;
	//cout<<d.a<<endl;
	cout<<d.b<<endl;
	//cout<<d.c<<endl;
}
