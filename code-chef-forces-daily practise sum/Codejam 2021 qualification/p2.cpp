#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {

      ll t,tt;
      cin>>t;
      for(int tt=1;tt<=t;tt++){
        ll x,y,i,j;
        cin>>x>>y;
        string s;
        cin>>s;
        string real="";
        for(i=0;i<s.size();i++){

            if(s[i]=='?')
            {
                continue;
            }
            real+=s[i];
        }

        ll ans=0;

        ll temp1=real.find("CJ");
        ll temp2=real.find("JC");

        while(temp1!=-1){
            ans+=x;
            temp1=real.find("CJ",temp1+1);
        }
        while(temp2!=-1){
            ans+=y;
            temp2=real.find("JC",temp2+1);
        }

        cout<<"Case #"<<tt<<": "<<abs(ans)<<"\n";
        }
}
