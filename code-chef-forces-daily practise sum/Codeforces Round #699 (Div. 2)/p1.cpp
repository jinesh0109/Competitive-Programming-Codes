#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll x,y,i;
        cin>>x>>y;
        string s;
        cin>>s;
        ll cL=0,cR=0,cU=0,cD=0;
        for(i=0;i<s.size();i++)
        {
            if(s[i]=='R')
                cR++;
            else if(s[i]=='L')
                cL++;
            else if(s[i]=='U')
                cU++;
            else
                cD++;
        }
        if(x==0 && y==0)
        {
            cout<<"YES\n";
        }
        else if(x==0)
        {
            if(y>0)
            {
                if(cU>=y)
                    cout<<"YES\n";
                else
                    cout<<"NO\n";
            }
            else{
                if(cD>=abs(y))
                    cout<<"YES\n";
                else
                    cout<<"NO\n";
            }
        }
        else if(y==0)
        {
            if(x>0)
            {
                if(cR>=x)
                    cout<<"YES\n";
                else
                    cout<<"NO\n";
            }
            else{
                if(cL>=abs(x))
                    cout<<"YES\n";
                else
                    cout<<"NO\n";
            }
        }

        else if(x>0 && y>0)
        {
            if(cR>=x && cU>=y)
                cout<<"YES\n";
            else
                cout<<"NO\n";
        }
        else if(x<0 && y>0)
        {
            if(cL>=abs(x) && cU>=y)
                cout<<"YES\n";
            else
                cout<<"NO\n";
        }
        else if(x<0 && y<0)
        {
            if(cL>=abs(x) && cD>=abs(y))
                cout<<"YES\n";
            else
                cout<<"NO\n";
        }
        else if(x>0 && y<0)
        {
            if(cR>=x && cD>=abs(y))
                cout<<"YES\n";
            else
                cout<<"NO\n";
        }

    }
}
