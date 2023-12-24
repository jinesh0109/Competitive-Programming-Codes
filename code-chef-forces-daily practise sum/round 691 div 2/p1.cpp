#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i;
        cin>>n;
        string a,b;
        cin>>a>>b;
        int c_r=0,c_b=0,c_e=0;
        if(a==b)
        {
            cout<<"EQUAL\n";
            continue;
        }
        for(i=0;i<n;i++)
        {
            int temp,temp1;
            temp=a[i]-96;
            temp1=b[i]-96;
            if(temp>temp1)
            {
                c_r++;
            }
            else if(temp1>temp)
            {
                c_b++;
            }
            else{
                c_e++;
            }
        }
        if(c_r>c_b)
        {
            cout<<"RED\n";
        }
        else if(c_b>c_r){
            cout<<"BLUE\n";
        }
        else{
            cout<<"EQUAL\n";
        }

    }
}
