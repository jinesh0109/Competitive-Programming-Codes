#include<bits/stdc++.h>
#include<map>
using namespace std;
int main()
{
    map<int,int>m;
    int arr[1];
    vector<int>v;
    v.push_back(100);
    auto it =v.begin();
    for(it=v.begin();it!=v.end();it++)
    {
        m[*it]++;

    }
    cout<<m[100];

}

