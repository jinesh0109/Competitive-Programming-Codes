#include<bits/stdc++.h>
#define ll long long int
#include<string>
using namespace std;
int main()
{
    ll t;
    cin>>t;
    for(ll tt=1;tt<=t;tt++)
    {
        ll n,i;
        cin>>n;
        ll arr[n];
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        ll c=0;
        for(i=1;i<n;i++)
        {
            if(arr[i]==arr[i-1])
            {
                arr[i]=arr[i]*10;
                //cout<<arr[i];
                c+=1;
            }
            else if(arr[i]<arr[i-1])
            {
                ll flag=1;
                for(ll j=1;j<=15;j++)
                {

                    //cout<<arr[i]<<" "<<i<<endl;
                    //cout<<arr[i]<<endl;


                    //cout<<arr[i]<<" "<<arr[i-1]<<" "<<i<<" "<<c<<endl;
                    if(arr[i]*10<arr[i-1] && arr[i-1]-arr[i]*10>9)
                    {

                        arr[i]=arr[i]*10;
                        c+=1;
                        if(arr[i-1]-arr[i]>9)
                        {

                        }
                        else{


                        ll temp=arr[i-1];
                        temp=temp%arr[i];
                        ll temp1=0;
                        ll input=temp;
                        while (input > 0){
                            input/=10;
                            temp1++;
                        }
                       // cout<<temp1<<endl;
                        ll temp2=1;
                        for(ll jj=1;jj<=temp1-1;jj++)
                        {
                            temp2=temp2*10;
                        }
                      //  cout<<temp2<<endl;
                        ll ans=temp/temp2;
                        arr[i]+=ans;

                        flag=0;
                        //cout<<arr[i]<<endl;
                        //cout<<arr[i]<<endl;
                        }

                    }

                    else if(arr[i]<arr[i-1])
                    {
                      //  cout<<"Here "<<i<<endl;;
                        arr[i]=arr[i]*10;
                        c+=1;
                        //cout<<arr[i]<<" "<<i<<" "<<c<<endl;

                         flag=1;

                        for(ll k=0;k<=9;k++)
                        {
                            if(arr[i]+k>arr[i-1])
                            {
                                arr[i]+=k;

                                //cout<<arr[i]<<endl;
                                flag=0;
                                break;
                            }
                        }


                    }
                    else{
                        break;
                    }
                    if(flag==0)
                            break;

                }
            }
        }
        cout<<"Case #"<<tt<<": "<<c<<endl;

    }
}
