/*		Random Name Generator
*		Ian Whitesel
*/		09/02/2018

#include <iostream>
#include <string>
#include <cassert>
#include "generator.hpp"
#include <cstdlib>

int main(){

        srand(time(NULL));

/*      {
                std::cout<<"Test default ctor BEGIN"<<std::endl;

                //setup
                        name name1;
                //test
                //check
                        std::cout<<"name: "<<name1.getWord()<<std::endl;

                std::cout<<"Test default ctor FINISH"<<std::endl;
        }
        {
                std::cout<<"Test generateSingleSyllable BEGIN"<<std::endl;

                //setup
                        name name1;
                        name1.generateSingleSyllable();
                //test
                //check
                        std::cerr<<"name: "<<name1.getWord()<<std::endl;

                std::cout<<"Test generateSingleSyllable FINISH"<<std::endl;
        }
*/      {
                std::cout<<"Test randomness of singlesyllable BEGIN"<<std::endl;

                //setup
                        name name1;
                //test
                //check
                        std::cout<<"random generations: "<<name1.generateSingleSyllable()<<std::endl;

                std::cout<<"Test randomness of singlesyllable FINISH"<<std::endl;
        }
        {
                std::cout<<"Test entire name BEGIN"<<std::endl;

                //setup
                        name name1;
                //test
                //check
                        std::cout<<"Name Generation: "<<name1.generateName()<<std::endl;

                std::cout<<"Test entire name FINISH"<<std::endl;
        }
}