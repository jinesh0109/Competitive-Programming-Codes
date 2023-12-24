#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        long long int n,d,i;
        cin>>n>>d;
        int arr[n];
        long long int c=0,c1=0;
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
            if(arr[i]>=80 || arr[i]<=9)
            {
                c++;
            }
            else
                c1++;
        }

        if(c%d==0)
        {
            cout<<c/d+ceil(double(c1)/double(d))<<endl;
        }
        else{
            cout<<c/d+1+ceil(double(c1)/double(d))<<endl;
        }
    }
}
