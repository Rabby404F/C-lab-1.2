#include<iostream>
using namespace std;
namespace university
{
    namespace department
    {
        class student
        {
            public:
            void display()
            {
                cout<<"This is student class"<<endl;
            }
        };
    }
}
int main()
{
    university::department::student obj;
    obj.display();
}