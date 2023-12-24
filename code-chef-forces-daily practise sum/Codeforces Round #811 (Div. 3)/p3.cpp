#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll t=1;
    cin>>t;
    while(t--)
    {

        ll n;
        cin>>n;
        ll sum=0;
        ll temp=9;
        string s="";
        while(n>=1)
        {
            if(n<temp)
            {
                s+=to_string(n);
                break;
            }
            s+=to_string(temp);

            //sum+=temp;
            n-=temp;
            temp--;

        }

        reverse(s.begin(),s.end());
        cout<<s<<endl;
    }

}

