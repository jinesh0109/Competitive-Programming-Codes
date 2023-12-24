#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int arr[2011];
int max(int a, int b)
{
    return (a > b) ? a : b;
}
int knapSack(int W, int wt[], int val[], int n)
{
    int i, w;
      vector<vector<int>> K(n + 1, vector<int>(W + 1));

    for(i = 0; i <= n; i++)
    {
        for(w = 0; w <= W; w++)
        {
            if (i == 0 || w == 0)
                K[i][w] = 0;
            else if (wt[i - 1] <= w)
                K[i][w] = max(val[i - 1] +
                                K[i - 1][w - wt[i - 1]],
                                K[i - 1][w]);
            else
                K[i][w] = K[i - 1][w];
        }
    }
    return K[n][W];
}
void solve()
{
    int i,j;
    for(i=0;i<=2010;i++)
    {
        arr[i]=100000;
    }
    arr[1]=0;
    arr[2]=1;

    for(i=2;i<1004;i++)
    {
        for(j=1;j<=i;j++)
        {
            arr[i+i/j]=min(arr[i]+1,arr[i+i/j]);
        }
    }
}
int main()
{
    int t,i,j;

    cin>>t;
    solve();

    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int b[n],c[n],w[n];
        for(i=0;i<n;i++)
        {
            cin>>b[i];
            w[i]=arr[b[i]];
        }
        for(i=0;i<n;i++)
        {
            cin>>c[i];
        }
        for(i=0;i<n;i++)
        {
            cout<<w[i]<<" ";
        }
        cout<<"\n";
        cout<<knapSack(k,w,c,n)<<endl;

    }
}
