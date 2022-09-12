#include<bits/stdc++.h>
using namespace std;

void elementFrequency(int arr[],int n){
    vector<bool> visited(n,false);
    for(int i=0;i<n;i++){
        if(visited[i]==true){
            continue;
        }
        int count=1;
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                visited[j]=true;
                count++;
            }
        }
        cout<<"The element "<<arr[i]<<" occured "<<count<<" times in the array!"<<endl;
    }
}

int main(){
    int n;
    cout<<"Enter the number of elements you want to enter in the array: ";
    cin>>n;
    int arr[n];
    cout<<endl;
    cout<<"Enter the elements: "<<endl;
    for(int i=0;i<n;i++){
        cout<<"["<<i+1<<"]: ";
        cin>>arr[i];
        cout<<endl;  
    }
    elementFrequency(arr,n);
}