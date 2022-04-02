#include <algorithm>
#include <iostream>
#include <string.h>
using namespace std;
int main(){
    //string name;
    char name[100];
    cout<<"Enter the string to be reversed : ";
    //getline(cin,name);
    cin.getline(name,20);
    //reverse(name.begin(),name.end());
    strrev(name);
    cout<<"The reversed string is : "<<name;
    return 0;
}