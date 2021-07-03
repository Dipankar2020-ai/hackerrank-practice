#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
   long long int n,i;
    long long int shared,linked,cumulative;
    cin>>n;
    shared=5;
    linked=floor(shared/2);
    cumulative=linked;
    //cout<<linked;
    for(i=2;i<=n;i++)
    {
       
        shared=linked*3;
        linked=floor(shared/2);
        cumulative=cumulative+linked;
        
    }
    cout<<cumulative;
}