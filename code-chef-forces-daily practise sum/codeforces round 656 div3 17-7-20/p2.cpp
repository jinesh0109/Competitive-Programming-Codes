#include<bits/stdc++.h>
#include<unordered_map>
#include<iterator>
#include<vector>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i;
        cin>>n;
        long long int arr[2*n];
        unordered_map<long long int ,long long int>m;
        vector<long long int>v;
        for(i=0;i<2*n;i++)
        {
            cin>>arr[i];
            m[arr[i]]++;
            if(m[arr[i]]==1)
            {
                v.push_back(arr[i]);
            }
        }
        //vector<long long int >::iterator it;
        for(i=0;i<v.size();i++)
        {
            cout<<v[i]<<" ";
        }
        cout<<"\n";
    }
}
