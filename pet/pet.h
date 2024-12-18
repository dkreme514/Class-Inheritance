#include <iostream>
#include <string>	

using namespace std;

#ifndef PET_H
#define PET_H
class Pet
{
public:
    Pet();
    Pet(const string n, const int a);
    void setname(const string n);
    void setage (const int a);
    string getname();
    int    getage();
    Pet & operator = (const Pet & rightside);
    virtual void PrintPetData()=0; // Pure virtual function
protected:
    string name; // can be accessed by children of class
private:
    int age; // can only be accessede by the class

};

#endif
