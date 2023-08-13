#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        // Find the greatest number in the vector
        int max = 0;
        int i = 0;

        for (i = 0; i < candies.size(); i++) {
            if (max < candies.at(i)) {
                max = candies.at(i);
            }
        }

        // Now make the boolean vector
        vector<bool> result;

        // Iterating over candies and seeing 
        for (i = 0; i < candies.size(); i++) {
            if (candies.at(i) + extraCandies >= max) {
                result.push_back(true);
            }
            else {
                result.push_back(false);
            }
        }
        return result;
    }
};

int main() {
    Solution solution;

    // Example input: candies and extraCandies
    vector<int> candies = { 2, 3, 5, 1, 3 };
    int extraCandies = 3;

    // Calling the method
    vector<bool> result = solution.kidsWithCandies(candies, extraCandies);

    // Displaying the result
    cout << "Original Candies: ";
    for (int candy : candies) {
        cout << candy << " ";
    }
    cout << "\nExtra Candies: " << extraCandies << "\n";

    cout << "Result: ";
    for (bool canHaveMostCandies : result) {
        cout << (canHaveMostCandies ? "true" : "false") << " ";
    }

    return 0;
}
