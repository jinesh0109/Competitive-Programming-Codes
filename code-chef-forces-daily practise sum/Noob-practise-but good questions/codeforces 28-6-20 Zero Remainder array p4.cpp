#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n,k,i,j;
        cin>>n>>k;
        long long int arr[n];
        vector<long long int> v;
        for(i=0;i<n;i++)
        {
            cin>>arr[i];

            if(arr[i]<k)
            {
                v.push_back(k-arr[i]);
            }
            else if(arr[i]%k!=0)
            {
                v.push_back(k-(arr[i]%k));
            }
        }
        sort(v.begin(),v.end());
        j=0;
        for(i=1;i<v.size();i++)
        {
            if(v[i]==v[j])
            {
                v[i]=v[i-1]+k;
            }
            else{
                j=i;
            }
        }
        sort(v.begin(),v.end());
        if(v.size()>0)
        cout<<v[v.size()-1]+1<<endl;
        else
            cout<<"0\n";
    }
    return 0;
}
