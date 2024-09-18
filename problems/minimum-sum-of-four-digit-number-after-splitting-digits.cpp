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
int solve(int num){
	vector<short> items;
	while(num!=0){
		short temp = num%10;
		num = num/10;
		items.push_back(temp);
	}
	sort(items.begin(), items.end());
	short last = items[2] + items[3];
	short ans = last%10;
	short first  = items[0] + items[1];
	if(last>=10) first+=1;
	ans = first*10 + ans;
	cout<< ans<<endl;
	return ans;
}
 
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    solve(4009);
    return 0;
}
