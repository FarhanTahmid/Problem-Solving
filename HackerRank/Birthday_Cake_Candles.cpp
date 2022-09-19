#include<bits/stdc++.h>
using namespace std;

int frequencyOfMaxElement(int arr[],int n){
    int maxElement=arr[0];
    for(int i=0;i<n;i++){
        if(maxElement<arr[i]){
            maxElement=arr[i]; 
        }
    }
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i]==maxElement){
            count++;
        }
    }
    return count;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<frequencyOfMaxElement(arr,n);
}