// *****************************************************************
// * Class Name:  shape.cpp                                        *
// * Description:  File to define the functions in the base class  *
// * Date:  03/02/2023 (Date of function modification)             *
// * Author:   Donald Kremer (Name of Function Author.             *
// * References:  Dr. David Gaitros                                *
// *****************************************************************
#include "shape.h"
#include <iostream>

using namespace std;
// *****************************************************************
// * Function Name:  Shape default constructor                     *
// * Description: Sets teh area and perimeter to 1.                *
// * Parameter Description:  N/A                                   *
// * Date:  03/02/2023  (Date of function modification)            *
// * Author:   Donald Kremer    (Name of Function Author.          *
// * References:  N/A                                              *
// *****************************************************************
Shape::Shape()
{
    area=1;
    perimeter=1;
}
// *****************************************************************
// * Function Name:  Shape  constructor                            *
// * Description: Sets the area and perimeter and creates "shape"  *
// * Parameter Description:Area and Perimeter                      *
// * Date:  03/02/2023  (Date of function modification)            *
// * Author:   Donald Kremer    (Name of Function Author.          *
// * References:  N/A                                              *
// *****************************************************************
Shape::Shape(const double a, const double p):area(a),perimeter(p)
{

}
// *****************************************************************
// * Function Name:  getArea()                                     *
// * Description: Access the area variable from protected data     *
// * Parameter Description: N/A                                    *
// * Date:  03/02/2023  (Date of function modification)            *
// * Author:   Donald Kremer    (Name of Function Author.          *
// * References:  N/A                                              *
// *****************************************************************
double Shape::getArea()
{
    return area;
}
// *****************************************************************
// * Function Name:  setArea()                                     *
// * Description: Mutates the area variable, assinging it the      *
//          value that was passed in from the derived class        *
// * Parameter Description: The area of the given shape,           *
//     usually a value passed in contingent upon which shape it is *
// * Date:  03/02/2023  (Date of function modification)            *
// * Author:   Donald Kremer    (Name of Function Author)          *
// * References:  N/A                                              *
// *****************************************************************
void Shape::setArea(const double a)
{
    area=a;
}
// *****************************************************************
// * Function Name:  setPermieter()                                *
// * Description: Mutates the perimeter variable to be assigned    *
//        the value that was passed in from the derived class      *
// * Parameter Description: The perimeter of the given shape,      *
//     usually a value passed in contingent upon which shape it is *
// * Date:  03/02/2023  (Date of function modification)            *
// * Author:   Donald Kremer    (Name of Function Author)          *
// * References:  N/A                                              *
// *****************************************************************
void Shape::setPerimeter(const double p)
{
    perimeter=p;
}
// *****************************************************************
// * Function Name:  getPerimeter()                                *
// * Description:  Accessor to get the perimeter variable          *
// * Date:  03/02/2023  (Date of function modification)            *
// * Author:   Donald Kremer    (Name of Function Author.)         *
// * References:  N/A                                              *
// *****************************************************************
double Shape::getPerimeter()
{
    return perimeter;
}
// *****************************************************************
// * Function Name:  PrintData()                                   *
// * Description:  Base definition for the PrintData function.     *
// * Date:  03/02/2023  (Date of function modification)            *
// * Author:   Donald Kremer    (Name of Function Author.)         *
// * References:  N/A                                              *
// *****************************************************************
void Shape::PrintData()
{
    cout<< "Invalid, please retry for another shape."<<endl;
}


