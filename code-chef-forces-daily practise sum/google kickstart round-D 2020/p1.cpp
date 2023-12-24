#include<iostream>
using namespace std;
int main()
{
    int t,i,j;
    cin>>t;

    for(j=1;j<=t;j++)
    {
        long long int n,m=-1;
        cin>>n;
        long long int arr[n],c=0;
        for(i=0;i<n;i++){
            cin>>arr[i];
        }

        for(i=0;i<n;i++)
        {
            if(arr[i]>m)
            {
                m=arr[i];
                if(i!=n-1)
                {
                    if(arr[i]>arr[i+1])
                    {
                        c++;

                    }
                }
                else{
                    c++;

                }
            }
        }
        cout<<"Case #"<<j<<": "<<c<<endl;
    }
    return 0;
}
