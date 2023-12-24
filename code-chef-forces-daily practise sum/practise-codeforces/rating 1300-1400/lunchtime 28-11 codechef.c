#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n],i;
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        long long int dis=0;
        long long int sum=0;
        for(i=0;i<n;i++)
        {
            sum=sum+arr[i];
            if(sum>0)
            {
                dis++;
                sum--;
            }
            else{
                break;
            }

        }
        dis+=sum;
        cout<<dis<<endl;
    }
}
