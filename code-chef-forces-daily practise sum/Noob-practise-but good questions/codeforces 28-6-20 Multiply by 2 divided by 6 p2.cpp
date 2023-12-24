#include<iostream>
using namespace std;
int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        long long int n,three=0,two=0,i;
        cin>>n;
        if(n==1)
        {
            cout<<"0\n";

        }
        else if(n%3==0 )
        {
            int c=1;
            while(n>1)
            {

            if(n%3==0)
             {
                three++;
                n=n/3;
             }
            else if(n%2==0)
             {
                two++;
                n=n/2;
             }
            else{
                cout<<"-1\n";
                c=0;
                break;
               }
            }
            if(c==1)
            {
                if(three>=two)
                {
                cout<<three+(three-two)<<endl;
                }
                else{
                cout<<"-1\n";
                    }
            }

        }
        else
        {
            cout<<"-1\n";

        }

    }
}
