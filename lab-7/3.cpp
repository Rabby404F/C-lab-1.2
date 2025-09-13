#include<iostream>
#include<string>
#include<fstream>
using namespace std;
int main()
{
    ifstream file("say_example.txt");
    int w_cnt=0;
    int l_cnt=0; 
    int c_cnt=0;
    string str;
    while(getline(file,str))
    {    l_cnt++;

       for(int i=0;i<str.length();i++)
       {
          c_cnt++;

         if((str[i] != ' ' && str[i] != '\n' && str[i] != '\t')  && 
        (str[i+1] == ' ' || str[i+1] == '\n' || str[i+1] == '\t' || str[i+1] == '\0') )
        {
          w_cnt++;
        }
        
       }
       cout<<l_cnt<<" "<<w_cnt<<" "<<c_cnt<<endl;

    }
    cout<<l_cnt<<" "<<w_cnt<<" "<<c_cnt<<endl;

}