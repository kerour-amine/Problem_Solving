#include <iostream>
#include <math.h>
using namespace std;

float ReadRadious()
{
    float r;
    cout << "Enter radious: ";
    cin >> r;
    return r;
}
float CircleArea(float r)
{
    const float PI = 3.14159265;
    float Area = PI * pow(r, 2);
    return Area;
}
void PrintResult(float Area)
{
    cout << "\nRectangle area is: " << Area << endl;
}
int main()
{

    PrintResult(CircleArea(ReadRadious()));
    return 0;
}