#include<bits/stdc++.h>
#include<map>
#include<iterator>
using namespace std;
int main()
{
    string s;
    cin>>s;
    map<char,double>m;
    long long int i;

    for(i=0;i<s.length();i++)
    {
        m[s[i]]++;
    }
    double sum=0;
    map<char,double>::iterator it=m.begin();
    while(it!=m.end())
    {
        sum+=(((*it).second)/s.size())*(*it).second;
        it++;

    }
    cout<<fixed<<setprecision(10)<<sum<<endl;
}
