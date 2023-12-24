#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,i;
        cin>>n;
        ll arr[n];
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        if(n==2)
        {
            cout<<arr[0]*n+arr[1]*n<<endl;

        }
        else{
            ll min1=arr[0]*n+arr[1]*n;
            //cout<<min1<<endl;
            ll min2=arr[0];
            ll min3=arr[1];
            ll cost=arr[0],cost1=arr[1];
            //cout<<min1<<endl;
            for(i=2;i<n;i++)
            {

                if(i%2==0)
                {
                    cost+=arr[i];
                    ll c,c1,total,total2;
                    min2=min(arr[i],min2);

                        total=(((i/2)+1))-1;
                        c=(cost-min2)*1+ min2*(n-total);

                    total2=(i+1-total-1)-1;
                    c1=(cost1-min3)*1+(n-total2)*min3;
                    //cout<<c<<" "<<c1<<endl;
                    min1=min(min1,c+c1);
                    //cout<<cost<<endl;

                    //cout<<min1<<endl;


                }
                else{
                        //cout<<cost1<<endl;
                        cost1+=arr[i];
                    ll c,c1,total,total2;
                    min3=min(arr[i],min3);

                        total2=(((i/2)+1))-1;
                        c1=(cost1-min3)*1+min3*(n-total2);
                    total=(i+1-total2-1)-1;
                    c=(cost-min2)*1+(n-total)*min2;
                    min1=min(min1,c+c1);
                    //cost1+=arr[i];
                    //cout<<min1<<endl;
                }
            }
            cout<<min1<<endl;
        }

    }
}
