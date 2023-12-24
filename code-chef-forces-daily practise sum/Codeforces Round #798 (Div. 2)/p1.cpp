#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll t=1;
    cin>>t;
    while(t--)
    {
        ll n,m,k,i=0,j=0;
        cin>>n>>m>>k;
        string a,b;
        cin>>a>>b;
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        string s1="";
        int temp=k,temp1=k;
        
        while(i<n && j<m)
        {
            if(a[i]<=b[j])
            {
                if(temp>0)
                {
                    s1+=a[i];
                    i++;
                    temp--;
                    temp1=k;
                    
                }
                else{
                    s1+=b[j];
                    j++;
                    temp1--;
                    temp=k;
                }
                
            }
            else{
                if(temp1>0)
                {
                    s1+=b[j];
                    j++;
                    temp1--;
                    
                    temp=k;
                    
                }
                else{
                    s1+=a[i];
                    i++;
                    temp--;
                    temp1=k;
                }
            }
        }
        cout<<s1<<endl;

    }
}