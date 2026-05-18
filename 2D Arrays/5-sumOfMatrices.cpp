// Sum of 2 Matrices

#include<iostream>
using namespace std;
int main(){
    int arr[3][3] = {1,2,3,4,5,6,7,8,9};
    int brr[3][3] = {9,8,7,6,5,4,3,2,1};
    int crr[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            crr[i][j] = arr[i][j] + brr[i][j];
        }
    }
    // Without using 3rd matrices
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<arr[i][j] + brr[i][j]<<" ";
        }
        cout<<endl;
    }

    // Using a 3rd matrix
    /* cout<<"Resultant matrix is :"<< endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<crr[i][j]<<" ";
        }
        cout<<endl;
    } */

}