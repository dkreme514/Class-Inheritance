#ifndef DOG_H
#define DOG_H
#include <iostream>
#include <string>
#include "pet.h"
using namespace std;

class Dog: public Pet
{
   public:
     Dog();
     Dog(const string n, const int a, const string b, const bool h);
     void setbreed(const string b);
     void sethousebroken(const bool h);
     string getbreed();
     string gethousebroken();
     Dog & operator=( Dog & rightside);
     virtual void PrintPetData();
   private:
     string breed;
     bool housebroken;
};
#endif
