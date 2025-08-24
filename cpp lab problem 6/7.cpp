#include<iostream>
using namespace std;
namespace physics
{
   string lab_name="phy";
}
namespace chemistry
{
    string lab_name="che";
}
int main()
{
    cout<<physics :: lab_name<<endl;
    cout<<chemistry :: lab_name<<endl;
}