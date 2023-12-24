#include<bits/stdc++.h>

#include<vector>
#include<iterator>
using namespace std;
int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        int n,i,j;
        cin>>n;

        vector<int> a;
		for(i=0;i<n;i++)
        {
            cin>>j;
            a.push_back(j);
        }
        int index=0,temp;
        while(index<n)
        {
            temp=min_element(a.begin()+index,a.end())-a.begin();
            int p=a[temp];
            a.erase(a.begin()+temp);
            a.insert(a.begin()+index,p);
            if(temp==index)index=temp+1;
            else index=temp;
        }
        for (auto it : a) cout << it << " ";
		cout << endl;

    }
}
