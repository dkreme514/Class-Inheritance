// *****************************************************************
// * Class Name: circle.cpp                                        *
// * Date:  03/03/2023  (Date of function modification)            *
// * Author:   Donald Kremer  (Name of Function Author.          *
// *****************************************************************
#include <cmath>
#include <iomanip>
#include "circle.h"
using namespace std;
// *****************************************************************
// * Function Name:  Circle default constructor                    *
// * Description: Sets the radius to 1 and creates a circle        *
//         Then uses parent classes area and perimeter functions.  *
// * Parameter Description:N/A                                     *
// * Date:  03/02/2023  (Date of function modification)            *
// * Author:   Donald Kremer    (Name of Function Author.          *
// * References:  N/A                                              *
// *****************************************************************
Circle::Circle()
{
    radius = 1;
    setArea(3.14 * (2 * radius));
    setPerimeter(3.14 * radius * radius);
}
// *****************************************************************
// * Function Name:  Circle constructor                            *
// * Description: Sets the radius and creates a circle.            *
//         Then uses parent classes area and perimeter functions.  *
// * Parameter Description:N/A                                     *
// * Date:  03/02/2023  (Date of function modification)            *
// * Author:   Donald Kremer    (Name of Function Author.          *
// * References:  N/A                                              *
// *****************************************************************
Circle::Circle(const double r):radius(r)
{
    if (r<1) radius=1;
    else radius=r;
    setArea(3.14*(2*radius));
    setPerimeter(3.14*radius*radius);
}
// *****************************************************************
// * Function Name:  getLength()                                   *
// * Description: Access the radius variable and returns           *
//                   it as a double                                *
// * Parameter Description:  N/A                                   *
// * Date:  03/02/2023  (Date of function modification)            *
// * Author:   Donald Kremer    (Name of Function Author.          *
// * References:  N/A                                              *
// *****************************************************************
double Circle::getRadius()
{
    return radius;
}
// *****************************************************************
// * Function Name:  setLength()                                   *
// * Description: Mutates the radius variable                      *
// * Parameter Description: const double r passed in from main.cpp *
// * Date:  03/02/2023  (Date of function modification)            *
// * Author:   Donald Kremer    (Name of Function Author.          *
// * References:  N/A                                              *
// *****************************************************************
void Circle::setRadius(const double r)
{
    radius=r;
}
// *****************************************************************
// * Function Name:  PrintData()                                   *
// * Description:  Prints the data of the circle.                  *
// * Date:  03/02/2023  (Date of function modification)            *
// * Author:   Donald Kremer                                       *
// *****************************************************************
void Circle::PrintData()
{
    cout<<"The radius of the circle is : "<< radius << endl;
    cout<<"The area of the circle is : "<<area << endl;
    cout<<"The perimeter of the circle is : "<< perimeter<< endl;

}


