#include<bits/stdc++.h>
using namespace std;
int main()
{

    int l,a,p,a1,p1;
    cin>>l>>a>>p;
    int sum=0;
    if(l>=1 && a>=2 && p>=4)
    {
        a1=a/2;
        p1=p/4;
        sum=min(l,min(a1,p1));

    }
    cout<<sum*7<<endl;
}
