#include<iostream>
using namespace std;
namespace physics
{
   string lab_name="Find wave length";
}
namespace chemistry
{
    string lab_name="atomic structure";
}
int main()
{
    cout<<physics :: lab_name<<endl;
    cout<<chemistry :: lab_name<<endl;
}