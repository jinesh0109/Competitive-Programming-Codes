#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,i,j;
        cin>>n>>m;
        int a[n][m];
        vector<int>v,v1,v2;
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                cin>>a[i][j];
                v.push_back(a[i][j]);
            }
        }
        sort(v.begin(),v.end());
        v.erase(v.begin()+m,v.end());
        v2=v;
        for(i=0;i<m;i++)
        {
            auto it=find(v.begin(),v.end(),a[0][i]);
            auto it5=find(v2.begin(),v2.end(),a[0][i]);
            if(it==v.end())
            {
                v1.push_back(a[0][i]);
             //   cout<<v1[0]<<endl;
                auto it1=v.begin();
                a[0][i]=(*it1);
                v.erase(it1);
            }
            else{
                //cout<<"kon tha ye "<<*it<<endl;
                v.erase(it);
                v2.erase(it5);

                //cout<<v.size()<<" size is :\n";
            }

        }
        int c=0;
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                if(i!=0)
                {
                    auto it=find(v2.begin(),v2.end(),a[i][j]);
                    if(it!=v2.end())
                    {
                        a[i][j]=v1[c];
                        c++;
                    }
                }
            }
        }
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                cout<<a[i][j]<<" ";
            }
            cout<<"\n";
        }


    }
}
