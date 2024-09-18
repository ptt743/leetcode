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
	vector<int> nums={1,3,-1,-3,5,3,6,7};
	int k = 3;
	int n = nums.size();
	deque<int> dq;
	vector<int> res;
	for(int i =0;i< n;i++){
		while(!dq.empty() && i - dq.front() +1>k) dq.pop_front();
		while(!dq.empty() && nums[dq.back()]< nums[i]) dq.pop_back();
		dq.push_back(i);
		if(i>=k-1) res.push_back(nums[dq.front()]);
	}
}
 
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    solve();
    return 0;
}
