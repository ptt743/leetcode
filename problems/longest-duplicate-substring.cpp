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

const int base = 31;
const ll MOD = 1000000003;
const ll maxn = 1000111;
ll POW[maxn], hashT[maxn];


ll getHashT(int i,int j) {
    return (hashT[j] - hashT[i - 1] * POW[j - i + 1] + MOD * MOD) % MOD;
}

bool match(string &s, int n, int size, string &result){
	ll hashP=0;
    	for (int i = 1; i <= size; i++)
        	hashP = (hashP * base + s[i] - 'a' + 1) % MOD;
	ll hashTemp = hashP;
	for(int i = size+1; i< n;i++){
		if(hashP == getHashT( i-size +1,i)){
			result = s.substr(i-size+1,size);
			return true;
		}
	}
	return false;
}

void solve(){
	string s;
	int n = s.size();
	s = " "+ s;

	int left = 1, right = n;
	POW[0] = 1;

    	for (int i = 1; i <= lenT; i++)
        	POW[i] = (POW[i - 1] * base) % MOD;

    	for (int i = 1; i <= lenT; i++)
		hashT[i] = (hashT[i - 1] * base + T[i] - 'a' + 1) % MOD;
	string result ="";
	while(left<=right){
		int mid  = (left + right)/2;
		if(match
	}

}
 
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    solve();
    return 0;
}
