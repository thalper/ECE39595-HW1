#include <string>
#include "Automobile.h"

Automobile::Automobile(int _identification, float _miles, int _maintinenceMM, int _maintinenceDD, int _maintinenceYY) {
   identification = _identification;
   miles = _miles;
   maintinenceMM = _maintinenceMM;
   maintinenceDD = _maintinenceDD;
   maintinenceYY = _maintinenceYY;
}


std::string Automobile::toString( ) {
   std::string automobile = std::to_string(identification)+"\n";
   automobile += std::to_string(miles)+"\n";
   automobile += ""+std::to_string(maintinenceMM)+"/"+std::to_string(maintinenceDD)+"/"+std::to_string(maintinenceYY);
   return automobile;
}
