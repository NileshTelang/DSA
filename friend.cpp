#include<iostream>
using namespace std;
class a
{
    private:
        int x;
    public:
        a()
        {
            x=0;
            cout<<"value of x : "<<x;
        }
    friend int demo(a);
};
int demo(a ab)
{
    ab.x=10;
    return ab.x;
}
int main()
{
    a d;
    cout<<endl;
    cout<<"value of x is : "<<demo(d);
    return 0;
}