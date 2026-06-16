/* Given an integer rowIndex, return the rowIndexth (0-indexed) row of the Pascal's triangle.

In Pascal's triangle, each number is the sum of the two numbers directly above it as shown:


 */

class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> ans;
        long long prod = 1;
        ans.push_back(1); 
        for(int i=1;i<=rowIndex;i++){              
            prod = prod * (rowIndex - i + 1)/(i);
            ans.push_back(prod);
        
        }
        return ans;
    }
};