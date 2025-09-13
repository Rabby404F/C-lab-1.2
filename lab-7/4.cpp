#include<iostream>
#include<fstream>
using namespace std;
class student
{
    private:
     string name;
     int roll,mark;
    public:
    void save_info()
    {
        ofstream file("student.txt");
        cout<<"Enter your Name(nickname) : ";
        cin>>name;
        file<<name;
        file<<" ";
        cout<<"Enter your roll : ";
        cin>>roll;
        file<<roll;
        file<<" ";
        cout<<"Enter your mark : ";
        cin>>mark;
        file<<mark;
        file<<" ";
        file.close();
    }
    
    void show_info()
    {
       ifstream file_2("student.txt");
       string n1;
       int r1,m1;
       file_2>>n1;
       file_2>>r1;
       file_2>>m1;
       cout<<n1<<" "<<r1<<" "<<m1<<endl;

    }
};
int main()
{
    student obj;
    obj.save_info();
    obj.show_info();
}