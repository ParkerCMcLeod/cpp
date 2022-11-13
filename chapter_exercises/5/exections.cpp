// error checked program

#include </home/parkercmcleod/Documents/programming/cpp/include/std_lib_facilities.h>// preprocessor directive, also a statement

class Bad_area{};

double traingle_area(double base, double height)
{
    if (base <= 0 || height <= 0) throw(Bad_area{});
    return (.5*base*height);
}

int main()
{
    try{
    double x = traingle_area(15,-1);
    } catch (Bad_area) { // if bad area
        error("-1");
        return -1;
    } catch (...) { // all others
        error("-2");
        return -2;
    }
    return 0;
}
