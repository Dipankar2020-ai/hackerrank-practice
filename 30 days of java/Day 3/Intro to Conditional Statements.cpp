#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if(n%2==1)
    {
        cout<<"Weird";
    }
    if(n%2==0)
    {
        if(n>=2 && n<=5)
        {
            cout<<"Not Weird";
        }
        if(n>=6 && n<=20)
        {
            cout<<"Weird";
        }
        if(n>20)
        {
            cout<<"Not Weird";
        }
    }
    
    
}
