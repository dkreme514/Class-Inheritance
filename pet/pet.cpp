#include <iostream>
#include <string>	
#include "pet.h"
using namespace std;

 Pet::Pet()
    {
      name="Fido";
      age=1;
    } 
  
 Pet::Pet(const string n, const int a)
   {
     name=n;
     setage(a);
   }
  
 void Pet::setname(const string n)
   {
     name = n;
   }


  void Pet::setage (const int a)
   {
     if(a>=0) age=a;
     else age=1;
   }
    
 string Pet::getname() {return name;}
 int    Pet::getage()  {return age;}

 Pet & Pet::operator=(const Pet & rightside)
   {
     name = rightside.name;
     age = rightside.age;
   }
 void Pet::PrintPetData()
   {
     cout << "No Specific Pet Data" << endl;
   }
