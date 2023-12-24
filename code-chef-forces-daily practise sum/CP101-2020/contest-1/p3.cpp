#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x1,v1,x2,v2,temp;
    cin>>x1>>v1>>x2>>v2;
    if(v2>=v1)
    {
        cout<<"NO\n";
    }
    else{
        temp=x2-x1;
        if(temp%(v1-v2)==0)
        {
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
}
