/*Declare a structure called cricket that contains the following details, Player
name, team name, batting average. Create a player array with 30 players of the
type cricket. Write a C program to read details of players and print a team-wise
sorted list containing player’s names and batting average.*/
#include <stdio.h>
int main(){
    struct cricket{
        char name[20];
        int teamno;
        int battingavg;
    };
    struct cricket player[10];
    printf("enter the info of the batsemen:");
    for(int i=0;i<10;i++){
        scanf("%s %d %d",player[i].name,&player[i].teamno,&player[i].battingavg);
    }
    for(int i=0;i<10;i++){
        if(player[i].teamno==1){
            printf("name:%s , battingavg:%d \n",player[i].name,player[i].battingavg);
        }
        if(player[i].teamno==2){
            printf("name:%s , battingavg:%d \n",player[i].name,player[i].battingavg);
        }
    }
}