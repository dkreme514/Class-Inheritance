#ifndef CAT_H
#define CAT_H
#include <iostream>
#include <string>
#include "pet.h"
using namespace std;

class Cat: public Pet
{
   public:
     Cat();
     Cat(const string n, const int a, const string b="Alley", const string i="outdoor");
     void setbreed(const string b);
     void setindooroutdoor(const string i);
     string getbreed();
     string getindooroutdoor();
     virtual void PrintPetData();
   private:
     string breed;
     string indooroutdoor;
};
#endif
