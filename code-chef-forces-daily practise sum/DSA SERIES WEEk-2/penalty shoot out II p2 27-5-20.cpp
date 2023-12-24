#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        long long int n;
        string s;
        cin>>n>>s;

        long long int i=0,c=0,c1=0,possible=n,possible1=n,flag1=1,temp=1;
        while(i<2*n)
        {
            if(s[i]=='1')
            {
                c++;
            }
                possible=n+c-temp;
                if(c>possible1 || c1>possible)
                {
                    cout<<i+1<<endl;
                    flag1=0;
                    break;
                }
            i++;
            if(s[i]=='1')
            {
                c1++;
            }
                possible1=n+c1-temp;
                if(c1>possible || c>possible1)
                {
                    cout<<i+1<<endl;
                    flag1=0;
                    break;
                }
            i++;

            temp++;
        }
        if(flag1==1)
        {
            cout<<2*n<<endl;
        }

    }
    return 0;
}


