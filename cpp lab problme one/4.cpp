#include<iostream>
using namespace std;

int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    cout<<"1st number = "<<a<<"            "<<"2nd number = "<<b<<"            "<<"3rd Number = "<<c<<endl;

    if(a>=b&&a>=c)
    {cout<<"The 1st number is the greatest among three.";}
    else if(b>=a && b>=c)
    {cout<<"The 2nd number is the greatest among three.";}
    else
    {cout<<"The 3rd number is the greatest among three.";}

    return 0;
}