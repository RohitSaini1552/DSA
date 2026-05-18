//Write a code to find the largest element in a 2D array

#include<iostream>
using namespace std;
int main(){
    int arr[3][3] = {1,2,3,4,5,6,7,8,9};
    int max = arr[0][0]; // or max = INT_MIN
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(arr[i][j] > max) max = arr[i][j];
        }
    }
    cout<<"Maximum element in the matrix is :"<< max;
}