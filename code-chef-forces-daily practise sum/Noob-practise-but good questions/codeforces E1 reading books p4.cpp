#include<bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    long long int n,k;
    cin>>n>>k;
    vector<pair<long long int,pair<long long int,long long int>>> v1,vboth,va,vb;
    long long int i,t,a,b,ca=0,cb=0;
    for(i=0;i<n;i++)
    {
        cin>>t>>a>>b;
        v1.push_back(make_pair(t, make_pair(a, b)));
        if(a==1)
            ca++;
        if(b==1)
            cb++;
        if(a==1 && b==1)
        {
            vboth.push_back(make_pair(t, make_pair(a, b)));
        }
        else if(a==1)
        {
            va.push_back(make_pair(t, make_pair(a, b)));
        }
        else if(b==1)
        {
            vb.push_back(make_pair(t, make_pair(a, b)));
        }
    }
    long long int vbothCount=0,vaCount=0,vbCount=0,ansa=0,ansb=0,time=0;
    if(ca>=k && cb>=k)
    {
        sort(vboth.begin(),vboth.end());
        sort(va.begin(),va.end());
        sort(vb.begin(),vb.end());
          for(i=0;i<n;i++)
          {
            if(vbothCount<vboth.size())
            {
              if( vaCount<va.size() &&vbCount<vb.size())
              {
                if(vboth[vbothCount].first<=(va[vaCount].first+vb[vbCount].first))
                {

                    time+=vboth[vbothCount].first;
                    ansa++;
                    ansb++;
                    vbothCount++;
                    if(ansa==k && ansb==k)
                    {
                        cout<<time;
                        return 0;
                    }

                }
                else{
                    time+=va[vaCount].first;
                    time+=vb[vbCount].first;
                    vaCount++;
                    vbCount++;
                    ansa++;
                    ansb++;
                    if(ansa==k && ansb==k)
                    {
                        cout<<time;
                        return 0;
                    }
                    }
               }
               else
                {
                    time+=vboth[vbothCount].first;
                    ansa++;
                    ansb++;
                    vbothCount++;
                    if(ansa==k && ansb==k)
                    {
                        cout<<time;
                        return 0;
                    }
                }

            }
            else
            {
                time+=va[vaCount].first;
                    time+=vb[vbCount].first;
                    vaCount++;
                    vbCount++;
                    ansa++;
                    ansb++;
                    if(ansa==k && ansb==k)
                    {
                        cout<<time;
                        return 0;
                    }
            }

        }
    }
    else{
        cout<<"-1";
        return 0;
    }



}

