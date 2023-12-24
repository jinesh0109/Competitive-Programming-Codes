#include<bits/stdc++.h>
#define ll long long int
#include<map>
#include<iterator>
using namespace std;
int main()
{
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
     ll t;
     cin>>t;
     while(t--)
     {
         ll i;
         string s,p,s1;
         cin>>s>>p;
         map <char,ll>m;
         for(i=0;i<s.length();i++)
         {
             m[s[i]]++;
         }


         for(i=0;i<p.length();i++)
         {
             m[p[i]]--;
         }

        char c;
            int flag=1,j;
         for(auto it:m)
         {
             if(it.first!=p[0])
             {

                 c=it.first;
                 s1.append(it.second,c);


                 m[it.first]=0;
             }
             else if(it.first==p[0])
                {
                    c=it.first;
                    for(j=1;j<p.length();j++)
                    {
                        if(it.second>=1)
                        {
                            if(p[j]-32<c-32)
                            {
                                s1+=p;
                                s1.append(it.second,c);
                                flag=0;
                                break;
                            }
                            else if(p[j]-32>c-32)
                            {
                                break;
                            }

                        }
                    }


                    if(flag==1)
                    {
                        s1.append(it.second,c);
                        s1+=p;
                    }


                 m[it.first]=0;
                break;
             }
         }
         for(auto it2:m)
         {
              c=it2.first;
             s1.append(it2.second,c);
         }
         cout<<s1<<endl;
     }
}
