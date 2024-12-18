#include <iostream>
#include <string>
#include "cat.h"
using namespace std;


Cat::Cat()
{
   name ="Fluffy";
   setage(1);
   breed="Alley";
   indooroutdoor="outdoor";
}

Cat::Cat(const string n, const int a, const string b, const string i)
{
   name=n;
   setage(a);
   breed=b;
   indooroutdoor=i;
}
 void Cat::setbreed(const string b) {breed = b;}
 void Cat::setindooroutdoor(const string i) {indooroutdoor=i;}
 string Cat::getbreed() {return breed;}
 string Cat::getindooroutdoor() {return indooroutdoor;}

 void Cat::PrintPetData()
 {
  cout << name << getage() << breed << endl;
 }   
