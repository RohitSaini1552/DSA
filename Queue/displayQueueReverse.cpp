
// to print the elements of queue in reverse order using recursion and restoring the queue in reverse order
#include <iostream>
#include <queue>
using namespace std;
void display(queue<int> q){
    int x;
    int n = q.size();
    for(int i=0;i<n;i++){
        x = q.front();
        cout<<x<<" ";
        q.pop();
        q.push(x);
    }
    cout<<endl;
}
void reverseQueue(queue<int>& q) {
    if (q.empty()) return;
    int x = q.front();
    q.pop();
    reverseQueue(q);
    cout<<x<<" ";
    q.push(x);
}

int main() {
    queue<int>q;
    q.push(10);
    q.push(20); 
    q.push(30); 
    q.push(40); 
    q.push(50);
    int size = q.size();
    display(q);
    reverseQueue(q);
    cout<<endl;
    // display(q); 
    // reverseQueue(q);
    // display(q);

    return 0;
}