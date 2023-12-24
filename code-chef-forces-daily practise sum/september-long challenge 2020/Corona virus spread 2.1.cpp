#include<bits/stdc++.h>
#include<vector>
#include<set>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int i,arr[n],j;
        for(i=0;i<n;i++)cin>>arr[i];

        vector<vector<int>>v;

        for(i=0;i<n;i++)
        {
            vector<int>v1;
            for(j=0;j<n;j++)
            {
                if(i!=j)
                {
                   if(arr[i]!=arr[j])
                   {
                       if((i>j && arr[j]>arr[i]) || (i<j && arr[j]<arr[i]))
                       {
                           if(abs(i-j)%abs(arr[j]-arr[i])==0)
                           {
                                v1.push_back(j);
                           }
                       }
                   }
                }
                else{
                    v1.push_back(j);
                }
            }
            v.push_back(v1);

        }
        /*for(i=0;i<v.size();i++)
        {
            for(j=0;j<v[i].size();j++)
            {
                cout<<v[i][j]<<" ";
            }
            cout<<"\n";
        }*/
        int k;

        int max1=1,min1=6;
        set<int>s;
        for(i=0;i<v.size();i++)
        {

            for(j=0;j<v[i].size();j++)
            {
                for(k=0;k<v[v[i][j]].size();k++)
                {
                    s.insert(v[v[i][j]][k]);
                }
            }
            if(s.size()>max1)
                max1=s.size();
            if(s.size()<min1)
                min1=s.size();
            s.clear();
        }
        cout<<min1<<" "<<max1<<"\n";


    }
}
