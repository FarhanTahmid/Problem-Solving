#include<iostream>
using namespace std;

void getMinMax(int arr[],int n,int *maximum, int *minimum){
    *maximum=arr[0];
    *minimum=arr[0];
    for(int i=1;i<n;i++){
        if(*maximum<arr[i]){
            *maximum=arr[i];
        }
    }
    for(int i=1;i<n;i++){
        if(*minimum>arr[i]){
            *minimum=arr[i];
        }
    }
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    
    //input of array
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int max, min;
    getMinMax(arr,n,&max,&min);
    cout<<"The maximum number is: "<<max<<endl;
    cout<<"The minimum number is: "<<min<<endl;
}
    