
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
        ll temp1=min(e,h)+(e-min(e,h))/2+ (h-min(e,h))/3;
        if(temp1<n)
        {
            cout<<"-1\n";
            continue;
        }
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
