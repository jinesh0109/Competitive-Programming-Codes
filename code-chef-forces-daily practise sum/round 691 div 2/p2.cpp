#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if(n==1 || n==2)
    {
        cout<<"4\n";

    }
    else{
        if(n%2==1)
        {
            n=n+2;
            cout<<(n/2)*(n/2+1)+(n/2+1)*(n/2);
        }
        else{
            n=(n+1)/2;
            cout<<pow(n+1,2);
        }
    }

}
