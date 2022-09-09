#include<iostream>
using namespace std;

int peakElement(int arr[],int n){
    int index=0;

    //checking if only 1 element exists
    if(n==1){
        return 0;
    }
    //checkin if the first element is max
    if(arr[0]>=arr[1]){
        return 0;
    }
    //checking if the last element is max
    if(arr[n-1]>=arr[n-2]){
        return n-1;
    }
    //checking if neighbouring elements are lower
    for(int i=1;i<n-1;i++){
        if(arr[i]>=arr[i-1] && arr[i]>=arr[i+1]){
            return i;
        }
        
    }
    return 0;
}


int main(){
    int n;
    cin>>n;
    int arr[n];

    //array input
    
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int getIndex=peakElement(arr,n);
    cout<<getIndex;
}