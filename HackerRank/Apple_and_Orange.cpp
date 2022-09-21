 #include<bits/stdc++.h>
 using namespace std;
 void countNumberOfApplesandOranges(int distanceApple[],int distanceOrange[],int startPoint,int endPoint,int apple,int orange,int locationApple,int locationOrange){
    int countApple=0;
    int countOrange=0;
    for(int i=0;i<apple;i++){
        if((locationApple+distanceApple[i]>=7) && (locationApple+distanceApple[i]<=10)){
            countApple++;
        }
    }
    for(int i=0;i<orange;i++){
        if((locationOrange+distanceOrange[i]>=7) && (locationOrange+distanceOrange[i]<=10)){
            countOrange++;
        }
    }
    cout<<countApple<<endl;
    cout<<countOrange<<endl;
 }
 int main(){
    int startpointOfSamsHouse,endPointOfSamsHouse;
    cin>>startpointOfSamsHouse>>endPointOfSamsHouse;
    int locationOfAppleTree,locationOfOrangeTree;
    cin>>locationOfAppleTree>>locationOfOrangeTree;
    int numberOfApples,numberOfOranges;
    cin>>numberOfApples>>numberOfOranges;
    int distanceOfApples[numberOfApples];
    for(int i=0;i<numberOfApples;i++){
        cin>>distanceOfApples[i];
    }
    int distanceOfOranges[numberOfOranges];
    for(int i=0;i<numberOfOranges;i++){
        cin>>distanceOfOranges[i];
    }
    countNumberOfApplesandOranges(distanceOfApples,distanceOfOranges,startpointOfSamsHouse,endPointOfSamsHouse,numberOfApples,numberOfOranges,locationOfAppleTree,locationOfOrangeTree);
}