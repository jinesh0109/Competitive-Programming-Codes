#include<iostream>
#include<cstring>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n,i,c=0;
        cin>>n;
        long long int str[n];
        for(i=0;i<n;i++)
        {
            cin>>str[i];
            if(i>0)
            {
                c=c+abs(str[i]-str[i-1])-1;

            }
        }
        cout<<c<<endl;
    }

    return 0;
}
