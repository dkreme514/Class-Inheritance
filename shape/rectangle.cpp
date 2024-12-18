// *****************************************************************
// * Class Name:  rectangle.cpp                                    *
// * Description:  File to define fucntions for the rectangle      *
//                  class                                          *
// * Date:  02/02/2023  (Date of function modification)            *
// * Author:   Donald Kremer (Name of Function Author.)            *
// *****************************************************************
#include "rectangle.h"
// *****************************************************************
// * Function Name:  Rectangle default constructor                 *
// * Description: Sets the length and width to 1 and creates a     *
//         rectangle. Then uses parent classes area and perimeter  *
//         functions.                                              *
// * Parameter Description:Values passed in from main.cpp          *
// * Date:  03/02/2023  (Date of function modification)            *
// * Author:   Donald Kremer    (Name of Function Author.          *
// * References:  N/A                                              *
// *****************************************************************
Rectangle::Rectangle()
{
    length=1;
    width=1;
    double x=length*width;
    double y=(2*length)+(2*width);
    setArea(x);
    setPerimeter(y);
}
// *****************************************************************
// * Function Name:  Rectangle default constructor                 *
// * Description: Sets the length and width  and creates a         *
//         rectangle. Then uses parent classes area and perimeter  *
//         functions.                                              *
// * Parameter Description:Area and Perimeter                      *
// * Date:  03/02/2023  (Date of function modification)            *
// * Author:   Donald Kremer    (Name of Function Author.          *
// * References:  N/A                                              *
// *****************************************************************
Rectangle::Rectangle(const double l, const double w):length(l), width(w)
{
    if (l<1) length=1;
    else length=l;
    if(w<1) width=1;
    else width=w;
    double x=length*width;
    double y=(2*length)+(2*width);
    setArea(x);
    setPerimeter(y);
}
// *****************************************************************
// * Function Name:  getLength()                                   *
// * Description: Access the length variable from private data     *
// * Parameter Description: N/A                                    *
// * Date:  03/02/2023  (Date of function modification)            *
// * Author:   Donald Kremer    (Name of Function Author.          *
// * References:  N/A                                              *
// *****************************************************************
double Rectangle::getLength()
{
    return length;
}
// *****************************************************************
// * Function Name:  getWidth()                                    *
// * Description: Access the width variable from private data      *
// * Parameter Description: N/A                                    *
// * Date:  03/02/2023  (Date of function modification)            *
// * Author:   Donald Kremer    (Name of Function Author.          *
// * References:  N/A                                              *
// *****************************************************************
double Rectangle::getWidth()
{
    return width;
}
// *****************************************************************
// * Function Name:  setLength()                                   *
// * Description: Mutates the length variable                      *
// * Parameter Description: Value passed in from main.cpp          *
// * Date:  03/02/2023  (Date of function modification)            *
// * Author:   Donald Kremer    (Name of Function Author.          *
// * References:  N/A                                              *
// *****************************************************************
void Rectangle::setWidth(const double w)
{
    width=w;
}
// *****************************************************************
// * Function Name:  setWidth()                                    *
// * Description: Mutates the width  variable                      *
// * Parameter Description: Value passed in from main.cpp          *
// * Date:  03/02/2023  (Date of function modification)            *
// * Author:   Donald Kremer    (Name of Function Author.          *
// * References:  N/A                                              *
// *****************************************************************
void Rectangle::setLength(const double l)
{
    length=l;
}
// *****************************************************************
// * Function Name:  PrintData()                                   *
// * Description:  Prints the data of the rectangle                *
// * Date:  03/02/2023  (Date of function modification)            *
// * Author:   Donald Kremer                                       *
// *****************************************************************
void Rectangle::PrintData()
{
    cout << "The length of side 1 is : " << length << endl;
    cout << "The length of side 2 is : " << width << endl;
    cout << "The area of the rectangle is : " << area << endl;
    cout << "The perimeter of the rectangle is : " << perimeter << endl;
}

