#include <iostream>
using namespace std;

void ReadDemensions(float &h, float &a)
{
    cout << "Enter height: ";
    cin >> h;
    cout << "Enter a: ";
    cin >> a;
}
float CalculateTraingleArea(float h, float a)
{
    float Area = (a / 2) * h;
    return Area;
}
void PrintResult(float Area)
{
    cout << "\nTriangle area is: " << Area << endl;
}
int main()
{
    float h, a;
    ReadDemensions(h, a);
    PrintResult(CalculateTraingleArea(h, a));
    return 0;
}