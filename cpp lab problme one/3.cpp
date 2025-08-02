#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    float pi=3.14159;

    cout<<"|"<<setw(8)<<fixed<<setprecision(4)<<pi<<"|"<<endl;
    cout<<"|"<<setw(10)<<fixed<<setprecision(4)<<pi<<"|"<<endl;
    cout<<"|"<<setw(8)<<setfill('-')<<fixed<<setprecision(4)<<pi<<"|"<<endl;
     cout<<"|"<<setw(10)<<setfill('-')<<fixed<<setprecision(4)<<pi<<"|"<<endl;
     cout<<scientific<<pi<<endl;
}

