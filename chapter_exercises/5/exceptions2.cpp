// error checked program

#include </home/parkercmcleod/Documents/programming/cpp/include/std_lib_facilities.h>// preprocessor directive, also a statement

int main()
{
    try {
        vector<int> vec = {1,2,3};
        int x = vec[3]; // should throw runtime error
    } catch (runtime_error& e) {
        cout << "\n\n\n";
        cerr << "runtime error: " << e.what() << '\n';
        cout << "\n\n\n";
    }

    return 0;
}
