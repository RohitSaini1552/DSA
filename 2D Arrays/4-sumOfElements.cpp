// Sum of all elements in a grid

#include<iostream>
using namespace std;
int main(){
    cout<<"Enter rows and columns in matrix :";
    int r, c;
    cin>>r>>c;
    int a[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>a[i][j];
        }
        cout<<endl;
    }
    cout<<"The entered Matrix is :"<<endl;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    int sum = 0;
    cout<<"The sum of all elements Matrix is : ";
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            sum += a[i][j];
        }
    }
    cout<<sum;

}