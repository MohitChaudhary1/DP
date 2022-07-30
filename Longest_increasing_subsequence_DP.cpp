#include <bits/stdc++.h>
using namespace std;

const int N=25e2+10;
vector<int> a(N);
int dp[N];

int func(int i){
	if(dp[i]!=-1)return dp[i];
	int ans=1;
	for(int j=0;j<i;++j){
		if(a[j]<a[i]){
			ans=max(ans,func(j)+1);
		}
	}
	return dp[i]= ans;
}

int main() {
	// Your code goes here;
	memset(dp,-1,sizeof(dp));
    int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int ans=0;
	for(int i=0;i<n;i++){
		ans=max(ans,func(i));
	}
	cout<<ans;
	return 0;
}