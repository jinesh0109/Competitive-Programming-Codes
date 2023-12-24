#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int Solution::books(vector<int> &A, int B) {
    int i,sum=0,n=A.size();
    int min1=INT_MAX;
    for(i=0;i<n;i++)
    {
        sum+=A[i];
        if(A[i]<min1)
            min1=A[i];
    }
    int low=min1,high=sum;
    int ans=INT_MAX;
    while(low<=high)
    {
        int mid=(low+high)/2;
        int c=1;
        int temp1=0;
        int sum1=0;
        for(int j=0;j<n;j++)
        {
            if((temp1+A[j])<=mid)
            {
                temp1+=A[j];
            }
            else{
                sum1=max(sum1,temp1);
                c++;
                temp1=A[j];
            }
        }
        sum1=max(sum1,temp1);
        cout<<c<<endl;
        if(c==B)
            ans=min(ans,sum1);
        else if(c>B)
        {
            high=mid-1;
        }
        else{
            low=mid+1;
        }

    }
    return ans;
}

int main()
{
    ll t=1;
    cin>>t;
    while(t--)
    {

    }
}

