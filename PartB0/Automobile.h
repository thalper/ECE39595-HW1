#ifndef AUTOMOBILE_H_
#define AUTOMOBILE_H_

#include <string>

class Automobile {
private:
   int identification;
   float miles;
   int maintinenceMM;
   int maintinenceDD;
   int maintinenceYY;
   std::string maintinence;

public:
   Automobile(int _identification, float _miles, int _maintinenceMM, int _maintinenceDD, int _maintinenceYY);
   std::string toString( );
};
#endif /* AUTOMOBILE_H_ */