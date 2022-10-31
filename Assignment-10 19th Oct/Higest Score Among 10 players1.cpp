//Wap to find the higest score amoung 10 players


#include <iostream>
using namespace std;


int main()
{
    struct cricket_player {
        char player_name[20];
        int higest_score;

    };
    struct cricket_player p[5];
    int max;

     for (int i = 1; i < 5; i++) {

         cout << "Enter Player Name ";
         cin >> p[i].player_name;
         cout << "Enter Higest Score of Player ";
         cin >> p[1].higest_score;
     }
     max = p[0].higest_score;
     for (int i = 1; i < 5; i++) {
          

         if (p[i].higest_score > max) {
             max = p[i].higest_score;
         }
     }
     
     cout << "Higest Socre amoung all   " << max;
}


