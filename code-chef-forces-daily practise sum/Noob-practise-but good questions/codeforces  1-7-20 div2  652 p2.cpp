#include<iostream>
using namespace std;
int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        long long int n,k;
        cin>>n>>k;
        if(k<n)
        {
            cout<<(k*(k+1))/2<<endl;
        }
        else if(k==n)
        {
            cout<<((k*(k-1))/2)+1<<endl;
        }
        else{
            cout<<(((n-1)*(n))/2)+1<<endl;
        }
    }
}
