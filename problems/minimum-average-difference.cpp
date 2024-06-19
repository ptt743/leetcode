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
void solve(vector<int>& nums){
		long long sum1 = 0;
		long long sum2 = 0;
		int n = nums.size();
		for(int i =0;i< n;i++){
			sum1+=nums[i];
		}
		int ans = 1e9;
		int index=0;
		for(int i=0;i< n;i++){
			sum1-=nums[i];
			sum2+=nums[i];
			long long first = sum2/(i+1);
			long long second = 0;
			if(i!=n-1) second = sum1/(n-i-1);
			if(abs(first - second)<ans){
				ans = abs(first - second);
				index = i;
			}
		}
		cout<< index << endl;
}
 
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int n ; cin>> n;
    vector<int> nums(n,0);
    for(int i =0;i< n;i++) cin>> nums[i];
    solve(nums);
    return 0;
}
