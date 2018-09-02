/*		Random Name Generator
*		Ian Whitesel
*		09/02/2018
*/

#include <iostream>
#include "generator.hpp"
#include <cstdlib>

int main(){
        srand(time(NULL));
        name name1;
        char menuChoice = NULL;

        do{
                std::cout<<"Generated Name --->  "<<name1.generateName()<<"  <---"<<std::endl;
                std::cout<<"Would you like to generate another name? [y/n]"<<std::endl;
                std::cin>>menuChoice;
        }while(menuChoice == 'y' || menuChoice == 'Y');

        std::cout<<"Thanks for generating with me!"<<std::endl;
}



