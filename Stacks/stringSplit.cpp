#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main(){
string s = "100+5*20";  // Test input
    vector<string> str;
    string S = "";
    
    for(int i = 0; i < s.size(); i++){
        if(s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/'){
            if(!S.empty()){  // Push accumulated operand first
                str.push_back(S);
                S.clear();
            }
            str.push_back(string(1, s[i]));  // Fix: Convert char to string
        } else {
            S += s[i];
        }
    }
    if(!S.empty()) str.push_back(S);  // Add final operand
    
    // Fix output
    for(const auto& t : str){
        cout << t << " ";
    }
    cout << endl;
    
    return 0;
}

