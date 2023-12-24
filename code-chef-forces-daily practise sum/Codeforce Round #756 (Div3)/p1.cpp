#include <iostream>
#include <bits/stdc++.h>
#include<set>
#include<stddef.h>
#include<stdlib.h>
#include <unordered_set>
#include<unordered_map>
#include<map>
#include<string>
#include<ctype.h>
#include <queue>
// #pragma GCC optimize "trapv"
#define long long int ll;
using namespace std;



int main() {


  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    int z1=0;
    int f1=0,evening=0;

int c1=-1,heya=0;
    if(n%2==0){
      cout<<"0\n";
      continue;
    }
    while(n){
      int tmp=n%10;
      if(tmp%2==0){
        evening++;
        c1=heya;
      }
      heya++;
      n=n/10;

    }
    if(evening==0){
      cout<<"-1\n";
    }
    else{
      if(c1==(heya-1))
        cout<<"1\n";
      else
        cout<<"2\n";
    }
  }


    return 0;


}
