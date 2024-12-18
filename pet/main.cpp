#include <iostream>
#include <string>
#include "pet.h"
#include "dog.h"
#include "cat.h"
#include <string>
using namespace std;

int main(void)
{
//    Pet MyPet("Oreo", 9);
  //  Dog MyDog("Max", 5, "Golden Doodle", true);
   // Cat MyCat("Dozer", 14);
   
   // cout << MyPet.getname() << endl;
  //  cout << MyPet.getage() << endl;
   
    Dog NewDog;
    Cat MyCat("Oreo", 2, "Tabby");
    Dog MyDog("Olive", 11, "Shih Zhu", true); 
    cout << MyDog.getname() <<endl;
    cout << MyDog.getage() << endl;
    cout << MyDog.getbreed() << endl;
    cout << MyDog.gethousebroken()<<endl;
    cout << MyCat.getname() << endl;
    cout << MyCat.getage() << endl;
    cout << MyCat.getbreed() <<endl;
    cout << MyCat.getindooroutdoor() << endl;
    NewDog = MyDog;
    cout <<NewDog.getname() << endl;
    MyDog.PrintPetData();
    MyCat.PrintPetData();
return 0;
}
