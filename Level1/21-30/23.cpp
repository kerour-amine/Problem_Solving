#include <iostream>
#include <math.h>
using namespace std;

void ReadTriangleData(float &a, float &b, float &c)
{

    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;
    cout << "Enter c: ";
    cin >> c;
}
float CircleAreaByATriangle(float a, float b, float c)
{
    const float PI = 3.14159265;
    float p = (a + b + c) / 2;
    float T = ((a * b * c) / (4 * sqrt(p * (p - a) * (p - b) * (p - c))));
    float Area = PI * pow(T, 2);
    return Area;
}
void PrintResult(float Area)
{
    cout << "\nRectangle area is: " << Area << endl;
}
int main()
{
    float a, b, c;
    ReadTriangleData(a, b, c);
    PrintResult(CircleAreaByATriangle(a, b, c));
    return 0;
}