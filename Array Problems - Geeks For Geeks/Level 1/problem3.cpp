#include<iostream>


//unsolved

using namespace std;
int main(){
    int t;
    cin>>t;
    while(t>0){
        int n,temp;
        cin>>n;
        int arr[n];
        int arr2[n]={0};
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        for(int i=0,j=n-1;i<n/2;i++,j--){
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
        t--;
    }
}