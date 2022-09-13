#include<iostream>
using namespace std;

void findtheSubArray(int arr[],int size,int sum){
    int currentSum;
    for(int i=0;i<size;i++){
        currentSum=arr[i];
        for(int j=i+1;j<=size;j++){
             if(currentSum==sum){
                cout<<"Sum found between indexes "<<i+1<<" and "<<j<<endl;
                return;
             }
             if(currentSum>sum||j==size){
                break;
             }
             currentSum+=arr[j];
        }       
    }
    cout<<"No sub array was found in the process!"<<endl;
}   

int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements in the array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter the sum amount: ";
    int sum;
    cin>>sum;
    findtheSubArray(arr,n,sum);
}