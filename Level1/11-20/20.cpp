#include <iostream>
#include <math.h>
using namespace std;

float ReadSquareSide()
{
    float A;
    cout << "Enter radious: ";
    cin >> A;
    return A;
}
float CircleAreaInscribedInSquare(float A)
{
    const float PI = 3.14159265;
    float Area = (PI*pow(A,2))/4;
    return Area;
}
void PrintResult(float Area)
{
    cout << "\nRectangle area is: " << Area << endl;
}
int main()
{

    PrintResult(CircleAreaInscribedInSquare(ReadSquareSide()));
    return 0;
}