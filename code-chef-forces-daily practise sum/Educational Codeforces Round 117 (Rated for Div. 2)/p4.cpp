#include<bits/stdc++.h>
using namespace std;
#define ll long long int

    int main()
    {
        ll t;
        cin>>t;
        while(t--)
        {
            ll a,b,x;
            cin>>a>>b>>x;
            ll temp,f=1;
            if(a<b)
            {
                temp=b;
                b=a;
                a=temp;
            }
            ll c=0;
            while(b!=0)
            {
                if(x>a)
                {
                    cout<<"NO\n";
                    f=0;
                    break;
                }
                if((x-(a%b))%b==0)
                {
                    cout<<"YES\n";
                    f=0;
                    break;
                }
                ll temm=a;
                a=b;
                b=temm%b;
                cout<<a<<" "<<b<<endl;
                c++;


            }
            if(f==1)
                cout<<"NO\n";

        }
    }

