#include<bits/stdc++.h>
#include<vector>
#include<algorithm>
#define ll long long int
using namespace std;

bool sortcol( const vector<int>& v1, const vector<int>& v2 ) {
  return v1[1] < v2[1];
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,m,i;
        cin>>n>>m;
        ll arr[n],arr1[n];
        double arr2[2][n];
        vector<vector<double>>v;
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        for(i=0;i<n;i++)
        {
            cin>>arr1[i];
        }
        for(i=0;i<n;i++)
        {
            vector<double>v1;

            v1.push_back(double(arr[i])/double(arr1[i]));
            v1.push_back(arr1[i]);

            v.push_back(v1);
            v1.clear();
        }
        sort(v.begin(),v.end());
        ll c=0,ans=0;
        int flag=1;
        for(i=n-1;i>=0;i--)
        {
            ans+=v[i][0]*v[i][1];
            c+=v[i][1];
            cout<<ans<<" "<<c<<endl;
            if(ans>=m)
            {
                flag=0;
                break;
            }




        }
        if(flag==1)
        {
            cout<<"-1\n";
        }
        else{
            cout<<c<<endl;
        }





    }
}
