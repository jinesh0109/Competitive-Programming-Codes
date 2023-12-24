#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,u,r,b,l;
        cin>>n>>u>>r>>b>>l;
        int u1=u,l1=l,b1=b,r1=r;
       if(u==n)
       {
           if(l1>0 && r1>0)
           {
               l1--;
               r1--;
           }
           else{
            cout<<"NO\n";
            continue;
           }
       }
       else if(u==n-1)
       {
           if(l1<1 && r1<1)
           {
               cout<<"NO\n";
               continue;
           }
           else if(l1>0 && r1<1)
           {
               l1--;
           }
           else if(r1>0 && l1<1)
           {
               r1--;
           }
           else
           {
               if(r1>=l1)
               {
                   r1--;
               }
               else{
                l1--;
               }
           }
       }

       if(r==n)
       {
           if(u1>0 && b1>0)
           {
               u1--;
               b1--;
           }
           else{
            cout<<"NO\n";
            continue;
           }
       }
       else if(r==n-1)
       {
           if(u1<1 && b1<1)
           {
               cout<<"NO\n";
               continue;
           }
           else if(u1>0 && b1<1)
           {
               u1--;
           }
           else if(b1>0 && u1<1)
           {
               b1--;
           }
           else
           {
               if(u1>=b1)
               {
                   u1--;
               }
               else{
                b1--;
               }
           }
       }

       if(b==n)
       {
           if(l1>0 && r1>0)
           {
               l1--;
               r1--;
           }
           else{
            cout<<"NO\n";
            continue;
           }
       }
       else if(b==n-1)
       {
           if(l1<1 && r1<1)
           {
               cout<<"NO\n";
               continue;
           }
           else if(l1>0 && r1<1)
           {
               l1--;
           }
           else if(r1>0 && l1<1)
           {
               r1--;
           }
           else
           {
               if(r1>=l1)
               {
                   r1--;
               }
               else{
                l1--;
               }
           }
       }


       if(l==n)
       {
           if(u1>0 && b1>0)
           {
               u1--;
               b1--;
           }
           else{
            cout<<"NO\n";
            continue;
           }
       }
       else if(l==n-1)
       {
           if(u1<1 && b1<1)
           {
               cout<<"NO\n";
               continue;
           }
           else if(u1>0 && b1<1)
           {
               u1--;
           }
           else if(b1>0 && u1<1)
           {
               b1--;
           }
           else
           {
               if(u1>=b1)
               {
                   u1--;
               }
               else{
                b1--;
               }
           }
       }
       cout<<"YES\n";

    }
}
