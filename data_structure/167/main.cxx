#include <iostream>
#include <vector>

using namespace std;


class Solution {    
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int i = 0;
        int j = numbers.size() - 1;

        int sum = 0;
        while (i < j) {
            sum = numbers[i] + numbers[j];
            if (sum < target) {
                i++;
            } else if (sum > target) {
                j--;
            } else {
                break;
            }
        }

        return std::vector<int>{i, j};
    }
};


int main(int argc, char* argv[]) {


    return 0;
}