#include <iostream>
#include<cmath>
#include<vector>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> v1;
        for(int j=0;j<n;j++)
        {
            double s,v,p;
            cin>>s>>p>>v;
            if((int)p%(int)(s+1)==0)
            {
                v1.push_back((p/(s+1))*v);
            }
            else{
                v1.push_back((floor(p/(s+1)))*v);
            }
        }
        long long int max=0;
        for(int j=0;j<v1.size();j++)
        {
            if(v1[j]>max)
                max=v1[j];
        }
            cout<<max<<endl;
    }

    return 0;
}
