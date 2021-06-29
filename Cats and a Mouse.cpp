#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        int diff1=abs(c-a);
        int diff2=abs(c-b);
        if(diff1==diff2)
        {
            cout<<"Mouse C"<<endl;
        }
        else if(diff1>diff2)
        {
            cout<<"Cat B"<<endl;
        }
        else
        {
            cout<<"Cat A"<<endl;
        }   
        
        
    }
}