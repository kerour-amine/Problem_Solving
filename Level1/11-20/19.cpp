#include <iostream>
#include <math.h>
using namespace std;

float ReadDiameter()
{
    float D;
    cout << "Enter Diameter: ";
    cin >> D;
    return D;
}
float CircleAreaByDiameter(float D)
{
    const float PI = 3.14159265;
    float Area = (PI * pow(D, 2)) / 4;
    return Area;
}
void PrintResult(float Area)
{
    cout << "\nCircle area is: " << Area << endl;
}
int main()
{

    PrintResult(CircleAreaByDiameter(ReadDiameter()));
    return 0;
}