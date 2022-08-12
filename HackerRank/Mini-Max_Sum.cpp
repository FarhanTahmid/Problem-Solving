#include<iostream>
using namespace std;

void minmaxSum(int arr[]){
    long long min , max , sum ;
    for(int i = 0 ;i < 5; ++i)
    {
        sum = 0;
        for(int j = 0; j < 5; ++j)
        {
            if(i != j)
                sum += arr[j];
        }
        if(sum > max)
            max = sum;
        if (sum < min)
            min = sum;
    }
    cout<<min<<" "<<max<<endl;
}

int main(){
    int arr[5];

    for(int i=0;i<5;i++){
        cin>>arr[i];
    }
    minmaxSum(arr);
}