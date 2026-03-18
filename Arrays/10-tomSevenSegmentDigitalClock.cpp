#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main(){
    string time = "1245";
    int ans[10] = {6,2,5,5,4,5,6,3,7,5};
    int total = 0;
    for(int i=0;i<time.size();i++){
        total += ans[(int)(time[i]) - 48];
        
    }
    cout<<"total number of segments used are : "<<total;
}