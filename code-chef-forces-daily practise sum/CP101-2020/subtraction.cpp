#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        long long int a,b,c=0,temp;
        cin>>a>>b;
        while(a!=0 && b!=0)
        {
            if(a>=b)
            {
                c=c+a/b;
                a=a%b;
            }
            else{
                c=c+b/a;
                b=b%a;

            }

        }
        cout<<c<<"\n";
    }
}
