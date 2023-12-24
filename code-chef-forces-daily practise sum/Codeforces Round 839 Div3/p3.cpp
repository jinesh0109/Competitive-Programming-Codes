#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,k;
        cin>>k>>n;
        ll c=0,ini=1;
        while(true)
        {
            
            if(c==k)
            {
                cout<<endl;
                break;
            }
            cout<<ini<<" ";
            if(n-(ini+c+1)>=(k-(c+2)))
            {
                c++;
                ini=ini+c;
            }
            else{
                if(c>=k)
                {
                    cout<<endl;
                    break;
                }
                    
                
                while(k-c>1)
                {
                    cout<<ini+1<<" ";
                    ini++;
                    c++;
                }
                cout<<endl;
                break;
            }
        }
    }
}