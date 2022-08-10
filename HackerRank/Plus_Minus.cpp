#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int positiveCount=0;
    int negativeCount=0;
    int zeroCount=0;

    for (int i=0;i<n;i++){
        if(arr[i]>0){
            positiveCount+=1;
        }
        else if(arr[i]<0){
            negativeCount+=1;
        }
        else if(arr[i]==0){
            zeroCount+=1;
        }
    }
    float posratio=float(positiveCount)/float(n);
    float negratio=float(negativeCount)/float(n);
    float zeroratio=float(zeroCount)/float(n);

    cout<<fixed<<setprecision(6)<<posratio;
    cout<<fixed<<setprecision(6)<<negratio;
    cout<<fixed<<setprecision(6)<<zeroratio;
    
}