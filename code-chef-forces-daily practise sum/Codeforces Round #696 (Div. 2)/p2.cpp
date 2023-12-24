#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int d,i;
        cin>>d;
        long long int c=1,ans=1;
        ans+=d;
        int p1,p2;
        while(c<3)
        {
            int flag=1;
            for(i=2;i<=((long long int)(sqrt(double(ans))));i++)
            {
                if(ans%i==0)
                {
                    flag=0;
                    break;
                }
            }
            if(flag==0)
            {
                ans++;
            }
            else{
                c++;
                if(c==2)
                    p1=ans;
                else if(c==3)
                    p2=ans;
                if(c==3)
                    break;
                ans+=d;
            }
        }
        cout<<p1*p2<<endl;

    }
}
