#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream file ("distination.txt");
    ifstream fl("source.txt");
    
    string s;
    while(getline(fl,s))
    {
        
        file<<s<<"\n";
    }
    file.close();
    fl.close();
}