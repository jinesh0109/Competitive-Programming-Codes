#include<bits/stdc++.h>
#include<vector>
#include<set>
#include<iterator>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,j,k,p;
        cin>>n;
        //vector<int>v;
        set<pair<int,int>>s;
        int arr[n];
        for(i=0;i<n;i++)cin>>arr[i];
        int max1=1,min1=6;
        for(i=0;i<n;i++)
        {
            s.insert(make_pair(arr[i],i));
            auto it=s.begin();
            for(j=0;j<n;j++)
            {
                if(i!=j)
                {
                    for(it=s.begin();it!=s.end();it++)
                    {
                        if(arr[j]!=(*it).first)
                        {
                            if(((*it).second>j && arr[j]>(*it).first) || ((*it).second<j && arr[j]<(*it).first) )
                            {
                                if(abs((*it).second-j)%abs(arr[j]-(*it).first)==0)
                                {
                                    s.insert(make_pair(arr[j],j));
                                    for(k=0;k<j;k++)
                                    {
                                        if(arr[k]!=arr[j])
                                        {
                                            if((k>j && arr[j]>arr[k]) && (k<j && arr[j]<arr[k]))
                                            {
                                                if(abs(k-j)%abs(arr[j]-arr[k])==0)
                                                {
                                                    s.insert(make_pair(arr[k],k));
                                                    //cout<<"j value "<<j<<" "<<arr[k]<<endl;
                                                }
                                            }
                                        }
                                    }
                                }

                            }
                        }
                    }
                }
            }
            if(s.size()>max1)
                max1=s.size();
            if(s.size()< min1)
                min1=s.size();
            cout<<max1<<" i "<<i<<endl;
            cout<<min1<<" i "<<i<<endl;
            s.clear();
        }
        cout<<min1<<" "<<max1<<"\n";

    }

}

