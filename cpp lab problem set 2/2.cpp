#include<iostream>
using namespace std;


class Variety_of_Numbers
{
  private:
    int n;

  public: 
   void get_input()
   {
    cin>>n;
   }
void  twin_prime();
            
};
void Variety_of_Numbers::  twin_prime()
            {  int count=0;
            for(int i=n;i>0;i--)
            {      int num=i;
                    int count=0;
                    for(int j=2;j<num;j++)
                    {
                        if(num%j==0){count++;}
                    } 
                    if(count==0)
                    {
                        int num2=num-2;
                        
                        for(int k=2;k<num2;k++)
                        {
                            if(num2%k==0){count++;}
                        } 

                    if(count==0)
                    {
                        cout<<num<<" "<<num2<<endl;
                        break;
                    }
                    }
                    else {continue;}   
            }
            } 


int main()
{
 Variety_of_Numbers obj;
 obj.get_input();
 obj.twin_prime();  
}
