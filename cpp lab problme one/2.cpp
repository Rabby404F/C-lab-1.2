#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int a,b,c;
    cout<<"INput tryangl 3 side langth : ";
    cin>>a>>b>>c;

    float s=(a+b+c)/2.0;

    float area=sqrt(s*(s-a)*(s-b)*(s-c));
    cout<<"area = "<<area;
    return 0;


}