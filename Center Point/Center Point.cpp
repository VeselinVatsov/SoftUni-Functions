/*You are given the coordinates of two points on a Cartesian coordinate system - X1, Y1, X2, 
and Y2.Create a method
that prints the point that is closest to the center of the coordinate system(0, 0)
in the format(X, Y).If the points are
at the same distance from the center, print only the first one*/

#include <iostream>
#include <cmath>

void CP(double x1, double x2, double y1, double y2) {

    double c1 = sqrt(pow(x1, 2) + pow(x2, 2));
    double c2 = sqrt(pow(y1, 2) + pow(y2, 2));


    if (c1 <= c2)
    {
        std::cout << "(" << x1 << ", " << x2 << ")";
    }
    else
    {
        std::cout << "(" << y1 << ", " << y2 << ")";
    }
}

int main()
{
    double x1, x2, y1, y2;
    std::cin >> x1;
    std::cin >> x2;
    std::cin >> y1;
    std::cin >> y2;
    
    CP(x1, x2, y1, y2);
}