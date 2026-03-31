class Solution {
public:
    int maximum69Number (int num) {
        //M1: using properties of string
        
        /* string str = to_string(num);
        for(int i=0;i<str.size();i++){
            if(str[i] == '6'){
                str[i] = '9';
                break;
            } 
        }
        int ans = stoi(str);
        return ans; */


        //M2: using arrays
        vector<int> arr;
        while(num > 0){
            int c = num % 10;
            arr.push_back(c);
            num /= 10;
        }
        reverse(arr.begin(), arr.end());
        for(int i=0;i<arr.size();i++){
            if(arr[i] != 9){
                arr[i] = 9;
                break;
            }
        }
        int ans = 0;
        int i = arr.size() - 1;
        int fact = 1;
        while(i >= 0){
            ans += fact * arr[i];
            i--;
            fact *= 10;
        }
        return ans;

    }
};