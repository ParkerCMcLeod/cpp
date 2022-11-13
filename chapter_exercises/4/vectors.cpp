// vectors

#include </home/parkercmcleod/Documents/programming/cpp/include/std_lib_facilities.h>

int main()
{
    vector<int> int_vec = {1,2,4,8};
    vector<string> string_vec = {"one","two","four","eight"};
    vector<int> empty_int_vec(4);
    //prints all elements of vector
    for(int x:int_vec)
        cout << "\n" << x;
    cout << "\n";

    cout << "\n" << int_vec.size();
    // cout << "\n" << int_vec.push_back(16); // adds 16 to back
    cout << "\n" << int_vec.size();

    // BTW YOU CAN COMPARE STRINGS DIRECTLY!!! :)



}
