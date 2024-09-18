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
	vector<int> prices={3,1,2};
	int n = prices.size();
	vector<int> dp(n,0);
	dp[n-1] = prices[n-1];
	for(int i = n-1; i>=0;i--){
		if(i +i + 2 < n) dp[i] = prices[i] + dp[i + i +2];
		else dp[i] = prices[i];
		int a = i+1;
		for(int j =i+1;j<=i + i +1 && j< n;j++){
			dp[i] = min(dp[i], dp[j] + prices[i]); 
		}
	}
	cout<< dp[0] <<endl;
}
 
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    solve();
    return 0;
}
