#include<bits/stdc++.h>
using namespace std;
int main()
{
    int v1,d1,v2,d2,p;
    cin>>d1>>v1>>d2>>v2>>p;
    int c=min(d1,d2);
    int sum=0;
    int count1=c-1;
    if(d1==d2)
    {
        sum+=v1+v2;
        count1++;
        while(sum<p)
        {
            sum+=v1+v2;
            count1++;
        }
    }
    else if(d1<d2)
    {
        int temp=d2-d1;
        sum+=v1;
        count1++;
        int i=1;
        while(sum<p && i<temp)
        {
            sum+=v1;
            count1++;
            i++;
        }
        if(sum<p)
        {
            sum+=v1+v2;
            count1++;
            while(sum<p)
            {
                sum+=v1+v2;
                count1++;
            }
        }
    }
    else{
        int temp=d1-d2;
        sum+=v2;
        count1++;
        int i=1;
        while(sum<p && i<temp)
        {
            sum+=v2;
            count1++;
            i++;
        }
        if(sum<p)
        {
            sum+=v1+v2;
            count1++;
            while(sum<p)
            {
                sum+=v1+v2;
                count1++;
            }
        }
    }
    cout<<count1<<endl;
}
