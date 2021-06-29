#include<iostream>
using namespace std;
int main()
{
    int year,total=215,date;
    string date1;
    string month="09";
    
    cin>>year;
    if(year>=1919)
    {
        if((year%400==0)||(year%4==0 && year%100!=0))
        {
            total=total+29;
            date=256-total;
            if(date<=9)
            {
                date1="0"+date;
            }
            cout<<date<<"."<<month<<"."<<year;
        }
        else 
        {
           total=total+28;
            date=256-total;
            cout<<date<<"."<<month<<"."<<year;
        }
    }
    else if(year==1918)
    {
            date=26;
            cout<<date<<"."<<month<<"."<<year;
    }
    else
    {
        if(year%4==0)
        {
             total=total+29;
            date=256-total;
            if(date<=9)
            {
                date1="0"+date;
            }
            cout<<date<<"."<<month<<"."<<year;
            
        }
        else
        {
            total=total+28;
            date=256-total;
            cout<<date<<"."<<month<<"."<<year;
        }
    }
}