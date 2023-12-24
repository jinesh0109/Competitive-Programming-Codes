#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n,T,i;
        cin>>n>>T;
        long long int arr[n],c=0;
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
            if(T%2==0)
            {
                if(2*arr[i]==T)
                {
                    c++;
                }
            }
        }
        long long int c1=1;
        if(c>1)
        {
            for(i=0;i<n;i++)
            {
                if(arr[i]>T/2)
                {
                    cout<<"1 ";
                }
                else if(arr[i]<T/2)
                {
                    cout<<"0 ";
                }
                else{
                    if(c1<=c/2)
                    {
                        cout<<"0 ";
                        c1++;
                    }
                    else{
                        cout<<"1 ";
                        c1++;
                    }
                }
            }
            cout<<"\n";
        }
        else{
            for(i=0;i<n;i++)
            {
                if(arr[i]<=T/2)
                {
                    cout<<"0 ";
                }
                else{
                    cout<<"1 ";
                }
            }
            cout<<"\n";
        }
    }

}
