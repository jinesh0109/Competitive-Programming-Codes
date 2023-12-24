#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int tt=1;tt<=t;tt++)
    {
        int n,i;
        cin>>n;
        int arr[n];
        map<int,int>m;
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
            m[arr[i]]++;
        }

        int sum=0;
        auto it=m.begin();
        while(it!=m.end())
        {
            int limit=abs(sum-(*it).first);
            if(sum<(*it).first)
            {
                if(limit >= ((*it).second))
                {
                    sum+=((*it).second);
                }
                else{
                    sum+=limit;
                }
            }
            else{
                break;
            }

            it++;
        }
        cout<<"Case #"<<tt<<": "<<sum<<endl;


    }
}
