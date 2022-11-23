#include </home/parkercmcleod/Documents/programming/cpp/include/std_lib_facilities.h>

class Token {
    public:
        char kind;
        double value;
};

double expression(); // deals with + and - & calls term() and get_token()
double term(); // deals with * and / & calls primary() and get_token()
Token primary(); // deals with numbers and parentheses & calls expression() and get_token
Token get_token(); // reads in characters and composes tokens & uses cin

int main()
{
    cout << expression();
    return 0;
}

double expression() 
{
    double term = term();

}

Token get_token()
{
    char c[100];
    cin.getline(c,100);
    for(int i;i<100;++i) {
        Token temp;
        switch(c[i]) {
            case '\n':
        }
    }
}