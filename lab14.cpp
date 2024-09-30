#include <iostream>
using namespace std;

const int RGB_MAX = 255;

class Color {
private:
    int red;
    int green;
    int blue;

public:
    int getRed() const      { return red; }
    int getGreen() const    { return green; }
    int getBlue() const     { return blue; }

    void setRed(int r)      { red = r; }
    void setGreen(int g)    { green = g; }
    void setBlue(int b)     { blue = b; }

    void print(const string& colorName);
};

void Color::print(const string& colorName) {
    cout << "Color " << colorName << " (R: " << red << ", G: " << green << ", B: " << blue << ")\n";
}

void print(Color);

int main()
{
    Color colorR, colorG, colorB;

    colorR.setRed(RGB_MAX);
    colorR.setGreen(0);
    colorR.setBlue(0);

    colorG.setRed(0);
    colorG.setGreen(RGB_MAX);
    colorG.setBlue(0);

    colorB.setRed(0);
    colorB.setGreen(0);
    colorB.setBlue(RGB_MAX);

    colorR.print("Red");
    colorG.print("Green");
    colorB.print("Blue");

    return 0;
}