#pragma once

#include <iostream>
#include <fstream>
#include <sstream>
#include <stdexcept>
#include <iostream>
#include <string>


using namespace std;

namespace ariel{

    class Player{
    
        private:
    
            string name;  
    
            int stack_size;     
            int cardes_taken; 
    
            bool is_playing; 
           

        public: 

            // constructors 
            Player();  
            Player(string name);
        
            // getters and setters 
            int stacksize();
            void setStackSize(int size); 

            int cardesTaken(); 
            void setCardesTaken(int cardesTaken);

            string getName();

            bool isPlaying(); 
            void isPlaying(bool is_playing); 
   
    };

}