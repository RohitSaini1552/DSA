#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    cout<<st.size()<<endl;
    st.empty() ? cout<<"stack empty" : cout<<"stack not empty";
    cout<<endl;
    st.pop();
    st.pop();
    st.pop();
    st.pop();
    cout<<st.size()<<endl;
    st.empty() ? cout<<"stack empty" : cout<<"stack not empty";


}