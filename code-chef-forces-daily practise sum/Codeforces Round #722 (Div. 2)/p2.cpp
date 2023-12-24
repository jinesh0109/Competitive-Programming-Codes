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
        sort(arr,arr+n);
        ll c=0,min1=1000000000,flag=1;
        for(i=0;i<n;i++)
        {
            if(arr[i]<=0)
            {
                //cout<<"here "<<i+1<<"  ";
                c++;
                if(i!=n-1)
                {

                if(arr[i+1]<=0)
                {
                    if(abs(arr[i]-arr[i+1])<min1)
                    {
                        min1=abs(arr[i]-arr[i+1]);
                  //      cout<<min1<<endl;
                    }
                }
                else if(arr[i+1]>0){
                    if(arr[i+1]<=min1)
                    {
                      //  cout<<min1<<" min value "<<endl;
                        c++;
                        flag=0;

                    }
                    //cout<<"break thyu "<<endl;
                    break;

                }
                }
            }
            else{
                    //cout<<"kya "<<endl;
                c++;
                flag=0;
                break;
            }
        }
        cout<<c<<endl;
    }
}
