#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i;
        cin>>n;
        string s;
        cin>>s;
        int c0=0,c1=0;
        for(i=0;i<n;i++)
        {
            if(s[i]=='0')
                c0++;
            else
                c1++;
        }
        if(c0==1)
            {
                cout<<"BOB\n";
                continue;
            }

        if(n%2==1)
        {
            if(s[n/2]=='0')
            {
                if(c0>2)
                {
                    cout<<"ALICE\n";
                    continue;
                }
            }
        }
           cout<<"BOB\n";



    }
}
