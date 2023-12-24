#include<iostream>
#include<string>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string str,str1;
    cin>>str;
    int sum=1;
    for(int i=0;i<str.size();i=i+sum)
    {
        str1[i]=str[i];
        cout<<str1;
        sum++;
    }

    return 0;
}
