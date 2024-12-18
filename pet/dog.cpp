#include <iostream>
#include <string>
#include "dog.h"
using namespace std;


 Dog:: Dog()
   {
     name="Fluffy";
     setage(1);
     breed="Mutt";
     housebroken=false;
   }
 Dog:: Dog(const string n, const int a, const string b, const bool h)
{
   name=n;
   setage(a);
   breed=b;
   housebroken=h;
}

 void Dog::setbreed(const string b) {breed =b;}
 void Dog::sethousebroken(const bool h) {housebroken=h;}
 string Dog::getbreed() {return breed;}
 string Dog::gethousebroken()
 {
   if(housebroken) return "House Broken";
   else return "Dont trust it in the house";
 }
 
 Dog & Dog::operator=(Dog & rightside)
 {
   Pet::operator = (rightside);
   breed=rightside.breed;
   housebroken = rightside.housebroken;

 }
 
 void Dog::PrintPetData()
 {
   cout << name << getage() << breed << gethousebroken() << endl;
 }
