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

        ll temp=min(e,h)+(e-min(e,h))/2+ (h-min(e,h))/3;
        if(temp<n)
        {
            cout<<"-1\n";
        }
        else{
            ll ans=0;

            if(a==b && b==c)
            {
                ans=n*c;
                cout<<ans<<endl;

            }
            else{

                ll c11=0,c21=0,c31=0,e1=e,h1=h,ans1=0,n1=n;
                    c31=min(e1,h1);
                    if(c31>=n1)
                    {
                        ans1=n1*c;
                    }
                    else{
                        ans1+=c31*c;
                        ll tt=min(e1,h1);
                        e1-=tt;
                        h1-=tt;
                        n1-=c31;

                        if(e1==0)
                        {
                            ans1+=n1*b;
                        }
                        else if(h1==0)
                        {
                            ans1+=n1*a;
                            //cout<<"Here\n";
                        }
                    }



                 ll c12=0,c22=0,c32=0,e2=e,h2=h,ans2=0,n2=n;

                    c12=e2/2;

                    if(c12>=n2)
                    {
                        ans2=n2*a;
                    }
                    else{
                        ans2+=c12*a;
                        n2-=c12;
                        e2=e2%2;

                        int flag=1;

                            c22=h2/3;
                            if(c22>=n2)
                            {
                                ans2+=n2*b;
                            }
                            else{
                                ans2+=c22*b;
                                h2=h2%3;
                                n2-=c22;
                                if(e2==1)
                                {
                                    if(h2>0)
                                    {
                                        if(n2==1)
                                        {
                                            ans2+=n2*c;
                                            flag=0;
                                            // cout<<"YAha pe\n";
                                        }
                                        else{
                                            ans2+=1*c;
                                            n2--;
                                            e2--;
                                            h2--;

                                        }
                                    }
                                }
                                if(flag==1)
                                {
                                    //cout<<"jayega ki nai  "<<n<<endl;
                                    while(n2>0)
                                    {
                                        n2+=2;
                                        e2+=2;
                                        h2+=3;
                                        ans2-=a;
                                        ans2-=b;
                                        if(e2==2)
                                        {
                                            ans2+=2*c;
                                            e2-=2;
                                            h2-=2;
                                            n2-=2;
                                            if(h2==3)
                                            {
                                                n2--;
                                                ans2+=1*b;
                                                h2-=3;
                                            }
                                        }
                                        else if(e2==3)
                                        {
                                            ans2+=3*c;
                                            e2-=3;
                                            h2-=3;
                                            n2-=3;
                                        }

                                      }
                                  }

                                }


                        }


                     ll c13=0,c23=0,c33=0,e3=e,h3=h,ans3=0,n3=n;

                    c13=e3/2;

                    if(c13>=n3)
                    {
                        ans3=n3*a;
                    }
                    else{
                        ans3+=c13*a;
                        n3-=c13;
                        e3=e3%2;

                         int flag=1;
                            if(e3==1)
                                {
                                    if(h3>0)
                                    {
                                        ans3+=1*c;
                                        e3--;
                                        h3--;
                                        n3--;
                                    }
                                }
                                if(n3>0)
                                {
                                    c23=h3/3;

                                    if(c23>=n3)
                                    {
                                        ans3+=n3*b;
                                    }
                                    else{
                                        ans3+=c23*b;
                                        n3-=c23;
                                        h3=h3%3;
                                        while(n3>0)
                                        {
                                            n3+=2;
                                            e3+=2;
                                            h3+=3;
                                            ans3-=a;
                                            ans3-=b;
                                            if(e3==2)
                                            {
                                                ans3+=2*c;
                                                e3-=2;
                                                h3-=2;
                                                n3-=2;
                                                if(h3==3)
                                                {
                                                    n3--;
                                                    ans3+=1*b;
                                                    h3-=3;
                                                }
                                            }
                                            else if(e3==3)
                                            {
                                                ans3+=3*c;
                                                e3-=3;
                                                h3-=3;
                                                n3-=3;
                                            }

                                        }
                                    }
                                }
                            }


                    ll c14=0,c24=0,c34=0,e4=e,h4=h,ans4=0,n4=n;

                    c24=h4/3;

                    if(c24>=n4)
                    {
                        ans4=n4*b;
                    }
                    else{
                        ans4+=c24*b;
                        n4-=c24;
                        h4=h4%3;

                        int flag=1;

                            c14=e4/2;
                            if(c14>=n4)
                            {
                                ans4+=n4*a;
                            }
                            else{
                                ans4+=c14*a;
                                e4=e4%2;
                                n4-=c14;
                                if(e4==1)
                                {
                                    if(h4>0)
                                    {
                                        if(n4==1)
                                        {
                                            ans4+=n4*c;
                                            flag=0;

                                        }
                                        else{
                                            ans4+=1*c;
                                            n4--;
                                            e4--;
                                            h4--;

                                        }
                                    }
                                }
                                if(flag==1)
                                {
                                    while(n4>0)
                                    {
                                        n4+=2;
                                        e4+=2;
                                        h4+=3;
                                        ans4-=a;
                                        ans4-=b;
                                        if(e4==2)
                                        {
                                            ans4+=2*c;
                                            e4-=2;
                                            h4-=2;
                                            n4-=2;
                                            if(h4==3)
                                            {
                                                n4--;
                                                ans4+=1*b;
                                                h4-=3;
                                            }
                                        }
                                        else if(e4==3)
                                        {
                                            ans4+=3*c;
                                            e4-=3;
                                            h4-=3;
                                            n4-=3;
                                        }

                                      }
                                  }

                                }

                        }

                    ll c15=0,c25=0,c35=0,e5=e,h5=h,ans5=0,n5=n;

                    c25=h5/3;

                    if(c25>=n5)
                    {
                        ans5=n5*b;
                    }
                    else{
                        ans5+=c25*b;
                        n5-=c25;
                        h5=h5%3;

                        int flag=1;

                        ll min3=min(e5,h5);
                                if(min3>=n5)
                                {
                                    ans5+=n5*c;
                                    n5=0;
                                }
                                else{
                                    ans5+=min3*c;
                                    e5-=min3;
                                    h5-=min3;
                                    n5-=min3;
                                }
                                if(n5>0)
                                {
                                    c15=e5/2;
                                    e5=e5%2;
                                    //cout<<c1<<" "<<c2<<" "<<min3<<endl;
                                    if(c15>=n5)
                                    {
                                        ans5+=n5*a;
                                    }
                                    else{
                                        ans5+=c15*a;
                                        n5-=c15;
                                      //   cout<<n<<" n value\n";
                                      //cout<<e1<<" "<<h1<<endl;
                                        while(n5>0)
                                        {
                                            n5+=2;
                                            e5+=2;
                                            h5+=3;
                                            ans5-=a;
                                            ans5-=b;
                                            if(e5==2)
                                            {
                                                ans5+=2*c;
                                                e5-=2;
                                                h5-=2;
                                                n5-=2;
                                                if(h5==3)
                                                {
                                                    n5--;
                                                    ans5+=1*b;
                                                    h5-=3;
                                                }
                                            }
                                            else if(e5==3)
                                            {
                                                ans5+=3*c;
                                                e5-=3;
                                                h5-=3;
                                                n5-=3;
                                            }

                                        }
                                    }
                                }

                        }





                  ans1=min(ans1,min(ans2,min(ans3,min(ans4,ans5))));
                  cout<<ans1<<endl;

            }
        }
    }

 }


