#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        if (intervals.size() == 0) {
            return intervals;            
        }

        std::sort(intervals.begin(), intervals.end(), [](const std::vector<int>& a, const std::vector<int>& b) {
            return a[0] < b[0];
        });

        std::vector<std::vector<int>> ans{};

        ans.push_back(intervals[0]);
        for (int i = 1; i < intervals.size(); i++) {
            if (ans.back()[1] >= intervals[i][0])  {
                if (ans.back()[1] < intervals[i][1])  {
                    ans.back()[1] = intervals[i][1];
                }
            } else {
                ans.push_back(intervals[i]);
            }
        }

        return ans;
    }
};

int main(int argc, char* argv[]) {
    
    return 0;
}