#include<bits/stdc++.h>
#include<string>
#include<map>
#include<iterator>
using namespace std;
int main()
{




        map<string,int>m,n;
        m["ACov("]=0,n["(A)"]=0;
        m["BCov("]=0,n["(B)"]=0;
        m["CCov("]=0,n["(C)"]=0;
        m["DCov("]=0,n["(D)"]=0;
        m["ECov("]=0,n["(E)"]=0;
        m["FCov("]=0,n["(F)"]=0;

        int i=6;
        float score=0.0;
        while(i--)
        {
            string ans;
            cin>>ans;
            map<string,int>::iterator it=m.begin(),it1=n.begin();
            size_t f,f1;
            while(it!=m.end())
            {
                f=(ans).find((*it).first);
                 if (f != string::npos && f==0)
                 {

                     if((*it).second<1)
                     {
                         score+=0.5;
                        (*it).second++;
                     }
                     else{
                        break;
                     }

                }
                it++;
            }
            while(it1!=n.end())
            {
                f1=(ans).find((*it1).first);
                 if (f1 != string::npos)
                 {
                     if((*it1).second<1)
                     {
                         score+=0.5;
                        (*it1).second++;
                     }
                     else{
                        break;
                     }

                }
                it1++;
            }

        }
        cout<<score<<" out of 6"<<endl;

    }


