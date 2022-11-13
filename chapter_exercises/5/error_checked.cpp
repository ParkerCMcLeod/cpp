// error checked program

#include </home/parkercmcleod/Documents/programming/cpp/include/std_lib_facilities.h>// preprocessor directive, also a statement

double traingle_area(double base, double height)
{
    if (base <= 0 || height <= 0) error("non-positive argument passed to triange_area");
    return (.5*base*height);
}

int main()
{
    double x = traingle_area(15,2);
    return 0;
}
