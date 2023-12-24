#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        int i;
        cin>>n;
        double arr[n];
        double sum=0;
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
            sum+=arr[i];
        }
        double ans=(sum/(double(n)));
        if(ans==1)
        {
            cout<<"0\n";
        }
        else if(ans>1)
        {
            cout<<sum-n<<endl;
        }
        else{
            cout<<"1\n";
        }
    }
}
