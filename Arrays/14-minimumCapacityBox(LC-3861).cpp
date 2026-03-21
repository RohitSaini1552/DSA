class Solution {
public:
    int minimumIndex(vector<int>& capacity, int itemSize) {
        int n = capacity.size();
        int minIdx = -1;
        int minCapacity = 101;
        for(int i=0;i<n;i++){
            if(capacity[i] >= itemSize){
                if(capacity[i] < minCapacity){
                    minCapacity = capacity[i];
                    minIdx = i;
            } 
                
            }
        }
        return minIdx;
    }
};