#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int a,b,n,m;
        cin>>a>>b>>n>>m;
        if(a+b<m+n)
        {
            cout<<"No\n";

        }
        else{
            if(a<=b)
            {
                if(m>a)
                {
                cout<<"No\n";
                }
                else{
                cout<<"Yes\n";
                }
            }
            else{
                if(m>b)
                {
                    cout<<"No\n";
                }
                else
                    cout<<"Yes\n";
            }
        }

    }
    return 0;
}
