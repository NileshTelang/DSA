#include <iostream>

using namespace std;

class base
{
	int a;
	public:
		int b;
		void display()
		{
			cout<<"This is base cl;ass"<<endl;
		}
};


class derived:public base

{
	int c;
	public:
		void displa_y()
		{
			cout<<"This is derived class"<<endl;
		}
};

int main()
{
	
	base b;
	derived d;
	d.display()<<endl;
	d.displa_y()<<endl;
	b.display()<<endl;
	
	return 0;
	
}
