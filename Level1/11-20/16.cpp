#include <iostream>
#include<math.h>
using namespace std;


void ReadDimensions(float &a, float &d)
{
    cout << "Enter side: ";
    cin >> a;
    cout << "Enter diagonal: ";
    cin >> d;
}
float RectangleAreaBySideAndDiagonal(float a, float d)
{
    float Area = a*sqrt(pow(d,2)-pow(a,2));
    return Area;
}
void PrintResult(float Area)
{
    cout << "\nRectangle area is: " << Area << endl;
}
int main()
{
    float a, d;
    ReadDimensions(a, d);
    PrintResult(RectangleAreaBySideAndDiagonal(a, d));
    return 0;
}