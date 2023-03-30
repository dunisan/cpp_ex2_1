#pragma once

#include <iostream>
#include <fstream>
#include <sstream>
#include <stdexcept>
#include <iostream>

#include "player.hpp"
#include "card.hpp"


using namespace std;


namespace ariel{

    class Game{

        private: 
            Player player1;
            Player player2; 
           
            Player winner; 
            
            int num_of_draws;
            int player1_win_count; 
            int player2_win_count;
            int current_turn; 

            Card cardsPlayer1;
            Card cardsPlayer2; 

            Card turns_player1[26];
            Card turns_player2[26];


        public:

            Game(Player player1 , Player player2);
    

            void playTurn(); 
            void printLastTurn();
            void playAll();
            void printWiner(); 
            void printLog(); 
            void printStats(); 

            void setWinner(Player player); 
            Player getWinner(); 


        
    };

}