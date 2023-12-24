#include<bits/stdc++.h>
#include<vector>
#include<map>
#include<set>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i;
        cin>>n;
        int arr[n];
        for(i=0;i<n;i++)cin>>arr[i];
        int min1=7,max1=0;
        for(i=0;i<n;i++)
        {
            map<int,bool>m;
            m[i]=true;
            int time;
            for(time=1;time<=5;time++)
            {
                vector<int>v;
                auto it=m.begin();
                for(it=m.begin();it!=m.end();it++)
                {
                   v.push_back((*it).first);
                }
                int j,k;
                for(j=0;j<v.size();j++)
                {
                    for(k=0;k<i;k++)
                    {
                        auto it1=m.find(k);
                        if(it1==m.end())
                        {
                            if(k+arr[k]*time>= (j+arr[j]*time))
                                m[k]=true;
                        }
                    }
                    for(k=i;k<n;k++)
                    {
                        auto it2=m.find(k);
                        if(it2==m.end())
                        {
                            if(k+arr[k]*time<= (j+arr[j]*time))
                                m[k]=true;
                        }
                    }
                }
            }
            int length=m.size();
            if(length>max1)
                max1=length;
            if(length<min1)
                min1=length;
        }
        cout<<min1<<" "<<max1<<"\n";
    }
}
