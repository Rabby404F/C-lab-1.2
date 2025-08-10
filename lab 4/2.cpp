#include<iostream>
using namespace std;
class general
{
    protected:
    string name;
    string address;
    public:
    void set_data()
    {
        cout<<"Enter your name & address : ";
        cin>>name>>address;

    }
};
class school : public general
{
    protected:
    int roll;
    float cgpa;
    
    public:
    void set_data_2()
    {
        
        cout<<"Enter your Roll & CGPA :";
        cin>>roll>>cgpa;
    }
    
};
class display : public school
{
    public:
    void show()
    {
        cout<<"Name :"<<name<<endl;
        cout<<"Address : "<<address<<endl;
        cout<<"Roll : "<<roll <<endl;
        cout<<"Cgpa :"<<cgpa<<endl;
    }
};
int main(){
    display obj;
    obj.set_data();
    
    obj.set_data_2();
   
    obj.show();
    return 0;
}