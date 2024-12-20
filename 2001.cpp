//
// Created by ChanvoBook on 2023/7/11.
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
#include "list"
#include "sstream"

using namespace std;

class Solution {
public:
    long long interchangeableRectangles(vector<vector<int>> &rectangles) {
        unordered_map<double, int> umap;
        for (const auto &rect: rectangles) {
            double ratio = (double) rect[0] / rect[1];
            umap[ratio]++;
        }
        long long ans = 0;
        for (const auto &[_, v]: umap) {
            ans += (long long) v * (v - 1) / 2;
        }
        return ans;
    }
};

int main() {
    vector<vector<int>> rects{{3,  9},
                              {2,  27},
                              {18, 12},
                              {14, 28},
                              {29, 24},
                              {13, 6},
                              {7,  9},
                              {18, 30},
                              {20, 30},
                              {4,  14},
                              {18, 27},
                              {22, 6},
                              {18, 24},
                              {2,  24},
                              {17, 28},
                              {25, 6},
                              {28, 14},
                              {7,  20},
                              {7,  6},
                              {11, 28},
                              {25, 2},
                              {29, 28},
                              {5,  11},
                              {17, 28},
                              {8,  29},
                              {4,  4},
                              {10, 19},
                              {29, 20},
                              {19, 17},
                              {9,  28},
                              {18, 11},
                              {13, 15},
                              {8,  11},
                              {20, 9},
                              {23, 26},
                              {10, 23},
                              {11, 26},
                              {14, 5},
                              {1,  27},
                              {17, 20},
                              {16, 22},
                              {11, 14},
                              {2,  24},
                              {28, 10},
                              {1,  12},
                              {23, 14},
                              {30, 14},
                              {12, 12},
                              {25, 5},
                              {15, 10},
                              {24, 20},
                              {7,  26},
                              {12, 25},
                              {18, 26},
                              {20, 20},
                              {5,  6},
                              {16, 15},
                              {12, 19},
                              {10, 3},
                              {3,  9},
                              {30, 20},
                              {19, 15},
                              {22, 24},
                              {25, 10},
                              {8,  18},
                              {8,  18},
                              {26, 7},
                              {3,  24},
                              {2,  15},
                              {26, 30},
                              {8,  3},
                              {16, 6},
                              {29, 15},
                              {22, 10},
                              {22, 23},
                              {28, 12},
                              {12, 25},
                              {18, 11},
                              {16, 11},
                              {2,  9},
                              {12, 28},
                              {18, 13},
                              {5,  27},
                              {24, 12},
                              {2,  26},
                              {24, 28},
                              {1,  12},
                              {7,  1},
                              {21, 21},
                              {14, 29},
                              {12, 3},
                              {18, 28},
                              {7,  8},
                              {6,  5},
                              {5,  8},
                              {8,  3},
                              {15, 9},
                              {4,  13},
                              {19, 23},
                              {21, 4},
                              {10, 6},
                              {16, 13},
                              {12, 17},
                              {14, 28},
                              {12, 12},
                              {13, 15},
                              {10, 30},
                              {28, 7},
                              {19, 23},
                              {21, 24},
                              {22, 11},
                              {12, 27},
                              {29, 5},
                              {27, 12},
                              {16, 16},
                              {29, 20},
                              {1,  13},
                              {28, 7},
                              {8,  2},
                              {15, 4},
                              {7,  2},
                              {23, 24},
                              {20, 9},
                              {29, 9},
                              {6,  13},
                              {17, 16},
                              {22, 18},
                              {2,  4},
                              {16, 18},
                              {16, 23},
                              {29, 22},
                              {6,  20},
                              {12, 17},
                              {22, 3},
                              {19, 16},
                              {24, 19},
                              {30, 4},
                              {14, 13},
                              {4,  23},
                              {19, 2},
                              {24, 21},
                              {26, 26},
                              {19, 5},
                              {18, 30},
                              {23, 11},
                              {19, 12},
                              {24, 15},
                              {25, 6},
                              {12, 11},
                              {17, 18},
                              {12, 24},
                              {18, 20},
                              {7,  21},
                              {5,  15},
                              {8,  12},
                              {24, 23},
                              {29, 16},
                              {29, 15},
                              {25, 28},
                              {21, 6},
                              {19, 10},
                              {5,  6},
                              {30, 17},
                              {11, 6},
                              {12, 7},
                              {13, 22},
                              {5,  6},
                              {29, 28},
                              {21, 11},
                              {11, 4},
                              {5,  22},
                              {21, 5},
                              {1,  18},
                              {13, 12},
                              {7,  2},
                              {3,  27},
                              {28, 5},
                              {2,  17},
                              {11, 1},
                              {6,  19},
                              {27, 27},
                              {17, 11},
                              {27, 2},
                              {6,  11},
                              {6,  10},
                              {8,  15},
                              {17, 17},
                              {26, 22},
                              {17, 4},
                              {15, 11},
                              {30, 18},
                              {16, 23},
                              {18, 2},
                              {21, 28},
                              {29, 26},
                              {15, 11},
                              {13, 27},
                              {6,  13},
                              {10, 28},
                              {29, 2},
                              {3,  22},
                              {5,  20},
                              {29, 20},
                              {6,  4},
                              {14, 14},
                              {15, 11},
                              {16, 17},
                              {12, 4},
                              {19, 16},
                              {1,  13},
                              {11, 8},
                              {3,  22},
                              {19, 26},
                              {30, 19},
                              {18, 2},
                              {19, 27},
                              {17, 24},
                              {25, 11},
                              {6,  16},
                              {2,  26},
                              {28, 16},
                              {13, 8},
                              {11, 5},
                              {18, 15},
                              {15, 21},
                              {16, 23},
                              {6,  16},
                              {29, 20},
                              {28, 11},
                              {11, 13},
                              {23, 21},
                              {1,  19},
                              {19, 1},
                              {7,  28},
                              {9,  5},
                              {2,  8},
                              {9,  6},
                              {10, 16},
                              {17, 24},
                              {28, 18},
                              {21, 10},
                              {12, 5},
                              {21, 11},
                              {9,  13},
                              {17, 10},
                              {29, 25},
                              {14, 26},
                              {28, 26},
                              {17, 7},
                              {7,  11},
                              {7,  4},
                              {17, 21},
                              {24, 3},
                              {5,  12},
                              {19, 23},
                              {19, 13},
                              {8,  27},
                              {6,  9},
                              {5,  12},
                              {7,  29},
                              {10, 6},
                              {11, 9},
                              {27, 27},
                              {4,  11},
                              {15, 21},
                              {12, 7},
                              {15, 8},
                              {15, 30},
                              {16, 6},
                              {19, 7},
                              {28, 15},
                              {11, 18},
                              {27, 20},
                              {29, 29},
                              {5,  25},
                              {22, 23},
                              {18, 4},
                              {3,  15},
                              {20, 8},
                              {16, 3},
                              {19, 3},
                              {8,  2},
                              {10, 21},
                              {11, 27},
                              {3,  15},
                              {10, 30},
                              {15, 15},
                              {7,  8},
                              {6,  19},
                              {30, 1},
                              {15, 5},
                              {5,  6},
                              {12, 6},
                              {15, 27},
                              {11, 19},
                              {13, 23},
                              {16, 17},
                              {16, 13},
                              {12, 25},
                              {26, 6},
                              {20, 11},
                              {17, 10},
                              {23, 21},
                              {30, 28},
                              {14, 1},
                              {6,  30},
                              {2,  15},
                              {10, 22},
                              {5,  10}};
    cout << Solution().interchangeableRectangles(rects);
    return 0;
}