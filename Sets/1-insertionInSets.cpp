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
    s.insert(1);
    s.insert(2);
    s.insert(5);
    s.insert(4);
    s.insert(3);
    cout<<s.size();//same as previous since it nly stores unique elements
}