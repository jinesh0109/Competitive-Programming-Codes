#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		string s;
		 s.append(200,'a');
		cout<<s<<endl;
		for(int i = 0; i < n; i++){
			int a;
			cin>>a;
			if(s[a] == 'a') s[a]++;
			else s[a]--;
			cout<<s<<endl;
		}
	}
	return 0;
}

