#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
        int t;
        cin>>t;
        while(t--)
        {
            ll q,d,i;
            cin>>q>>d;
            ll arr[q];
            for(i=0;i<q;i++)
            {
                cin>>arr[i];
            }
            for(i=0;i<q;i++)
            {
                if(arr[i]>=10*d)
                {
                    cout<<"YES\n";
                    continue;
                }
                int flag=1;
                while(arr[i]>0)
                {
                    if(arr[i]%10==d)
                    {
                        cout<<"YES\n";
                        flag=0;
                        break;
                    }
                    arr[i]-=d;

                }
                if(flag==1)
                    cout<<"NO\n";
            }


        }
}
