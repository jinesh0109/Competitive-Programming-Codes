#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
            int x,i,j;
    cin>>x;
    if(x<=9)
    {
        cout<<x<<endl;
    }
    else{
        long long int temp=9;
        int ans=8;
        x=abs(x-temp);
        int flag=1;
        for(i=1;i<=12;i++)
        {
            if(x<=ans)
            {
                temp+=pow(10,i)*(abs(x));
                flag=0;
                break;
            }
            else{

                temp+=pow(10,i)*ans;
                x=abs(x-ans);
                ans--;
                if (ans==0)
                    break;
            }
        }
        if(flag==1)
        {
            cout<<"-1\n";
        }
        else{
            cout<<temp<<endl;
        }

    }
}

}
