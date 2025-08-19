#include<iostream>
using namespace std;
class base_class
{
    public:
     base_class()
     {
        cout<<"Bese class constructor ! "<<endl;
     }
};
class derived_class : public base_class
{
    public:
    derived_class()
    {
        cout<<"Derived class constructor !"<<endl;
    }
};
int main()
{
    derived_class obj;
    
}