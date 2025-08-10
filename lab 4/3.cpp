#include<iostream>
using namespace std;
class first_info
{
    protected:
    string Name,Designation;
    public:
     void set_data()
    {
        cout<<"Enter your name & designation : ";
        cin>>Name>>Designation;
    }
};
class second_info
{
   protected:
   double sallary;
   string experience;
   public:
    void set_data_2()
    {
        cout<<"Enter your sallary & Experience : ";
        cin>>sallary>>experience;
    }
};
class display : public first_info , public second_info
{    public:
    void show()
    {
        cout<<"Name :"<<Name<<endl;
        cout<<"Designation : "<<Designation<<endl;
        cout<<"sallary is : "<<sallary<<endl;
        cout<<"Experience is :"<<experience<<endl;
    }

};
int main()
{
    display obj;
    obj.set_data();
    obj.set_data_2();
    obj.show();
}