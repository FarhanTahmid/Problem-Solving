#include <iostream>
using namespace std;
int main(){

    int rows;
    cin>>rows;

    for(int i=1; i<=rows; i++)
    {
        
        for(int j=i; j<rows; j++)
        {
            printf(" ");
        }

        
        for(int j=1; j<=i; j++)
        {
            printf("#");
        }

        
        printf("\n");
    }

}