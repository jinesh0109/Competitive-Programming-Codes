#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#include<string>
int main()
{
    int t;
    cin>>t;
    while(t--)
    {

        ll n,i;
        cin>>n;
        string s1 = to_string(n);
        if(s1.size()==1)
        {
            cout<<n<<endl;
            continue;
        }
        else if(s1.size()==2)
        {
            ll temp1,temp2;
            temp1=n%10;
            temp2=n/10;
            cout<<min(temp1,temp2)<<endl;
            continue;
        }
        ll min1=10000000000;
        for(i=0;i<s1.size();i++)
        {
            string s2="";

            if(i==0)
            {
                s2=s2+s1.substr(1,s1.size()-1);

            }
            else if(i==s1.size()-1)
            {
                s2=s2+s1.substr(0,s1.size()-1);

            }
            else{
                s2=s2+s1.substr(0,i)+s1.substr(i+1,s1.size()-i-1);

            }



            int n1=stoi(s2);
            if(n1<min1)
                min1=n1;
        }
        cout<<min1<<endl;

    }
}
