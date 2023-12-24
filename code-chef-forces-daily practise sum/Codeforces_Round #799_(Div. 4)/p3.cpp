#include<bits/stdc++.h>
#include<string>
#include<iostream>
using namespace std;
#define ll long long int
int main()
{
    ll t=1;
    cin>>t;
    while(t--)
    {
        char arr[8][8];
        int i,j;
        for(i=0;i<8;i++)
        {
            for(j=0;j<8;j++)
            {
                cin>>arr[i][j];
            }
        }
        int x,y;
        int f=1;
        for(i=0;i<8;i++)
        {
            for(j=0;j<8;j++)
            {
                if(arr[i][j]=='#')
                {
                    if(arr[i+1][j+1]=='#' && arr[i-1][j-1]=='#' && arr[i-1][j+1]=='#' && arr[i+1][j-1]=='#')
                    {
                        f=0;
                        x=i+1;
                        y=j+1;
                        break;
                    }

                }
                
            }
            if(f==0)
                    break;
            
        }
        cout<<x<<" "<<y<<endl;
    }
}