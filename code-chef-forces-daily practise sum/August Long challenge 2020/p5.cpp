#include<bits/stdc++.h>
#include<set>
#include<map>
#include<vector>
#include<iterator>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,i;
        cin>>n>>k;
        int arr[n];
        map <int,int>original;
        for(i=0;i<n;i++)
        {
            cin>>arr[i];

        }



    if(k==1)
    {
        set<int>s;
        s.insert(arr[0]);
        int c=1;
        for(i=1;i<n;i++)
        {
            auto it=s.find(arr[i]);
            if(it!=s.end())
            {
                c++;
                s.clear();
                s.insert(arr[i]);
            }
            else{
                s.insert(arr[i]);
            }
        }
        cout<<c<<endl;
    }
    else{
            map<int,vector<int>>m;
            vector <int> v;
            v.push_back(arr[0]);
            original[arr[0]]++;
            set <int>s1;
            int z=1;
            s1.insert(arr[0]);
            for(i=1;i<n;i++)
            {
                original[arr[i]]++;
                auto it=s1.find(arr[i]);
                if(it==s1.end())
                {
                    s1.insert(arr[i]);
                    v.push_back(arr[i]);
                }
                else{
                    m[z]=v;
                    z++;
                    s1.clear();
                    v.clear();
                    s1.insert(arr[i]);
                    v.push_back(arr[i]);

                }
            }
            m[z]=v;
            int min1=0;
            for(auto ti=original.begin();ti!=original.end();ti++)
            {
                if((*ti).second>1)
                    min1+=(*ti).second;
            }
            min1+=k;

            map<int,int>m2,m3;
            int j;
            auto it2=m.begin();
            int cost=0,previousCost=0;
            for(auto it3 = it2->second.begin(); it3 != it2->second.end(); it3++)
            {
                        m2[*it3]++;
            }
            it2++;
            while(it2!=m.end())
            {
                cost=0,previousCost=0;
                 for(auto it3 = (it2)->second.begin(); it3 != (it2)->second.end(); it3++)
                    {
                        m3[*it3]++;
                    }
                    auto it4 =m2.begin();

                        while(it4!=m2.end())
                        {
                            if((*it4).second>1)
                              previousCost+=(*it4).second;

                            it4++;
                        }
                    it4 =m3.begin();
                    while(it4!=m3.end())
                    {
                        m2[(*it4).first]+=(*it4).second;
                        it4++;
                    }
                    it4=m2.begin();
                    while(it4!=m2.end())
                    {
                        if((*it4).second>1)
                        cost+=(*it4).second;

                        it4++;
                    }

                    if(cost+k>2*k+previousCost)
                    {

                        m2.clear();
                        m2=m3;
                        m3.clear();
                    }
                    else{

                        it4 =m3.begin();
                        while(it4!=m3.end())
                        {
                            m2[(*it4).first]-=(*it4).second;
                            it4++;
                        }
                        it4 =m2.begin();
                        while(it4!=m2.end())
                        {
                            for(int n=1;n<=(*it4).second;n++)
                            {
                                m[(*it2).first].push_back((*it4).first);
                            }

                            it4++;
                        }
                        auto temp=it2;
                        temp--;
                        m.erase(temp);

                        it4 =m3.begin();
                        while(it4!=m3.end())
                        {
                            m2[(*it4).first]+=(*it4).second;
                            it4++;
                        }
                        m3.clear();
                    }

            it2++;

            }
            map<int,int>m6;
             it2=m.begin();
              int ans1=0;
            while(it2!=m.end())
            {
                for(auto it3 = (it2)->second.begin(); it3 != (it2)->second.end(); it3++)
                 {
                     m6[*it3]++;
                 }
                 for(auto it10=m6.begin();it10!=m6.end();it10++)
                 {
                     if((*it10).second>1)
                     {
                         ans1+=(*it10).second;
                     }
                 }
                 ans1+=k;
                 m6.clear();
                 it2++;
            }
            min1=min(min1,ans1);
            cout<<min1<<endl;

        }

    }
}
