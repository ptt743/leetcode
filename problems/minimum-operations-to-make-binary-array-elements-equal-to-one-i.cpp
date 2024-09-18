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
	vector<int> nums={0,1,1,1,0,0};
	int n = nums.size();
	int left = 0;
	int count =0;
	for(int i =0;i< n-2;i++){
		if(nums[i]==0){
			for(int j=0;j<3 && i+j<n;j++){
				nums[i+j]=1 - nums[i+j];
			}
			count++;
		}
	}
	if(nums[n-1]==nums[n-2] && nums[n-2]==nums[n-3] && nums[n-1]==1) cout<< count<<endl;
	else cout<< "-1"<<endl;
	
}
 
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    solve();
    return 0;
}
