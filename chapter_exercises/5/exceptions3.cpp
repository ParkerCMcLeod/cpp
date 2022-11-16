// error checked program

#include </home/parkercmcleod/Documents/programming/cpp/include/std_lib_facilities.h>// preprocessor directive, also a statement

int main()
{
    try {
        int x = narrow_cast<int>(3.9); // should throw narrowing exception
    } catch (runtime_error& e) {
        cout << "\n\n\n";
        cerr << "runtime error: " << e.what() << '\n';
        cout << "\n\n\n";
    }

    return 0;
}
