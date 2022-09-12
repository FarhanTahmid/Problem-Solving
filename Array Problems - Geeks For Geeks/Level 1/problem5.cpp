#include<iostream>

using namespace std;
int kthSmallestElement(int arr[],int size,int k){
    for(int step=0;step<size-1;step++){
        int swapped=0;
        for(int i=0;i<(size-step-1);i++){
            if(arr[i]>arr[i+1]){
                int temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
                swapped=1;
            }
        }
        if(swapped==0){
            break;
        }
    }
    return arr[k-1];
}
int main(){

    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int arr[n];
    cout<<endl;
    cout<<"Enter the elements of the array:"<<endl;
    for(int i=0;i<n;i++){
        cout<<"["<<i<<"]:" ;
        cin>>arr[i];
        cout<<endl;        
    }
    int k;
    cout<<"Enter the k'th smallest element you want to check: ";
    cin>>k;
    cout<<endl;
    int kth_Smallest_Element=kthSmallestElement(arr,n,k);
    cout<<"The k'th smallest element is : "<<kth_Smallest_Element<<endl;

}