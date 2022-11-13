// reads and writes a given name

#include </home/parkercmcleod/Documents/programming/cpp/include/std_lib_facilities.h>// preprocessor directive, also a statement

int main()
{
    cout << "Enter your name: "; // prompts for input
    string name; // defintion without a value
    cin >> name; // >> read from << write to
    cout << "\nHowdy, " << name << "!\n";
}
