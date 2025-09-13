#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream file("info.txt");
    string name;
    cout<<"Enter your name(only nickname) :";
    cin>>name;
    file<<name;

    file<<" ";

    float cgpa;
    cout<<"Enter your cgpa :";
    cin>>cgpa;
    file<<cgpa;
    file.close();

    ifstream file_2("info.txt");
    string s;
    file_2>>s;
    cout<<s<<endl;

    float cg;
    file_2>>cg;
    cout<<cg<<endl;
    
}