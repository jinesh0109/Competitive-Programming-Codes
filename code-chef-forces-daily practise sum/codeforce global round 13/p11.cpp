#include <bits/stdc++.h>
#define ll long long int

using namespace std;


int main()
{

   int t;
   cin>>t;
   while(t--)
   {
       string s;
       cin>>s;
       ll n=s.length(),countA=0,countB=0,countC=0,i;
       for(i=0;i<n;i++)
       {
            if(s[i]=='A')
                countA++;
            else if(s[i]=='B')
                countB++;
            else
                countC++;
       }
       if(countA-countB-countC==0)
       {
           ll sum=0,pve=0,nve=0;
           for(i=0;i<n;i++)
           {
                if(s[i]=='A')
                    sum++;
                else
                    sum--;
                if(sum>0)
                    pve++;
                else if(sum<0)
                    nve++;
           }
            if(pve&&nve)
                cout<<"NO\n";
            else
                cout<<"YES\n";
       }
       else if(-countA-countB+countC==0)
       {
           ll sum=0,pve=0,nve=0;
           for(i=0;i<n;i++)
           {
                if(s[i]=='C')
                    sum++;
                else
                    sum--;
                if(sum>0)
                    pve++;
                else if(sum<0)
                    nve++;
           }
            if(pve&&nve)
                cout<<"NO\n";
            else
                cout<<"YES\n";
       }
       else if(-countA+countB-countC==0)
       {
           ll sum=0,pve=0,nve=0;
           for(i=0;i<n;i++)
           {
                if(s[i]=='B')
                    sum++;
                else
                    sum--;
                if(sum>0)
                    pve++;
                else if(sum<0)
                    nve++;
           }
            if(pve&&nve)
                cout<<"NO\n";
            else
                 cout<<"YES\n";
       }
        else
             cout<<"NO\n";
   }
   return 0;
}
