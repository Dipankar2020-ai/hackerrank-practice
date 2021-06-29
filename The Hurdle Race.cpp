#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,i;
    cin>>n>>k;
    int arr[n];
    int max=INT_MIN;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    if(k<max)
    {
        cout<<max-k;
    }
    else
    {
        cout<<0;
    }
    
}