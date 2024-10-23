#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<queue>
#include<stack>
#include<set>
#include<unordered_map>
#include<cmath>
#include<functional>
#define ll long long

using namespace std;
//*****taipt*****//
/*
*/
void solve(){
	string s1,s2,s3;
	s1 = "aabcc";
	s2 = "dbbca";
	s3 = "aadbbcbcac";
	int n = s1.size();
	int m = s2.size();
	s1 = " " + s1;
	s2 = " " + s2;
	s3 = " " + s3; 
	vector<vector<bool>> dp(n+1, vector<bool>(m+1, false));
	dp[0][0] = true;
	for(int i =1;i<=n;i++){
		dp[i][0] = dp[i-1][0] && (s1[i]==s3[i]);
	}
	for(int i =1;i<=m; i++){
		dp[0][i] = dp[0][i-1] && (s2[i] == s3[i]);
	}
	for(int i =1;i<=n;i++){
		for(int j=1;j<=m;j++){
			dp[i][j] = (dp[i-1][j] && s1[i]==s3[i+j]) ||(dp[i][j-1] && s2[j]==s3[i+j]);  
		}
	}
	cout<< dp[n][m]<<endl;
}
 
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    solve();
    return 0;
}
