#include "iostream"
#include "queue"
#include "stack"
#include "vector"
#include "algorithm"
#include "cstring"
#include "cmath"
#include "set"
#include "map"

using namespace std;

class Solution {
public:
//    vector<vector<int>> largeGroupPositions(string s) {
//        vector<vector<int>> result;
//        int index;
//        for (index = 0; index < s.length(); ++index) {
//            int j = 0;
//            while (s[index] == s[index + j + 1])
//                j++;
//            if (j < 2) {
//                index += j;
//                continue;
//            }
//            result.push_back({index,index+j});
//            index += j;
//        }
//        return result;
//    }

    vector<vector<int>> largeGroupPositions(string s) {
        vector<vector<int>> ans;
        int l = 0, r = 0;
        while (r < s.length()) {
            if (s[l] != s[r + 1]) {
                if (r - l >= 2)
                    ans.push_back({l, r});
                l = r + 1;
            }
            r++;
        }
        return ans;
    }
};

int main() {
    Solution().largeGroupPositions("abcdddeeeeaabbbcd");
    return 0;
}