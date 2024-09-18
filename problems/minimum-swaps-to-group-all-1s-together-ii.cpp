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
int solve(vector<int>& nums){
	int n = nums.size();
	int countOne = 0;
	for(int i =0;i< n;i++) if(nums[i]==1) countOne++;
	int index = 0;
	for(int i =0;i< countOne-1;i++){
		nums.push_back(nums[index]);
		index++;
	}
	int right =0, left =0;
	int countZero = 0;
	int ans = 1e9;
	for(; right< nums.size(); right++){
		if( right>= countOne){
			if(nums[left]==0) countZero--;
			left++;
		}
		if(nums[right]==0) countZero++;
		if(right>= countOne-1) ans = min(ans, countZero);
	}
	cout<< ans << endl;
	return ans;
}
 
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    vector<int> nums={1,1,0,0,1};
    solve(nums);
    return 0;
}
