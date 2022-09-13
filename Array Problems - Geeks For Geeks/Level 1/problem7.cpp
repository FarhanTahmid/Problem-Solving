#include<iostream>
using namespace std;

void sort012(int arr[],int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<(n-i);j++){
            if(arr[j]==0||arr[j]==1||arr[j]==2){
                if(arr[j]>arr[j+1]){
                    int temp=arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=temp;
                }
            }
        }
        
    }
    cout<<"After sorting the array will be: "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

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

    sort012(arr,n);

}