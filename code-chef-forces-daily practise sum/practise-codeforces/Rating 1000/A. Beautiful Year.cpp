#include<bits/stdc++.h>
using namespace std;
int main()
{
    int y,i;
    cin>>y;
    i=y+1;
    int d0,d1,d2,d3;
    d3=i/1000;
    d2=(i%1000)/100;
    d1=(i%100)/10;
    d0=i%10;

    while(d0==d1 || d0==d2 || d0==d3 || d1==d2 || d1==d3 || d2==d3 )
    {
        i++;
        d3=i/1000;
        d2=(i%1000)/100;
        d1=(i%100)/10;
        d0=i%10;
    }
    cout<<i;

}
