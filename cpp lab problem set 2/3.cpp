#include<iostream>
using namespace std;
class Sum
{
    public:
     int a,b;

    public:
    void get()
    {
        cin>>a;
        cin>>b;
    }
    void degit_summation()
    {
            int sum=0;

            for(int i=a;i<=b;i++)
            {
                int num=i;
                int temp_sum=0;
                while(num!=0)
                {
                    int degit=num%10;
                    temp_sum+=degit;
                    num=num/10;
                    
                }
                sum+=temp_sum;
            }
            cout<<sum<<endl;
            }
};

int main()
{
    
Sum obj;
obj.get();
obj.degit_summation();
    
}