#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll t;
    cin>>t;
    for(ll tt=1;tt<=t;tt++)
    {
        ll n,i;
        string s;
        cin>>n;
        cin>>s;
        ll m1=1,i1=0,min1=0,c=1;
        char temp=s[0];
        cout<<"Case #"<<tt<<": ";
        cout<<"1 ";
        for(i=1;i<n;i++)
        {

            //cout<<asc<<endl;
            if(s[i]>temp)
            {

                c++;
            }
            else{

                c=1;

                //cout<<"Here ";
            }
            temp=s[i];
            cout<<c<<" ";
        }
        cout<<"\n";
    }
}
