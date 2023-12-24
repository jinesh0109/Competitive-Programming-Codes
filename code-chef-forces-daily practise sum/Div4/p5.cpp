#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll t=1;
    cin>>t;
    while(t--)
    {
        ll n,i,j;
        cin>>n;
        char arr[n][n];
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                cin>>arr[i][j];
            }
        }
        i=0,j=n-1;
        int c=0;
        while(i<=j)
        {
            ll p1=i;
            while(p1<j)
            {
                int c1=0,c2=0;
                ll x1=p1-i;
                if(arr[i][p1]=='0')
                    c1++;
                else
                    c2++;
                if(arr[i+x1][j]=='0')
                    c1++;
                else
                    c2++;
                if(arr[j-x1][i]=='0')
                    c1++;
                else
                    c2++;
                if(arr[j][j-x1]=='0')
                    c1++;
                else
                    c2++;
                c+=min(c1,c2);
                p1++;
            }
            i++;
            j--;
        }
        cout<<c<<endl;
    }
}

