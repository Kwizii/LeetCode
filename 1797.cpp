//
// Created by Chanvo on 2023/2/9.
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

using namespace std;

class AuthenticationManager {
private:
    int timeToLive;
    unordered_map<string, int> tokens;
public:
    AuthenticationManager(int timeToLive) {
        this->timeToLive = timeToLive;
    }

    void generate(string tokenId, int currentTime) {
        tokens[tokenId] = currentTime;
    }

    void renew(string tokenId, int currentTime) {
        if (tokens.count(tokenId) && (tokens[tokenId] + timeToLive) > currentTime)
            tokens[tokenId] = currentTime;
    }

    int countUnexpiredTokens(int currentTime) {
        int cnt = 0;
        for (auto &[_, time]: tokens) {
            if ((time + timeToLive) > currentTime)
                cnt++;
        }
        return cnt;
    }
};


int main() {
    return 0;
}