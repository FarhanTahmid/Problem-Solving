#include<iostream>
using namespace std;

void unionOfTwoArray(int arr1[],int arr2[],int size1,int size2){
    int newArr[size1+size2];
    for(int i=0;i<size1+size2;i++){
        for(int j=0;j<size1;j++){
            for(int k=0;k<size2;k++){
                if(arr1[j]==arr2[k]){
                    
                }
            }
        }
    }
}
void intersectionOfTwoArray(int arr1[],int arr2[],int size1,int size2){
    return;
}


int main(){
    cout<<"Enter the size of the first array: ";
    int size1;
    cin>>size1;
    int arr1[size1];
    cout<<"Enter the elements of the array: ";
    for(int i=0;i<size1;i++){
        cin>>arr1[i];
    }

    cout<<"Enter the size of the second array: ";
    int size2;
    cin>>size2;
    int arr2[size2];
    cout<<"Enter the elements of the array: ";
    for(int i=0;i<size2;i++){
        cin>>arr2[i];
    }
    unionOfTwoArray(arr1,arr2,size1,size2);
    intersectionOfTwoArray(arr1,arr2,size1,size2);
    
}   