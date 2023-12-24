#include<bits/stdc++.h>
#define ll long long int
#include<vector>
using namespace std;
int main()
{
    ll n,i,j,k;
    cin>>n;
    ll arr[n];
    for(i=0;i<n;i++)cin>>arr[i];
    ll sum1=0;
    vector<ll>v,v1;

    for(i=0;i<n-1;i++)
    {

        for(j=i+1;j<n;j++)
        {


            for(k=i;k<=j;k++)
            {
                //arr1[k]=arr[k];
                v.push_back(arr[k]);
            }
            //sort(arr1,arr1+j-i+1);
            sort(v.begin(),v.end());
            for(k=0;k<j-i+1;k++)
            {
                //cout<<arr1[k]<<" ";
                cout<<v[k]<<" ";
            }
            cout<<"\n";
            ll temp=(j-i+1)/2;
            double o=double(j-i+1)/2;
            ll op=ceil(o);
            ll End=j-i;



                for(k=0;k<temp;k++)
                {
                    //ll temp1=arr1[k]^arr1[End];
                    ll temp1=v[k]^v[End];
                    ll k1=0,temp2;
                    for(k1=0;k1<=30;k1++)
                    {
                        if(pow(2,k1)<=temp1)
                        {
                            temp2=pow(2,k1);
                        }
                        else{
                            break;
                        }
                    }
                    v1.push_back(temp2);
                    End--;
                }
                cout<<"op  "<<op<<endl;
                cout<<"temp "<<temp<<endl;
                ll max1=0,index;




                ll temp3;
                if(op!=temp)
                {

                    for(k=0;k<temp;k++)
                    {
                        if(v1[k]>max1)
                        {
                            max1=v1[k];
                            index=k;
                        }
                    }

                    v1.erase(v1.begin()+index);

                    ll tempo=v[op-1]^max1;
                    for(k=0;k<=30;k++)
                    {
                        if(pow(2,k)<=tempo)
                        {
                            temp3=pow(2,k);
                        }
                        else{
                            break;
                        }
                    }
                    v1.push_back(temp3);
                }
                max1=0;
                for(k=0;k<v1.size();k++)
                {
                    max1=max(max1,v1[k]);
                }
                for(k=0;k<v1.size();k++)
                {
                    cout<<v1[k]<<" ";
                }
                cout<<"\n";

                ll count1=0;
                for(k=0;k<v1.size();k++)
                {
                    if(v1[k]==max1)count1++;
                }
                //cout<<"Count1 "<<count1<<endl;
                ll ii= 998244353;
                if(count1%2==0)
                    sum1+=0;
                else
                    sum1+=(max1%ii);
                cout<<"Sum after "<<i<<" to "<<j<<" iteration "<<sum1<<endl;
                v.clear();
                v1.clear();

        }

    }
    cout<<sum1<<endl;
}
