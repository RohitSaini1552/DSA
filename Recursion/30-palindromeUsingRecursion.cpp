// write code to check whether the given string is a palindrome or not using recursion


#include<bits/stdc++.h>
using namespace std;

// M1 : Using extra parameter
bool ispalindrome(string &str,int i){
    if(i > (str.size()-1)/2) return true;
    if(str[i] != str[str.size()-1-i]) return false;
    return ispalindrome(str,i+1);
}

// M2 : Using extra parameter and string iterators
bool checkPalindrome(string str,int i){
    if(i > ((str.size()-1)/2)) return true;
    if(*(str.begin()+i) != *(str.end()-1-i)) return false;
    return checkPalindrome(str,i+1);

}

// M3 : Using 2 pointers logic
bool isPalindrome(string &str,int i,int j){
    if(i > j) return true;
    if(str[i] != str[j]) return false;
    return isPalindrome(str,i+1,j-1);
}

int main(){
    string str = "racecar";
    cout<<ispalindrome(str,0)<<endl;
    cout<<checkPalindrome(str,0)<<endl;
    cout<<isPalindrome(str,0,str.size()-1);
}