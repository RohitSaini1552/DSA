#include<iostream>
#include<stack>
using namespace std;
void displayRevRec(stack<int>&st){
    if(st.size() == 0) return;
    int x = st.top();
    st.pop();
    displayRevRec(st);
    cout<<x<<" ";
    st.push(x);
}
int main(){
    stack<int>st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    displayRevRec(st);

}