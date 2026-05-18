// Write a code to transform matrix into its transpose without using an extra matrix
 // this method is only possible for only square matirces

#include<iostream>
using namespace std;
int main(){
    int arr[3][3] = {1,2,3,4,5,6,7,8,9};
    // this is wrong since it would swap twice and again give the same matrix
    /* for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(i == j) continue;
            else swap(arr[i][j], arr[j][i]);
        }
    } */

    //M1 : only swap upper halfs and it handle the lower half automatically
    /* for(int i=0;i<3;i++){
        for(int j=i+1;j<3;j++){
             swap(arr[i][j], arr[j][i]);
        }
    } */
    //M2 : only swap lower half and it will automatically handle upper half
    for(int i=0;i<3;i++){
        for(int j=0;j<i;j++){
             swap(arr[i][j], arr[j][i]);
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }  
}

