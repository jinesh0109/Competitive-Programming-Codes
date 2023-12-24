#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,i;
        cin>>n>>k;
        string s;
        cin>>s;
        int c=0,c1=0;
        int j=n-1;
        i=0;
        if(k==0)
        {
            cout<<"YES\n";
            continue;
        }
        while(i<=j)
        {
            if(s[i]==s[j])
                c++;
            else{
                c1++;
                break;
            }
            i++;
            j--;
        }
        if(c==k && c1>0)
        {
            cout<<"YES\n";
        }
        else if(c>k)
        {
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
}
