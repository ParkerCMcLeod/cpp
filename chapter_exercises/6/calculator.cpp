#include </home/parkercmcleod/Documents/programming/cpp/include/std_lib_facilities.h>

class Token {
    public:
        char kind;
        double value;
};

vector<Token> process_input(std::string input) 
{
    vector<Token> token_stream;
    for(int i=0;i<input.length();i++) {
        char temp = input[i];
        switch(temp):
        
    }
    return token_stream;
}

int main()
{
    std::string input;
    std::cout << "Expression: \n";
    std::getline(std::cin,input);
    vector<Token> token_stream;
    token_stream = process_input(input);
    double result = 0;
    std::cout << "Result: " << result << "\n";
    return 0;
}