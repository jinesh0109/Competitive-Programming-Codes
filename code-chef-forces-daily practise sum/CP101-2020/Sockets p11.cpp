#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,k,i;
    cin>>n>>m>>k;
    int arr[n];
    for(i=0;i<n;i++)cin>>arr[i];
    if(k>=m)
    {
        cout<<"0";
        return 0;
    }
    sort(arr,arr+n);
    int flag=1,c=0;
    for(i=n-1;i>=0;i--)
    {
        if(k>0)
        {
            k--;
            c++;
            if(arr[i]+k>=m)
            {
                cout<<c;
                flag=0;
                return 0;
            }
            m-=arr[i];

        }
        else{
            if(arr[i]>1)
            {
                m=m-(arr[i]-1);
                c++;
                if(m<=0)
                {
                    cout<<c;
                    flag=0;
                    break;
                }
            }
            else break;

        }

    }
    if(flag==1)cout<<"-1";

}
