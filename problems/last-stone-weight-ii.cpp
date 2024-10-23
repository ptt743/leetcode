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
#define INF
using namespace std;
//*****taipt*****//
/*
*/
void solve(){
	vector<int> stones = {31,26,33,21,40};
	int n = stones.size();
	int sum =0;
	for(int i =1;i<=n;i++){
		sum += stones[i-1];
	}
	vector<vector<int>> dp = vector<vector<int>>(n+1,vector<int>(sum/2+1,0));
	for(int i =1;i<=n;i++){
		for(int j = 0; j*2 <= sum;j++){
			dp[i][j] = dp[i-1][j];
			if(stones[i-1]<=j){
				dp[i][j] = max(dp[i][j], dp[i-1][j - stones[i-1]] + stones[i-1]);
			}		
		}
	}
	cout<< (sum-dp[n][sum/2]) - dp[n][sum/2]<< endl;
}
 
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    solve();
    return 0;
}
