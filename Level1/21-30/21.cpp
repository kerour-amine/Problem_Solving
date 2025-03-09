#include <iostream>
#include <math.h>
using namespace std;

float ReadCircumFerence()
{
    float L;
    cout << "Enter L: ";
    cin >> L;
    return L;
}
float CircleAreaByCircumFerence(float L)
{
    const float PI = 3.14159265;
    float Area = pow(L, 2) / (4 * PI);
    return Area;
}
void PrintResult(float Area)
{
    cout << "\nRectangle area is: " << Area << endl;
}
int main()
{

    PrintResult(CircleAreaByCircumFerence(ReadCircumFerence()));
    return 0;
}