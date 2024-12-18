// *****************************************************************
// * Class Name:  square.cpp                                       *
// * Description: File to definethe square class                   *
// * Date:  03/02/2023  (Date of function modification)            *
// * Author:   Donald Kremer  (Name of Function Author.            *
// * References:  N/A                                              *
// *****************************************************************
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
#include "square.h"
// *****************************************************************
// * Function Name:  Square default constructor                    *
// * Description: Sets the area and perimeter to 1.                *
// * Parameter Description:  N/A                                   *
// * Date:  03/02/2023  (Date of function modification)            *
// * Author:   Donald Kremer    (Name of Function Author.          *
// * References:  N/A                                              *
// *****************************************************************
Square::Square()
{
    side = 1.00;
    setArea(side+side);
    setPerimeter(perimeter=4*side);
}
// *****************************************************************
// * Function Name:  Square constructor                            *
// * Description: Sets teh area and perimeter to 1.                *
// * Parameter Description: Value passed in given in main.cpp      *
// * Date:  03/02/2023  (Date of function modification)            *
// * Author:   Donald Kremer    (Name of Function Author.          *
// * References:  N/A                                              *
// *****************************************************************
Square::Square(const double s)
{
    if (s<1) side=1;
    else side=s;
    setArea(side+side);
    setPerimeter(perimeter=4*side);
}
// *****************************************************************
// * Function Name:  getSize()                                     *
// * Description: Accesses the size variable                       *
// * Date:  03/02/2023  (Date of function modification)            *
// * Author:   Donald Kremer    (Name of Function Author.          *
// * References:  N/A                                              *
// *****************************************************************
double Square::getSide()
{
    return side;
}
// *****************************************************************
// * Function Name:  setSide()                                     *
// * Description: Mutator for the side variable                    *
// * Parameter Description: Value passed in given in main.cpp      *
// * Date:  03/02/2023  (Date of function modification)            *
// * Author:   Donald Kremer    (Name of Function Author)          *
// *****************************************************************
void Square::setSide(const double s) {side=s;}

// *****************************************************************
// * Function Name:  PrintData()                                   *
// * Description:  Prints the data of the square.                  *
// * Date:  03/02/2023  (Date of function modification)            *
// * Author:   Donald Kremer                                       *
// *****************************************************************
void Square::PrintData()
{
    cout << "The length of the side is : " << side << endl;
    cout << "The area of the square is : " << area << endl;
    cout << "The perimeter of the square is : " << perimeter << endl;
}


