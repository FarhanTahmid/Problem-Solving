#include<iostream>
using namespace std;


void breaking_records(long scores[],long number){
    long minScore=scores[0];
    long maxScore=scores[0];
    int minScoreCount=0;
    int maxScoreCount=0;
    for(long i=0;i<number;i++){
        if(scores[i]<minScore){
            minScore=scores[i];
            minScoreCount++;
        }
        else if(scores[i]>maxScore){
            maxScore=scores[i];
            maxScoreCount++;
        }
    }
    cout<<maxScoreCount<<" "<<minScoreCount;
}
int main(){

    long numberOfGames;
    cin>>numberOfGames;
    long score[numberOfGames];
    for(long i=0;i<numberOfGames;i++){
        cin>>score[i];
    }
    
    breaking_records(score,numberOfGames);

}