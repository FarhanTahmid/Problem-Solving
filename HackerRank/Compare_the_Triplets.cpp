#include<iostream>
using namespace std;

void compareTriplets(int a[],int b[]){
    int score[2]={0,0};
    for (int i=0;i<3;i++){
        if(a[i]==b[i]){
            score[0]+=0;
            score[1]+=0;
        }
        else if(a[i]>b[i]){
            score[0]+=1;
        }
        else if(a[i]<b[i]){
            score[1]+=1;
        }
    }
    cout<<score[0]<<" "<<score[1];
}

int main(){

    int a[3];
    int b[3];

    for(int i=0;i<3;i++){
        cin>>a[i];
    }
    
    for(int j=0;j<3;j++){
        cin>>b[j];
    }
    compareTriplets(a,b);
}