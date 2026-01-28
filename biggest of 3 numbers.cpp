#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"enter any 3 numbers:";
    cin>>a>>b>>c;
    if((a>b)&&(a>c))
    cout<<"a is big";
    else if(b>c)
    cout<<"b is big";
    else
    cout<<"c is big";
    return 0;

}
