#include <iostream>
#include "Automobile.h"


int main(int argc, char* argv[ ]) {
   Automobile* automobile1 = new Automobile(29758, 345.234, 9, 6, 21);
   std::cout << automobile1->toString( ) << std::endl;    

   Automobile* automobile2 = new Automobile(1, 100000.5, 6, 25, 00);
   std::cout << automobile2->toString( ) << std::endl;    
}
