// *****************************************************************
// * triangle.cpp                                                  *
// *                                                               *
// * Date:  03/02/2023                                             *
// * Author:   Donald Kremer                                       *
// * References:  Dr. David Gaitros                                *
// *****************************************************************
#include <iostream>
#include "triangle.h"
#include "math.h"
#include <cmath>
using namespace std;
// *****************************************************************
// * Function Name:  Triangle default constructor                  *
// * Description: Sets side1, side2 and side3 to 1 and creates     *
//              a triangle. Then uses parent class getArea         *
// * Parameter Description:N/A                                     *
// * Date:  03/02/2023  (Date of function modification)            *
// * Author:   Donald Kremer    (Name of Function Author.          *
// * References:  Dr. David Gaitros                                *
// *****************************************************************
Triangle::Triangle()
{
    side1=1;
    side2=1;
    side3=1;
    double s=(side1+side2+side3)/2;
    double x=sqrt(s*(s-side1)*(s-side2)*(s-side3));
    setArea(x);


}
// *****************************************************************
// * Function Name:  Triangle constructor                          *
// * Description: Sets side1, side2 and side3 and creates          *
//              a triangle. Then uses parent class getArea         *
// * Parameter Description: Values passed in from main.cpp         *
// * Date:  03/02/2023  (Date of function modification)            *
// * Author:   Donald Kremer    (Name of Function Author.          *
// * References: Dr. David Gaitros                                 *
// *****************************************************************
Triangle::Triangle(const double s1, const double s2, const double s3): side1(s1), side2(s2), side3(s3)
{
    if (s1<1) side1=1;
    else side1=s1;
    if (s2<1) side2=1;
    else side2=s2;
    if (s3<1) side3=1;
    else side3=s3;
    double s=(side1+side2+side3)/2;
    double x=sqrt(s*(s-side1)*(s-side2)*(s-side3));
    setArea(x);

}
// *****************************************************************
// * Function Name:  getside1()                                    *
// * Description: Access the side1 variable and returns            *
//                   it as a double                                *
// * Parameter Description:  N/A                                   *
// * Date:  03/02/2023  (Date of function modification)            *
// * Author:   Donald Kremer    (Name of Function Author.          *
// * References:  N/A                                              *
// *****************************************************************

double Triangle::getSide1() {return side1;}

// *****************************************************************
// * Function Name:  getside2()                                    *
// * Description: Access the side1 variable and returns            *
//                   it as a double                                *
// * Parameter Description:  N/A                                   *
// * Date:  03/02/2023  (Date of function modification)            *
// * Author:   Donald Kremer    (Name of Function Author.          *
// * References:  N/A                                              *
// *****************************************************************

double Triangle::getSide2(){return side2;}

// *****************************************************************
// * Function Name:  getside3()                                    *
// * Description: Access the side1 variable and returns            *
//                   it as a double                                *
// * Parameter Description:  N/A                                   *
// * Date:  03/02/2023  (Date of function modification)            *
// * Author:   Donald Kremer    (Name of Function Author.          *
// * References:  N/A                                              *
// *****************************************************************

double Triangle::getSide3() {return side3;}

// *****************************************************************
// * Function Name:  setSide1()                                    *
// * Description: Mutates the side1 variable assigning s2 to it.   *
// * Parameter Description: Double passed in from main.cpp         *
// * Date:  03/02/2023  (Date of function modification)            *
// * Author:   Donald Kremer    (Name of Function Author.          *
// * References:  N/A                                              *
// *****************************************************************

void Triangle::setSide1(const double s1) {side1=s1;}

// *****************************************************************
// * Function Name:  setSide2()                                    *
// * Description: Mutates the side2 variable assigning s2 to it.   *
// * Parameter Description: Double passed in from main.cpp         *
// * Date:  03/02/2023  (Date of function modification)            *
// * Author:   Donald Kremer    (Name of Function Author.          *
// * References:  N/A                                              *
// *****************************************************************

void Triangle::setSide2(const double s2) {side2=s2;}

// *****************************************************************
// * Function Name:  setSide3()                                    *
// * Description: Mutates the side2 variable assigning s3 to it.   *
// * Parameter Description: Double passed in from main.cpp         *
// * Date:  03/02/2023  (Date of function modification)            *
// * Author:   Donald Kremer    (Name of Function Author.          *
// * References:  N/A                                              *
// *****************************************************************

void Triangle::setSide3(const double s3){side3=s3;}

// *****************************************************************
// * Function Name:  PrintData()                                   *
// * Description:  Prints the data of the triangle.                *
// * Date:  03/02/2023  (Date of function modification)            *
// * Author:   Donald Kremer                                       *
// *****************************************************************

void Triangle::PrintData()
{
    cout << "The length of side 1 is : " << side1 << endl;
    cout << "The length of side 2 is : " << side2 << endl;
    cout << "The length of side 3 is : " << side3 << endl;
    cout << "The area of the triangle is : " << area << endl;

}

