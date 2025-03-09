#include <iostream>
#include <math.h>
using namespace std;

void ReadTriangleData(float &a, float &b)
{

    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;
}
float CircleAreaByTriangle(float a, float b)
{
    const float PI = 3.14159265;
    float Area = PI * (pow(b, 2) / 4) * ((2 * a - b) / (2 * a + b));
    return Area;
}
void PrintResult(float Area)
{
    cout << "\nRectangle area is: " << Area << endl;
}
int main()
{
    float a, b;
    ReadTriangleData(a, b);
    PrintResult(CircleAreaByTriangle(a, b));
    return 0;
}