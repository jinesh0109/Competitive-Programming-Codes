#include<bits/stdc++.h>
#include<map>
#include<algorithm>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n,i,x2,y2;
        cin>>n;
        std::map<long long int,long long int>x,y;
        for(i=0;i<4*n-1;i++)
        {
            long long int x1,y1;
            cin>>x1>>y1;
            x[x1]++;
            y[y1]++;
        }
        std::map<long long int,long long int> :: iterator it=x.begin(),it1=y.begin();
        int f=1,f1=1;
        while(it!=x.end())
        {
            if(((*it).second)%2!=0)
            {
               x2=(*it).first;
               f=0;
            }
            if(((*it1).second)%2!=0)
               {
                   y2=(*it1).first;
                   f1=0;
                }
            it1++;
            it++;
            if(f==0 && f1==0)
                break;
        }

        cout<<x2<<" "<<y2<<endl;
    }
    return 0;
}
