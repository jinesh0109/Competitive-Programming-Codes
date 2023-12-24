#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i;
        cin>>n;
        long long int arr[n],arr1[n],even_sum=0,odd_sum=0,even_c=0,odd_c=0;
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
            if(i%2==0)
            {
                odd_sum+=arr[i];
                odd_c++;
            }
            else{
                even_sum+=arr[i];
                even_c++;
            }
        }
        if(2*(odd_sum-odd_c)<=odd_sum+even_sum)
        {
            for(i=0;i<n;i++)
            {
                if(i%2==0)
                {
                    cout<<"1 ";
                }
                else{
                    cout<<arr[i]<<" ";
                }
            }
            cout<<"\n";
        }
        else if(2*(even_sum-even_c)<=odd_sum+even_sum){
            for(i=0;i<n;i++)
            {
                if(i%2!=0)
                {
                    cout<<"1 ";
                }
                else{
                    cout<<arr[i]<<" ";
                }
            }
            cout<<"\n";
        }
    }

}
