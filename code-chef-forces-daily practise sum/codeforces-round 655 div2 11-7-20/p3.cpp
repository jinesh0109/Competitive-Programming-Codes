#include<iostream>
using namespace std;
int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        long long int n;
        cin>>n;
        long long int a,i,c=0,f=1;


        for(i=1;i<=n;i++)
        {
            cin>>a;
            if(a!=i && f==1)
            {
                c++;
                f=0;
            }
            else if(a==i)
                f=1;
        }
        if(c>1)
        {
            cout<<"2\n";
        }
        else{
            cout<<c<<endl;
        }

    }
}
