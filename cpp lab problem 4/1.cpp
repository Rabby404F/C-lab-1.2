#include<iostream>
using namespace std;
class general
{
    public:
    string name;
    string address;
    public:
    void get()
    {
        cout<<"Enter your name & address : ";
        cin>>name>>address;

    }
};
class school : public general
{
    public:
    int roll;
    float cgpa;
    
    public:
    void get_2()
    {
        
        cout<<"Enter your Roll & CGPA :";
        cin>>roll>>cgpa;
    }
    void show()
    {
        cout<<"Name :"<<name<<endl;
        cout<<"Address : "<<address<<endl;
        cout<<"Roll : "<<roll <<endl;
        cout<<"Cgpa :"<<cgpa<<endl;
    }
};
int main(){
    
    school obj;
    obj.get();
    obj.get_2();
    
    obj.show();
    return 0;
}