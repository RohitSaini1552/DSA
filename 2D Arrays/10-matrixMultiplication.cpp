// write a program to multiply 2 matrices and print the resultant matrix

#include<iostream>
using namespace std;
int main(){
    int m,n,q,p;
    cout<<"Enter the rows and columns of matrix 1 :";
    cin>>m>>n;
    cout<<"Enter the rows and columns of matrix 2 :";
    cin>>p>>q;
    if(n != p){
        cout<<"Matrices can not be multiplied !!";
        return -1;
    }
    int a[m][n];
    int b[p][q];
    cout<<"Enter elements of 1st matrix :"<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    cout<<"Enter elements of 2nd matrix :"<<endl;
    for(int i=0;i<p;i++){
        for(int j=0;j<q;j++){
            cin>>b[i][j];
        }
    }
    int c[m][q];
    for(int i=0;i<m;i++){
        for(int j=0;j<q;j++){
            c[i][j] = 0;
            for(int k=0;k<n;k++){
                c[i][j] += (a[i][k] * b[k][j]);
            }
        }
    }
    cout<<"The resultant matrix is : "<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<q;j++){
            cout<<c[i][j]<<" ";
        }
        cout<<endl;
    }

}