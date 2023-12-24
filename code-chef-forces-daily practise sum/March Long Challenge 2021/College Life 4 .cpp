#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,e,h,a,b,c,i;
        cin>>n>>e>>h>>a>>b>>c;
        ll e1=e,h1=h,n1=n;
        ll temp=min(e,h)+(e-min(e,h))/2+ (h-min(e,h))/3;
        if(temp<n)
        {
            cout<<"-1\n";
        }
        else{
            ll ans=0,c1=0,c2=0,c3=0,c4=0;
            ll ans1=0,c33=0,e11=e,h11=h;

                    c33=min(e11,h11);
                    if(c33>=n1)
                    {
                        ans1=n1*c;
                    }
                    else{
                        ans1+=c33*c;
                        ll tt=min(e11,h11);
                        e11-=tt;
                        h11-=tt;
                        n1-=c33;

                        if(e11==0)
                        {
                            ans1+=n1*b;
                        }
                        else if(h11==0)
                        {
                            ans1+=n1*a;
                            //cout<<"Here\n";
                        }
                    }

            if(a==b && b==c)
            {
                ans=n*c;
            }
            else{
                ll min1=min(a,min(b,c)),min2,min3,count1=0;
                if(min1==c)
                {
                    c3=min(e1,h1);
                    if(c3>=n)
                    {
                        ans=n*c;
                    }
                    else{
                        ans+=c3*c;
                        ll tt=min(e1,h1);
                        e1-=tt;
                        h1-=tt;
                        n-=c3;

                        if(e1==0)
                        {
                            ans+=n*b;
                        }
                        else if(h1==0)
                        {
                            ans+=n*a;
                            //cout<<"Here\n";
                        }
                    }
                }
                else if(min1==a)
                {
                    c1=e1/2;

                    if(c1>=n)
                    {
                        ans=n*a;
                    }
                    else{
                        ans+=c1*a;
                        n-=c1;
                        e1=e1%2;
                        min2=min(b,c);
                        int flag=1;
                        if(min2==b)
                        {
                            c2=h1/3;
                            if(c2>=n)
                            {
                                ans+=n*b;
                            }
                            else{
                                ans+=c2*b;
                                h1=h1%3;
                                n-=c2;
                                if(e1==1)
                                {
                                    if(h1>0)
                                    {
                                        if(n==1)
                                        {
                                            ans+=n*c;
                                            flag=0;
                                            // cout<<"YAha pe\n";
                                        }
                                        else{
                                            ans+=1*c;
                                            n--;
                                            e1--;
                                            h1--;

                                        }
                                    }
                                }
                                if(flag==1)
                                {
                                    //cout<<"jayega ki nai  "<<n<<endl;
                                    while(n>0)
                                    {
                                        n+=2;
                                        e1+=2;
                                        h1+=3;
                                        ans-=a;
                                        ans-=b;
                                        if(e1==2)
                                        {
                                            ans+=2*c;
                                            e1-=2;
                                            h1-=2;
                                            n-=2;
                                            if(h1==3)
                                            {
                                                n--;
                                                ans+=1*b;
                                                h1-=3;
                                            }
                                        }
                                        else if(e1==3)
                                        {
                                            ans+=3*c;
                                            e1-=3;
                                            h1-=3;
                                            n-=3;
                                        }

                                      }
                                  }

                                }

                            }
                            else if(min2==c)
                            {
                                if(e1==1)
                                {
                                    if(h1>0)
                                    {
                                        ans+=1*c;
                                        e1--;
                                        h1--;
                                        n--;
                                    }
                                }
                                if(n>0)
                                {
                                    c2=h1/3;

                                    if(c2>=n)
                                    {
                                        ans+=n*b;
                                    }
                                    else{
                                        ans+=c2*b;
                                        n-=c2;
                                        h1=h1%3;
                                        while(n>0)
                                        {
                                            n+=2;
                                            e1+=2;
                                            h1+=3;
                                            ans-=a;
                                            ans-=b;
                                            if(e1==2)
                                            {
                                                ans+=2*c;
                                                e1-=2;
                                                h1-=2;
                                                n-=2;
                                                if(h1==3)
                                                {
                                                    n--;
                                                    ans+=1*b;
                                                    h1-=3;
                                                }
                                            }
                                            else if(e1==3)
                                            {
                                                ans+=3*c;
                                                e1-=3;
                                                h1-=3;
                                                n-=3;
                                            }

                                        }
                                    }
                                }
                            }
                        }
                    }

                    else if(min1==b)
                {
                    c2=h1/3;

                    if(c2>=n)
                    {
                        ans=n*b;
                    }
                    else{
                        ans+=c2*b;
                        n-=c2;
                        h1=h1%3;
                        min2=min(a,c);
                        int flag=1;
                        if(min2==a)
                        {
                            c1=e1/2;
                            if(c1>=n)
                            {
                                ans+=n*a;
                            }
                            else{
                                ans+=c1*a;
                                e1=e1%2;
                                n-=c1;
                                if(e1==1)
                                {
                                    if(h1>0)
                                    {
                                        if(n==1)
                                        {
                                            ans+=n*c;
                                            flag=0;

                                        }
                                        else{
                                            ans+=1*c;
                                            n--;
                                            e1--;
                                            h1--;

                                        }
                                    }
                                }
                                if(flag==1)
                                {
                                    while(n>0)
                                    {
                                        n+=2;
                                        e1+=2;
                                        h1+=3;
                                        ans-=a;
                                        ans-=b;
                                        if(e1==2)
                                        {
                                            ans+=2*c;
                                            e1-=2;
                                            h1-=2;
                                            n-=2;
                                            if(h1==3)
                                            {
                                                n--;
                                                ans+=1*b;
                                                h1-=3;
                                            }
                                        }
                                        else if(e1==3)
                                        {
                                            ans+=3*c;
                                            e1-=3;
                                            h1-=3;
                                            n-=3;
                                        }

                                      }
                                  }

                                }

                            }
                            else if(min2==c)
                            {
                                min3=min(e1,h1);
                                if(min3>=n)
                                {
                                    ans+=n*c;
                                    n=0;
                                }
                                else{
                                    ans+=min3*c;
                                    e1-=min3;
                                    h1-=min3;
                                    n-=min3;
                                }
                                if(n>0)
                                {


                                    c1=e1/2;
                                    e1=e1%2;
                                    //cout<<c1<<" "<<c2<<" "<<min3<<endl;
                                    if(c1>=n)
                                    {
                                        ans+=n*a;
                                    }
                                    else{
                                        ans+=c1*a;
                                        n-=c1;
                                      //   cout<<n<<" n value\n";
                                      //cout<<e1<<" "<<h1<<endl;
                                        while(n>0)
                                        {
                                            n+=2;
                                            e1+=2;
                                            h1+=3;
                                            ans-=a;
                                            ans-=b;
                                            if(e1==2)
                                            {
                                                ans+=2*c;
                                                e1-=2;
                                                h1-=2;
                                                n-=2;
                                                if(h1==3)
                                                {
                                                    n--;
                                                    ans+=1*b;
                                                    h1-=3;
                                                }
                                            }
                                            else if(e1==3)
                                            {
                                                ans+=3*c;
                                                e1-=3;
                                                h1-=3;
                                                n-=3;
                                            }

                                        }
                                    }
                                }
                            }
                        }
                    }
                }
                cout<<min(ans,ans1)<<endl;
            }

        }
    }

