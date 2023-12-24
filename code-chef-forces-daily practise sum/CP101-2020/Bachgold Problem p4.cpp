#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,i;
    cin>>n;
    cout<<n/2<<endl;
    if(n%2==1)
    {

        cout<<"3 ";
        n=n-3;
    }

    for(i=0;i<n/2;i++)
            cout<<"2 ";



}
