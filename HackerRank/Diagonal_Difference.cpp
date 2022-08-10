#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n][n];
    
    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    int sumOfFirstDiagonal=0;
    int sumofSecondDiagonal=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j){
                sumOfFirstDiagonal+=arr[i][j];
            }
            //algorithm for second diagonal
            if(((i+j)==(n-1))){
                sumofSecondDiagonal+=arr[i][j];
            }
        }
    }
    
    cout<<abs(sumOfFirstDiagonal-sumofSecondDiagonal);
    
}