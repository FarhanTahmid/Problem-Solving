#include<iostream>
using namespace std;
string kangaroo(int x1,int x2,int v1,int v2){

    if(v1<v2){
        return "NO";
    }
    while(x1<x2){
        x1+=v1;
        x2+=v2;
        if (x1==x2){
            return "YES";
        }  
    }
    return "NO";
}
int main(){
    int x1,v1,x2,v2;
    cin>>x1>>v1>>x2>>v2;
    cout<<kangaroo(x1,x2,v1,v2);
} 