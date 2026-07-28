class Solution {
public:
    int maxConsecutiveAnswers(string s, int k) {
        int n = s.size();
        int t = 0;
        int f = 0;
        int ans1 = -1;
        int i = 0;
        int j = 0;
        while(j < n){
            (s[j] == 'T') ? t++ : f++;
            if(f <= k) ans1 = max(ans1,j-i+1);
            else{
                while(f > k){
                    (s[i] == 'T') ? t-- : f--;
                    i++;
                }
            }
            j++;
        }
        cout<<ans1<<"\n";

        t = 0;
        f = 0;
        int ans2 = -1;
        i = 0;
        j = 0;
        while(j < n){
            (s[j] == 'F') ? f++ : t++;
            if(t <= k) ans2 = max(ans2,j-i+1);
            else{
                while(t > k){
                    (s[i] == 'T') ? t-- : f--;
                    i++;
                }
            }
            j++;
        }
        cout<<ans2;
        return max(ans1,ans2);
    }
};