#include<iostream>
using namespace std;
class Parent_class
{
    public:
    ~Parent_class()
    {
        cout<<"Parent class distructor!"<<endl;
    }
};
class child_class : public Parent_class
{
    public:
    ~child_class()
    {
        cout<<"Child class distructor!"<<endl;
    }
};
int main()
{
    child_class obj;
}