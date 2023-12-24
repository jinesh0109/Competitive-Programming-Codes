#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        int n,m,i,j;
        cin>>n>>m;
        char arr[n][m];
        for(i=0;i<n;i++)
        {
            string s;
            cin>>s;
            for(j=0;j<s.size();j++)
            {
                arr[i][j]=s[j];
            }
        }
        int f=1;
        for(i=0;i<n-1;i++)
        {
            for(j=0;j<m-1;j++)
            {
                int c=0;
                if(arr[i][j]=='1')
                    c++;
                if(arr[i+1][j]=='1')
                    c++;
                if(arr[i][j+1]=='1')
                    c++;
                if(arr[i+1][j+1]=='1')
                    c++;
                if(c==3)
                {
                    f=0;
                    break;
                }
            }
            if(f==0)
                break;
        }

        if(f==1)
        {
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
}


