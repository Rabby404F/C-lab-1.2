#include<iostream>
using namespace std;
class student
{
    private:
    int mark;

    public :
    student(int x)
    {
     mark=x;
    }
    void operator ++ ()
    {
        ++mark;
    }
    void operator ++ (int)
    {
        mark++;
    }
    void display()
    {
        cout<<"Mark is = "<<mark<<endl;
    }
};
int main()
{
    student obj(75);
    int n=5;
    for(int i=1;i<=n;i++)
    {
        ++obj;
    }
    obj.display();

    for(int i=1;i<=n;i++)
    {
        obj++;
    }
    obj.display();


}