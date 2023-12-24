#include<iostream>
using namespace std;
int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        long long int s,n;
        cin>>s>>n;
        if(s==1)
        {

            cout<<"1\n";
        }
        else if(s<=n)
        {

            if(s%2==0)
                cout<<"1\n";
            else
                cout<<"2\n";
        }
        else{
            long long int a=s/n;
            if(s%2==0)
            {
                if(s-a*n==0)
                    cout<<a<<endl;
                    else
                        cout<<a+1<<endl;
            }
            else{
                if(s-1-a*n==0)
                    cout<<a+1<<endl;
                else
                    cout<<a+2<<endl;
            }


        }
    }
}
