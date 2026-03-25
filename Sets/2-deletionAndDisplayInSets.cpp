//write a program to implement hash sets and perform deletion of elements and display of hashstes


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
    for(int ele : s){
        cout<<ele<<" ";
    }
    cout<<endl;
    s.erase(5);
    cout<<s.size()<<endl;
    for(int ele : s){
        cout<<ele<<" ";
    }
}