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
        if(n==1 ||n==2)
        {
            cout<<"1\n";
        }
        else if(n==3)
        {
            cout<<"2\n";
        }
        else if(n%2==0)
        {
            cout<<(n/2)<<endl;
        }
        else{
            cout<<(n/2)+1<<endl;
        }

    }
}
