#include<bits/stdc++.h>
#include<set>
#include<iterator>
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
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        int j,T,k;
        set<int>s,s1;
        int max1=1,min1=6;
        for(i=0;i<n;i++)
        {
            int arr1[n];
            s.insert(i);
            auto it=s.begin();
            for(T=1;T<=5;T++)
            {
                for(j=0;j<n;j++)
                {
                    arr1[j]=arr[j]*T+(j+1);
                }
                for(it=s.begin();it!=s.end();it++)
                {
                    for(j=0;j<(*it);j++)
                    {
                        if(arr1[j]>=arr1[*it])
                            s1.insert(j);
                    }
                    for(j=(*it)+1;j<n;j++)
                    {
                        if(arr1[*it]>=arr1[j])
                            s1.insert(j);
                    }
                }
                s.insert(s1.begin(),s1.end());
                s1.clear();

            }

            if(s.size()>max1)
                max1=s.size();
            if(s.size()<min1)
                min1=s.size();
            //cout<<max1<<" i value "<<i<<endl;
            //cout<<min1<<" i value "<<i<<endl;
            s.clear();

        }
        cout<<min1<<" "<<max1<<"\n";
    }
}
