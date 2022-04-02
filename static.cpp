#include<iostream>
using namespace std;
class version
{
    int a;
    static int b;
    public:
        void show()
        {
            a=10;
            cout<<"Non static member : "<<a;
            cout<<endl;
        }
        static void disp()
        {
            b=41;
            cout<<"Static member : "<<b;
        }
};
int version :: b;
int main()
{
    version v;
    v.show();
    version::disp();
    return 0;
}