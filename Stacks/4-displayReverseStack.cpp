#include<iostream>
#include<stack>
using namespace std;
void display(stack<int> st){
    stack<int> temp;
    while(st.size()>0){
        cout<<st.top()<<" ";
        // int x = st.top();
        st.pop();
        temp.push(st.top());// or temp.push(x);
    }
}
int main(){
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    cout<<"stack elements in reverse order :";
    display(st);
    cout<<endl;
    cout<<"size of the stack is :"<<st.size();
    

}