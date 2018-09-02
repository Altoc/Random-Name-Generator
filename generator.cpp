/*		Random Name Generator
*		Ian Whitesel
*		09/02/2018
*/


#include "generator.hpp"
#include <iostream>
#include <cstdlib>
#include <ctime>

std::string name::generateSingleSyllable(){
        std::string result;
        char constonant = NULL;
        char vowel = NULL;
        int vowelPicker = 0;

        constonant = ((rand() % 24) + 49) + '0';        //derive first letter of one syllable word
        result = constonant;                            //set letter to be first letter in word

        vowelPicker = (rand() % 5);
        switch(vowelPicker){
                case 0:
                        vowel = 'a'; break;
                case 1:
                        vowel = 'e'; break;
                case 2:
                        vowel = 'i'; break;
                case 3:
                        vowel = 'o'; break;
                case 4:
                        vowel = 'u'; break;
        }

        constonant = ((rand() % 24) + 49) + '0';        //derive second letter of one syllable word
        return (result = result + vowel + constonant);  //set vowel and second letter to be in word
}

std::string name::generateName(){
        name firstName_01, firstName_02, lastName_01, lastName_02;
        std::string generatedName;

        generatedName = generatedName + firstName_01.generateSingleSyllable();
        generatedName = generatedName + firstName_02.generateSingleSyllable() + " ";
        generatedName = generatedName + lastName_01.generateSingleSyllable();
        generatedName = generatedName + lastName_02.generateSingleSyllable();

        return generatedName;
}

