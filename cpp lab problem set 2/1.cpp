#include<iostream>
using namespace std;
class Number
{
    public:
       int n;

    public:
   void get()
   {
    cin>>n;
    
   }
   void nth_prime_sum()
   {
 int count=1;
  int num=2;
  int sum=0; 
    while(count<=n)
    {
        int isprime=0;
        
        for(int i=2;i<num;i++)
        {
            if(num%i==0){isprime++;}
        }
        if(isprime==0){ 
            sum+=num;
            cout<<num<<" ";
            count++;}
        
        num=num+1;
    }
    cout<<endl;
    cout<<"N number of prime number sum = "<<sum<<endl;
   }

};

int main()
{
   Number obj;
   obj.get();
   obj.nth_prime_sum();
   return 0;
    
 
}