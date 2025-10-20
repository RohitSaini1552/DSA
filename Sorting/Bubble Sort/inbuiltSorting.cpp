#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;
int main(){
    vector<int>v(6);
    for(int i=0;i<v.size();i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end()); //for sorting the vector
    reverse(v.begin(),v.end()); //for reversing the order of sorting.....decreasing order
    for(int i=0;i<v.size();i++){
       cout<<v[i]<<" ";
    }


}