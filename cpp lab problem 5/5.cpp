#include<iostream>
using namespace std;
class BankAccount
{
    private:
     double balance;
     
    public:
    BankAccount(double n)
    {
        balance=n;
    }
    int  operator -- ()
    {
       --balance;
       
       
    }
    void operator -- (int)
    { 
      balance--;
    }
    void display()
    {
        cout<<"After execution Balance is : "<<balance<<endl;
    }

};
int main()
{
    BankAccount obj(700000);
    --obj;
    obj.display();

    
    obj--;
    obj.display();




}

