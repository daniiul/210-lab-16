// COMSC-210 | Lab 10 | Daniil Malakhov
//IDE used: codeblocks
#include <iostream>
#include <iomanip>
using namespace std;

// Creates class color with properties of red green and blue. Has ability to print those values.
class Color{
    private:
        int red;
        int green;
        int blue;
    public:
        // defualt constructor, sets all variables to 0
        Color()
        {
            red = 0;
            green = 0;
            blue = 0;
        }
        // parametrized constructor
        Color(int r, int g, int b)
        {
            red = r;
            green = g;
            blue = b;
        }
        Color (int r)
        {
            red = r;
        }
        double getRed() { return red;}
        void setRed(int r) { red = r;}
        double getGreen() { return green;}
        void setGreen(int g) { green = g;}
        double getBlue() { return blue;}
        void setBlue(int b) { blue = b;}

        void print() const
        {
            cout << "Red: " << red;
            cout << " Green: " << green;
            cout << " Blue: " << blue;
            cout << endl;
        }
};

int main()
{
    Color a;
    Color b(233, 145, 76);
    Color c(132);

    c.setGreen(221);
    c.setBlue(42);

    a.print();
    b.print();
    c.print();
}
