#include<iostream>
using namespace std;
int main()
{
    int n,k,i,bactual,sum=0;
    cin>>n>>k;
    int arr[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int bcharged;
    cin>>bcharged;
    for(i=0;i<n;i++)
    {
        if(i==k)
        {
            continue;
        }
        sum=sum+arr[i];
    }
    bactual=sum/2;
    if(bcharged==bactual)
    {
        cout<<"Bon Appetit";
    }
    else
    {
        cout<<bcharged-bactual;
    }
    
}