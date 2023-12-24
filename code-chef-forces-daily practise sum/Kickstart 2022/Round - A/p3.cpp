#include<bits/stdc++.h>
#include <bitset>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int tt=1;tt<=t;tt++)
    {
        int n,i;
        cin>>n;
        string s,s1;
        cin>>s;

        int c=0;
        for(i=0;i<n;i++)
        {
            if(s[i]=='?')
            {
                c++;
            }
        }
        //cout<<"counter :"<<c<<endl;
        int flag1=1;
        for(i=0;i<=pow(2,c)-1;i++)
        {
            string binary = std::bitset<15>(i).to_string();
            //cout<<"binary string of "<<i<<" is "<<binary<<endl;
            s1=s;
            int bj=14;
            for(int j=n-1;j>=0;j--)
            {
                if(s1[j]=='?')
                {
                    s1[j]=binary[bj];
                    bj--;
                }
            }
            int flag=1;
            for(int k=5;k<=n;k++)
            {

                for(int j=0;j<=n-k;j++)
                {
                    string sTemp=s1.substr(j,k);
          //          cout<<sTemp<<endl;
                    string sTemp1=sTemp;
                    reverse(sTemp1.begin(),sTemp1.end());
                    if(sTemp==sTemp1)
                    {
                        flag=0;
                        break;
                    }
                }
                if(flag==0)
                    break;

            }
            if(flag==1)
            {
                flag1=0;
                break;
            }
       }
       if(flag1==0)
       {
           cout<<"Case #"<<tt<<": POSSIBLE\n";
       }
       else{
            cout<<"Case #"<<tt<<": IMPOSSIBLE\n";
       }


    }
}
