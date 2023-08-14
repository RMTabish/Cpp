#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        vector<int> dupli;
        for (int i = 0;i < nums.size();i++) {
            //search if dupli already have it
            bool have = false;
            for (int j = 0;j < dupli.size();j++) {
                if (nums.at(i) == dupli.at(j)) {
                    have = true;

                }
             }

            if (have == false) {
                dupli.push_back(nums.at(i));
            }
        }
        nums.clear();

    
        for (int j = 0;j < dupli.size();j++) {
            nums.push_back(dupli.at(j));
        }
        cout << nums.size();
       
        return nums.size();
    }
};

int main() {
    Solution solution;
    vector<int> nums = { 1, 2, 2, 3, 4, 4, 4, 5 };

    cout << "Original array: ";
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;

    solution.removeDuplicates(nums);

    return 0;
}