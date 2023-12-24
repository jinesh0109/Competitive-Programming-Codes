#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {

       string s;
       ll i;
       cin>>s;
       if(s.size()==2)
       {
           cout<<(s[0]-'0')+(s[1]-'0')<<endl;
           continue;
       }
       ll ind=-1;
       for(i=0;i<s.size()-1;i++)
       {
           if((s[i]-'0')+(s[i+1]-'0')>=10)
           {
                ind=i;
           }

       }
       if(ind!=-1)
       {
        string s1;
        for(i=0;i<ind;i++)
        {
            cout<<s[i];
            s1+=s[i];
        }
        cout<<s[ind]-'0'+s[ind+1]-'0';
        //s1+=s[ind]-'0'+s[ind+1]-'0';

        for(i=ind+2;i<s.size();i++)
        {
            cout<<s[i];
            s1+=s[i];
        }
        cout<<endl;
        //cout<<s1<<endl;
        continue;
       }
       for(i=0;s.size()-1;i++)
       {
           if(s[i]+s[i+1]-'0'>s[i])
           {
               ind=i;
               break;
           }
       }
       if(ind==-1)
       {
            for(i=0;s.size()-1;i++)
                cout<<s[i];
            cout<<endl;
       }
       else
       {
        for(i=0;i<ind;i++)
            cout<<s[i];
        cout<<s[ind]-'0'+s[ind+1]-'0';
        for(i=ind+2;i<s.size();i++)
            cout<<s[i];
        cout<<endl;
       }




    }
}
