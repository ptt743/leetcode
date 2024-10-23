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
	int n1 = nums1.size();
        int n2 = nums2.size();
        vector<bool> check1 = vector<bool>(2001, false),
                     check2 = vector<bool>(2001, false);
        for (int i = 0; i < n1; i++)
            check1[nums1[i] + 1000] = true;
        for (int i = 0; i < n2; i++)
            check2[nums2[i] + 1000] = true;

        vector<vector<int>> res = vector<vector<int>>(2, vector<int>());
        for (int i = 0; i < n1; i++) {
            if (check2[nums1[i] + 1000] == false) {
                res[0].push_back(nums1[i]);
                check2[nums1[i] + 1000] = true;
            }
        }
        for (int i = 0; i < n2; i++) {
            if (check1[nums2[i] + 1000] == false) {
                res[1].push_back(nums2[i]);
                check1[nums2[i] + 1000] = true;
            }
        }
        return res;	
}
 
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    solve();
    return 0;
}
