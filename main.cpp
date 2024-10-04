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
        // default constructor, sets all variables to 0
        Color()
        {
            red = 0;
            green = 0;
            blue = 0;
        }
        // parametrized constructor, sets variables to given values
        Color(int r, int g, int b)
        {
            red = r;
            green = g;
            blue = b;
        }
        // partial constructor, initializes red to given variable
        Color (int r)
        {
            red = r;
        }

        // Getter method for red
        // arguments: none
        //returns: a double representing of red
        int getRed() { return red;}

        // Setter method for red
        // arguments: int representing red
        // returns: an int representing of red
        void setRed(int r) { red = r;}

        // Getter method for green
        // arguments: none
        //returns: a double representing of green
        int getGreen() { return green;}

        // Setter method for green
        // arguments: int representing green
        // returns: an int representing of green
        void setGreen(int g) { green = g;}

        // Getter method for blue
        // arguments: none
        //returns: a double representing of blue
        int getBlue() { return blue;}

        // Setter method for blue
        // arguments: int representing blue
        // returns: an int representing of blue
        void setBlue(int b) { blue = b;}

        // Print method, prints all variables
        // arguments: none
        // returns: none
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
