//program to remove elements of even index in a queue(assume 0 based index)


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
void removeEvenIdx(queue<int>&q){
    int n = q.size();
    int x;
    for(int i=0;i<n;i++){
        if(i%2 == 0) q.pop();
        else{
            x = q.front();
            q.pop();
            q.push(x);
        }
    }
}
int main() {
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    display(q);
    // int n = q.size();
    // int x;
    // for(int i=0;i<n;i++){
    //     if(i%2 == 0) q.pop();
    //     else{
    //         x = q.front();
    //         q.pop();
    //         q.push(x);
    //     }
    // }
    removeEvenIdx(q);
    display(q);

   
}