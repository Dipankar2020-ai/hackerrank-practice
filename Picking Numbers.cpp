#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    int firstelement=arr[0];
    int count=1;
    int result=0;
    for(i=1;i<n;++i)
    {
        if(arr[i]==firstelement||arr[i]==firstelement+1)
        {
            count++;
        }
        else
        {
            if(count>result)
            {
                result=count;
            }
            count=1;
            firstelement=arr[i];
            
        }
    }
    if(count>result)
      {
        result=count;
      }
    cout<< result;
}