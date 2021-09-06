#include <string>
#include "Automobile.h"

Automobile::Automobile(int _identification, float _miles, int _maintinenceMM, int _maintinenceDD, int _maintinenceYY) {
   identification = _identification;
   miles = _miles;
   maintinence = ""+std::to_string(_maintinenceMM)+"/"+std::to_string(_maintinenceDD)+"/"+std::to_string(_maintinenceYY);
}


std::string Automobile::toString( ) {
   std::string automobile = std::to_string(identification)+"\n";
   automobile += std::to_string(miles)+"\n";
   automobile += maintinence;
   return automobile;
}
