#include <iostream>
using namespace std;

void ReadDemensions(float &height, float &width)
{
    cout << "Enter height: ";
    cin >> height;
    cout << "Enter width: ";
    cin >> width;
}
float CalculateRectangleArea(float height, float width)
{
    return height * width;
}
void PrintResult(int Area)
{
    cout << "\nRectangle area is: " << Area << endl;
}
int main()
{
    float height, width;
    ReadDemensions(height, width);
    PrintResult(CalculateRectangleArea(height, width));
    return 0;
}