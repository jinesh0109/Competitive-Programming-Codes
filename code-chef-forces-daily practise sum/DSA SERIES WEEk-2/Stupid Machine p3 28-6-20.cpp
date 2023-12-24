#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n;
        cin>>n;
        long long int arr[n],i;
        for(i=0;i<n;i++)
        {
            cin>>arr[i];

        }
        long long int m=arr[0],a=arr[0];
        for(i=1;i<n;i++)
        {
            if(arr[i]<m)
            {
                m=arr[i];
            }
            a=a+m;
        }
        cout<<a<<endl;
    }
    return 0;
}
