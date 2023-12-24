
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll t=1;
    cin>>t;
    while(t--)
    {
        ll n,i;
        cin>>n;
        string s;
        cin>>s;
        map<char,int> m;
        int c1=0;
        for(i=0;i<n;i++)
        {
            char c=s[i];
            if(m[s[i]]!=0)
            {
                c1++;;

            }
            else{
                c1+=2;
                m[c]=(i+1);
            }
        }
        cout<<c1<<endl;
    }
}
