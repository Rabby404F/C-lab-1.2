#include<iostream>
using namespace std;
namespace school
{
    int total_student;
    void fun()
    {
        cout<<total_student<<endl;
    }
}
int main()
{
    school :: total_student=199;
    school :: fun();
}