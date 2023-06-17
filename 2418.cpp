//
// Created by ChanvoBook on 2023/4/25.
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

using namespace std;

class Solution {
public:
    // 快速排序函数
    void quickSort(vector<int> &vec, vector<string> &vec1, int left, int right) {
        if (left >= right) {
            return;
        }
        int pivot = vec[left];  // 选择第一个元素作为基准值
        int i = left + 1;
        int j = right;

        while (i <= j) {
            while (i <= j && vec[i] > pivot) {
                i++;
            }
            while (i <= j && vec[j] < pivot) {
                j--;
            }
            if (i <= j) {
                swap(vec[i], vec[j]);
                swap(vec1[i], vec1[j]);
                i++;
                j--;
            }
        }
        swap(vec[left], vec[j]);  // 将基准值和枢轴点交换
        swap(vec1[left], vec1[j]);  // 将基准值和枢轴点交换
        quickSort(vec, vec1, left, j - 1);  // 对左半部分进行快速排序
        quickSort(vec, vec1, j + 1, right);  // 对右半部分进行快速排序
    }


    vector<string> sortPeople(vector<string> &names, vector<int> &heights) {
        quickSort(heights, names, 0, names.size() - 1);
        return names;
    }
};

int main() {
    vector<string> a{"IEO", "Sgizfdfrims", "QTASHKQ", "Vk", "RPJOFYZUBFSIYp", "EPCFFt", "VOYGWWNCf", "WSpmqvb"};
    vector<int> b{17233, 32521, 14087, 42738, 46669, 65662, 43204, 8224};
    Solution().sortPeople(a, b);
    return 0;
}