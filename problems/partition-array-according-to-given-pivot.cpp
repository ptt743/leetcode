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
vector<int> solve(vector<int>& nums, int pivot){
	int n = nums.size();
	vector<vector<int>> ans = vector<vector<int>>(3, vector<int>());
        for(int i =0;i<n;i++){
		if(nums[i]<pivot) ans[0].push_back(nums[i]);
		else if(nums[i]== pivot) ans[1].push_back(nums[i]);
		else ans[2].push_back(nums[i]);
	}
	vector<int> result;
	for(int i = 0;i<3;i++){
		for(int j =0;j< ans[i].size();j++){
			result.push_back(ans[i][j]);
		}
	}
	return result;
}
 
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int pivot = 2;
    vector<int> nums = {-3,4,3,2};
    solve(nums, pivot);
    return 0;
}
