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
vector<int> solve(vector<int>& c){
	int n = c.size();
	vector<pair<int,int>> pairs;
	for(int i =0;i< n;i++){
		pairs.push_back(make_pair(c[i],i));
	}
	function<bool(pair<int,int>, pair<int,int>)> option = [&](pair<int,int> a, pair<int,int> b)-> bool{
		if((ll)a.first * (ll)b.first<0){
			if(a.first < b.first) return true;
			return false;
		} else {
			if(a.second < b.second) return true;
			return false;
		}
	};
	sort(pairs.begin(), pairs.end(), option);
	int left = n/2, right = 0;
	vector<int> result;
	while( right < n/2){
		result.push_back(pairs[left].first);
		result.push_back(pairs[right].first);
		right++;
		left++;
	}
	return result;
}
 
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    vector<int> nums = {-1,1};
    solve(nums);
    return 0;
}
