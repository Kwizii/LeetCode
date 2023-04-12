//
// Created by ChanvoBook on 2023/4/12.
//
#include "iostream"
#include "queue"
#include "stack"
#include "vector"
#include "algorithm"
#include "cstring"
#include "cmath"
#include "set"
#include "map"
#include "numeric"
#include "unordered_set"
#include "unordered_map"
#include <chrono>

using namespace std;

class Solution {
public:
    string longestPalindrome(string s) {
        string m;
        for (int i = 0; m.size() < s.size() - i + 1; ++i) {
            for (int j = i; j < s.size(); ++j) {
                if (m.size() > j - i + 1)
                    continue;
                bool flag = true;
                for (int k = i; k <= i + (j - i) / 2; ++k) {
                    if (s[k] != s[j - k + i]) {
                        flag = false;
                        break;
                    }
                }
                if (flag)
                    m = s.substr(i, j - i + 1);
            }
        }
        return m;
    }
};

int main() {
    auto start_time = chrono::high_resolution_clock::now();
    for (int i = 0; i < 10000; ++i) {
        Solution().longestPalindrome(
                "uwqrvqslistiezghcxaocjbhtktayupazvowjrgexqobeymperyxtfkchujjkeefmdngfabycqzlslocjqipkszmihaarekosdkwvsirzxpauzqgnftcuflzyqwftwdeizwjhloqwkhevfovqwyvwcrosexhflkcudycvuelvvqlbzxoajisqgwgzhioomucfmkmyaqufqggimzpvggdohgxheielsqucemxrkmmagozxhvxlwvtbbcegkvvdrgkqszgajebbobxnossfrafglxvryhvyfcibfkgpbsorqprfujfgbmbctsenvbzcvypcjubsnjrjvyznbswqawodghmigdwgijfytxbgpxreyevuprpztmjejkaqyhppchuuytkdsteroptkouuvmkvejfunmawyuezxvxlrjulzdikvhgxajohpzrshrnngesarimyopgqydcmsaciegqlpqnclpwcjqmhtmtwwtbkmtnntdllqbyyhfxsjyhugnjbebtxeljytoxvqvrxygmtogndrhlcmbmgiueliyfkkcuypvvzkomjrfhuhhnfbxeuvssvvllgukdolffukzwqaimxkngnjnmsbvwkajyxqntsqjkjqvwxnlxwjfiaofejtjcveqstqhdzgqistxwsgrovvwgorjaoosremqbzllgbgrwtqdggxnyvkivlcvnv");
    }
    auto end_time = chrono::high_resolution_clock::now();
    auto duration = chrono::duration_cast<std::chrono::milliseconds>(end_time - start_time).count();
    cout << duration;
    return 0;
}