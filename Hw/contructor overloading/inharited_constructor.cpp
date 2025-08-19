#include<iostream>
using namespace std;
class base_class
{
    public:
    base_class(int x)
    {
        cout<<"This number is : "<<x<<endl;
    }
};
class derived_class : public base_class
{
    using base_class :: base_class;

};
int main()
{
    derived_class obj(99);
}