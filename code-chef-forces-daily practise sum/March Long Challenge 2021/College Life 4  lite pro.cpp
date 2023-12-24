#include<bits/stdc++.h>
#include<map>
#include<set>
#define ll long long int
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,e,h,a,b,c,i;
        cin>>n>>e>>h>>a>>b>>c;

         ll temp1=min(e,h)+(e-min(e,h))/2+ (h-min(e,h))/3;
        if(temp1<n)
        {
            cout<<"-1\n";
            continue;
        }
        ll min1=min(a,min(b,c)),ans=0,min2,min3,flag1=0;
        ll c1=0,c2=0,c3=0,n1=n,e1=e,h1=h;
        if(min1==c)
        {
            c3=min(e1,h1);
            if(c3>=n1)
            {
                ans+=n1*c;
                n1=0;
            }
            else{
                ans+=c3*c;
                n1-=c3;
                e1-=c3;
                h1-=c3;
                if(e1==0)
                {
                    c2=h1/3;
                    if(c2>=n1)
                    {
                        ans+=n1*b;
                        n1=0;
                    }
                    else{
                        flag1=-1;
                    }
                }
                else if(h1==0)
                {
                    c1=e1/2;
                    if(c1>=n1)
                    {
                        ans+=n1*a;
                        n1=0;
                    }
                    else{
                        flag1=-1;
                    }
                }
            }
        }
        else if(min1==a)
        {
            c1=e1/2;
            e1=e1%2;
            if(c1>=n1)
            {
                ans+=n1*a;
                n1=0;
            }
            else{
                ans+=c1*a;
                n1-=c1;
                min2=min(b,c);
                if(min2==c)
                {
                    if(e1==1)
                    {
                        if(h1>0)
                        {
                            ans+=1*c;
                            e1=0;
                            h1--;
                            n1--;
                        }
                    }
                    if(n1>0)
                    {
                        c2=h1/3;
                        if(c2>=n1)
                        {
                            ans+=n1*c2;
                            n1=0;
                        }
                        else{
                            flag1=-1;
                        }
                   }

                }
                else if(min2==b)
                {
                    c2=h1/3;
                    h1=h1%3;
                    if(c2>=n1)
                    {
                        ans+=n1*b;
                        n1=0;
                    }
                    else{
                        ans+=c2*b;
                        n1-=c2;
                        if(e1==1)
                        {
                            if(h1>0 && n1>0)
                            {
                                ans+=1*c;
                                n1--;
                            }
                        }
                        if(n1>0)
                        {
                            flag1=-1;
                        }

                    }
                }

            }
        }
        else if(min1==b)
        {
            c2=h1/3;
            h1=h1%3;
            if(c2>=n1)
            {
                ans+=n1*b;
                n1=0;
            }
            else{
                ans+=c2*b;
                n1-=c2;
                min2=min(a,c);
                if(min2==c)
                {
                    if(h1==2)
                    {
                        if(e1>1 && n1>1)
                        {
                            ans+=2*c;
                            h1=0;
                            e1-=2;
                            n1-=2;
                        }
                        else if(e1==1 && n1>0)
                        {
                            ans+=1*c;
                            h1--;;
                            e1-=1;
                            n1-=1;
                        }
                    }
                    else if(h1==1)
                    {
                        if(e1>0 && n1>0)
                        {
                            ans+=1*c;
                            h1=0;
                            e1-=1;
                            n1-=1;
                        }
                    }


                if(n1>0)
                {
                    c1=e1/2;
                    if(c1>=n1)
                    {
                        ans+=n1*a;
                        n1=0;
                    }
                    else{
                        flag1=-1;
                    }
                }
              }
              else if(min2==a)
              {
                  c1=e1/2;
                  e1=e1%2;
                  if(c1>=n1)
                  {
                      ans+=n1*a;
                  }
                  else{
                    ans+=c1*a;
                    n1-=c1;
                    if(e1==1)
                    {
                        if(h1>0 && n1>0)
                        {
                            ans+=1*c;
                            n1--;
                            h1--;
                            e1=0;
                        }
                    }
                    if(n1>0)
                    {
                        flag1=-1;
                    }
                  }
              }

            }

        }
        if(flag1==0)
        {
            cout<<ans<<endl;
        }
        else{



        ll arr[n+1],arr1[n+1];
        ll j=0;
        for(i=0;i<=2*n;i=i+2)
        {
            arr[j]=i;
          //  cout<<arr[j]<<" ";
            j++;

        }
        //cout<<"\n";
        j=0;
        for(i=0;i<=3*n;i=i+3)
        {
            arr1[j]=i;
          //  cout<<arr1[j]<<" ";
            j++;

        }
        //cout<<"\n";

        ll cost=10000000000000000;
        int flag=1;
        for(i=0;i<=n;i++)
        {
            if(arr[i]<=e)
            {
                for(j=0;j<=n;j++)
                {
                    if(arr1[j]<=h)
                    {
                        if(n-(arr[i]/2+arr1[j]/3)>=0)
                        {
                             ll temp=n-(arr[i]/2)-(arr1[j]/3);
                             if(e-arr[i]>=temp && h-arr1[j]>=temp)
                             {
                                //cout<<arr[i]/2<<" "<<arr1[j]/3<<" "<<temp;

                                cost=min(cost,(arr[i]/2)*a+(arr1[j]/3)*b+temp*c);
                                //cout<<" cost "<<cost<<endl;
                             }


                        }

                    }
                    else{
                        break;
                    }

                }
            }
            else{
                break;
            }

        }





        cout<<cost<<endl;

        }


    }
}
