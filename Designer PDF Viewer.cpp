#include<bits/stdc++.h>
using namespace std;
char alphabet[26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
int main()
{
    int count[26],i,max=INT_MIN,j;
    
    for(i=0;i<26;i++)
    {
        cin>>count[i];
       
    }
    string input;
    cin>>input;
    int len=input.length();
    //cout<<len;
    for(i=0;i<len;i++)
    {
        for(j=0;j<26;j++)
        {
            if(input[i]==alphabet[j])
            {
                int value=count[j];
                 
                if(value>max)
                {
                    max=value;
                }
               
            }
        }
    }
    cout<<max*len;
    
   
}
