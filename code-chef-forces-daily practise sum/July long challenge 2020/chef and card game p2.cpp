#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,c=0,c1=0;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            long long int a,b;
            cin>>a>>b;
            long long int num=a,num1=b,sum=0,sum1=0;
            while (num != 0)
            {
            sum = sum + num % 10;
            num = num / 10;
            }
            while (num1 != 0)
            {
            sum1 = sum1 + num1 % 10;
            num1 = num1 / 10;
            }
            if(sum>sum1)c++;
            else if(sum1>sum) c1++;
            else {c++,c1++;}
        }
        if(c>c1)
            cout<<"0 "<<c<<endl;
        else if(c1>c)
            cout<<"1 "<<c1<<endl;
        else
            cout<<"2 "<<c<<endl;

    }
    return 0;
}
