#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,x,i,c1=0;
        cin>>n>>x;
        ll arr[n],c=0;
        for(i=0;i<n;i++)
        {
            cin>>arr[i];

            if(arr[i]==arr[0])
                c1++;
        }
        if(c1==n)
        {
            while(x<arr[0])
            {
            x=x*2;
            c++;
            }
            cout<<c+n<<endl;
            continue;
        }
        c=0;
        ll res=0;
        i=0;
        sort(arr,arr+n);
       // if(x<arr[0])
        //{
          //  while(x<arr[0])
            //{
              //  c++;
               // x=x*2;
                //i=0;
            //}
        //}
        //else if(x>arr[0]){
            for(i=0;i<n;i++)
            {
               if(2*arr[i]>=x)
               {
                    res=i;
                    break;
                }
            }
        //}
        while(i<=n-1)
        {
            if(x>=arr[i])
            {
                x=arr[i];
                c++;
                x=x*2;
                i++;
            }
            else{
                c++;
                x=x*2;
            }
        }
        cout<<c+res<<endl;
    }
}


