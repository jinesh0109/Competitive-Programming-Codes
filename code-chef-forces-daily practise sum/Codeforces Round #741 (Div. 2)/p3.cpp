#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{

    ll t;
    cin>>t;
    while(t--)
    {
        ll n,i;
        cin>>n;
        string s;
        cin>>s;
        int f=1;
        for(i=0;i<n;i++)
        {
            if(s[i]=='0')
            {
                f=0;
                break;
            }
        }
        if(f==1)
        {

            ll t2=(n/2);
            cout<<"1 "<<t2<<" 2 "<<t2+1<<endl;
        }


        else{
            ll a1,b1,a2,b2;
            for(i=0;i<n;i++)
            {
                if(s[i]=='0')
                {
                    if((i+1)-1>=n/2)
                    {
                        a1=1;
                        b1=i+1;
                        a2=1;
                        b2=i;
                        if((b1==a2))
                        {
                            a1=0;
                            b1=0;
                            a2=0;
                            b2=0;

                        }
                        else if(a1==b1 && a2==b2)
                        {
                            if(s[a1]!=s[a2])
                            {
                                a1=0;
                                b1=0;
                                a2=0;
                                b2=0;
                            }else{
                                break;
                            }
                        }
                        else{
                            break;
                        }

                    }
                    //1100111
                    //3 6
                    //4 6
                        if(n-(i+1)+1-1>=n/2)
                        {
                            a1=i+1;
                            a2=i+2;
                            b1=n;
                            b2=n;
                            break;

                        }
                    }
                }
                cout<<a1<<" "<<b1<<" "<<a2<<" "<<b2<<endl;
            }

        }
    }

