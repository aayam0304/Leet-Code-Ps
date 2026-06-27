#include <vector>

class Solution {
private:
    std::vector<int> data;
    int size;

public:
    Solution() : size(0) {} 
    std::vector<int> runningSum(std::vector<int>& nums) {
        size = nums.size();
        data = nums;
        
        int sum_num = 0; 
        for(int i = 0; i < size; i++) {
            sum_num += data[i];
            data[i] = sum_num; 
        }
        
        return data; 
    }
};
