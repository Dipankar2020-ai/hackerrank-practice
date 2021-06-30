#include<iostream>
using namespace std;
int main()
{
    int t,i;
    cin>>t;
    while(t--)
    {
        int n,value=1;
        cin>>n;
        for(i=1;i<=n;i++)
        {
            if(i%2==1)
            {
                value=value*2;
            }
            else 
            {
                value=value+1;
            }
            
        }
        cout<<value<<endl;
    }
}