#include<iostream>
using namespace std;
namespace university
{
    namespace department
    {
        class mathod
        {
            public:
            void display()
            {
                cout<<"This is mathod class"<<endl;
            }
        };
    }
}
int main()
{
    university::department::mathod obj;
    obj.display();
}