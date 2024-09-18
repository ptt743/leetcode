#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<queue>
#include<stack>
#include<set>
#include<unordered_map>
#include<cmath>
#include<map>
#include<functional>
#define ll long long

using namespace std;
//*****taipt*****//
/*
*/
void solve(){
	vector<int> cards = {1,0,5,3};
	int n = cards.size();
	map<long long, int> mp;
	int res = 1e9;
	for(int i= 0;i< n;i++){
		if(mp[cards[i]]!=0){
			res = min(res, i+1 - mp[cards[i]]+1);
		}
		mp[cards[i]] = i+1;
	}
	if(res==1e9) res = -1;
	return res;

}
 
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    solve();
    return 0;
}
