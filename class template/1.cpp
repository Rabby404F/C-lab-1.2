#include<iostream>
using namespace std;
template<typename t>
t fun(t a)
{
    cout<<a<<endl;
}
int main()
{
    fun<int>(10);
    fun<float>(12.66f);
    fun<char>('c');
}
