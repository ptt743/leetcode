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
	vector<string> words = {"a","a"};
	string s = "aa";
	set<string> st;
	string prefix ="";
	for(int i =0;i< s.size();i++){
		prefix+=s[i];
		st.insert(prefix);
	}
	int res = 0;
	for(int i =0;i< words.size();i++){
		if(st.find(words[i])!=st.end()) res++;
	}
	cout<< res<<endl;

}
 
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    solve();
    return 0;
}
