#include<bits/stdc++.h>
#include<cmath>
#include<map>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n,i;
        cin>>n;
        cout<<"2\n";
        long long int temp=n;
        for(i=n-1;i>0;i--)
        {
            cout<<i<<" "<<temp<<endl;
            temp=ceil((float(i+temp))/2);


        }
    }
}
