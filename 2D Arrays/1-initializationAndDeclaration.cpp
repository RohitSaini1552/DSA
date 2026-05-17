//Write a code to declare and initialise a 2D array

#include<iostream>
using namespace std;
int main(){
    int arr[2][3] = {{1,2,3},{4,5,6}};
    int brr[2][3] = {1,2,3,4,5,6};
    int crr[][3] = {1,2,3,4,5,6};
    cout<<arr[1][1]<<endl;
    cout<<brr[1][1]<<endl;
    cout<<crr[1][1];

}