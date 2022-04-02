#include<iostream>
using namespace std;
class a
{
    public:
        inline void add(int a,int b)
        {
            int c;
            c=a+b;
            cout<<"Addition is : "<<c;
        }
};

int main()
{
    a ab;
    ab.add(2,5);
    return 0;
}