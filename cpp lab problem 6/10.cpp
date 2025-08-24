#include<iostream>
using namespace std;
namespace HR
{
    class person
    {
        public:
         void show_info();
    };
    void HR::person:: show_info()
{
    cout<<"This is person class"<<endl;
}
}

int main()
{
    HR::person obj;
    obj.show_info();
}