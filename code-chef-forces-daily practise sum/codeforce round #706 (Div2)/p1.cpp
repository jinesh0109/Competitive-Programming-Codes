#include<bits/stdc++.h>
#include<map>
#include<iterator>
#define ll long long int
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i;
        cin>>n;
        map<int,int>m;
        int arr[n];
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
            m[arr[i]]++;
        }
        auto it=m.begin();
        while(it!=m.end())
        {
            if((*it).second>=1)
            {
                cout<<(*it).first<<" ";
                (*it).second=(*it).second-1;
            }
            it++;
        }
         it=m.begin();
        int j;
        while(it!=m.end())
        {
            if((*it).second>=1)
            {
                for(j=0;j<(*it).second;j++)
                {
                    cout<<(*it).first<<" ";
                }
            }
            it++;
        }
        cout<<"\n";
    }
}
