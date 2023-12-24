#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int n,i,a=1,b=1,temp;
    cin>>n;
    if(n==1)
        {
            cout<<"1";
            return 0;
        }
    for(i=1;i<n;i++)
    {

        temp=a+b;
        a=b;
        b=temp;
    }
    cout<<temp<<endl;
}
