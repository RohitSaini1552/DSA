//write a program to demonstrate searching in hash sets


#include<iostream>
#include<unordered_set>
using namespace std;
int main(){
    unordered_set<int> s;
    s.insert(1);
    s.insert(2);
    s.insert(5);
    s.insert(4);
    s.insert(3);
    cout<<s.size()<<endl;
    int target = 40;
    if(s.find(target) != s.end()) cout<< target <<" found in set";
    if(s.find(target) == s.end()) cout<< target <<" not found in set";

}