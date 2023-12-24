#include<bits/stdc++.h>
#include<map>
#include<set>
#include<map>
#include<string>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int n=s.size();
        map<int,set<string>>m;

        set<string>s2;
        for (int len = 1; len <= n; len++)
        {

           for (int i = 0; i <= n - len; i++)
            {
                int j = i + len - 1;
                string temp="";
                for (int k = i; k <= j; k++)
                {
                    temp+=s[k];
                }
                s2.insert(temp);
            }
            m[len]=s2;
            s2.clear();
        }
        auto it=m.begin();
        it++;
        it++;
        while(it!=m.end())
        {
            auto it2=(*it).second.begin();
            auto it3=it2;


            while(it2!=(*it).second.end())
            {
                string temp=(*it2);
                cout<<temp<<" temp "<<endl;




                while(it3!=(*it).second.end())
                {

                    int flag2=1;
                    if((*it2)!=(*it3))
                    {
                        string temp1=(*it3);
                        cout<<temp1<<" temp1 "<<endl;


                        for(int i=0;i<temp.size();i++)
                        {
                            cout<<temp[i]<<" ";
                            if(temp[i]!=temp1[i])
                            {
                                if(temp1[i]==0)
                                {
                                    int c=0,flag=1;
                                    for(int j=i;j<=temp1.size();j++)
                                    {
                                        if(temp1[j]=='1')
                                        {
                                            c++;
                                            if(c==2)
                                            {

                                                string tt=temp1.substr(i,j-i+1);
                                                string tt1=temp1.substr(0,i);

                                                reverse(tt.begin(),tt.end());
                                                tt1.append(tt);
                                                tt1.append(temp1.substr(j+1));
                                                temp1=tt1;
                                                //cout<<temp1<<endl;
                                                break;
                                                flag=0;
                                            }
                                        }
                                    }
                                    if(flag==1)
                                    {
                                        flag2=0;
                                        break;

                                    }
                                }
                                else if(temp[i]==0)
                                {
                                    int c=0,flag=1;
                                    for(int j=i;j<=temp.size();j++)
                                    {
                                        if(temp[j]=='1')
                                        {
                                            c++;
                                            if(c==2)
                                            {
                                                cout<<temp<<endl;
                                                string tt=temp.substr(i,j-i+1);
                                                string tt1=temp.substr(0,i);

                                                reverse(tt.begin(),tt.end());
                                                tt1.append(tt);
                                                tt1.append(temp.substr(j+1));
                                                temp=tt1;
                                                //cout<<temp<<endl;
                                                break;
                                                flag=0;
                                            }
                                        }
                                    }
                                    if(flag==1)
                                    {
                                        flag2=0;
                                        break;
                                    }
                                }
                            }
                        }
                        if(flag2==1)
                        {
                            if(temp==temp1)
                            {
                                ((*it).second).erase(it2);
                                //cout<<ss<<endl;
                                //(*it).second.erase(it3);
                            }
                        }
                    }
                    it3++;
                }
                it2++;
            }
            it++;
        }
        auto it4=m.begin();
        int count1=0;
        while(it4!=m.end())
        {
            count1+=(*it4).second.size();
            it4++;
        }
        cout<<count1<<endl;
    }
}
