#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    float x1, x2, y1, y2;
    cout << "Enter the coordiates:";
    cin >> x1 >> x2 >> y1 >> y2;
    float dist;
    dist = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
    cout << "The distance between coordinates is:" << dist;
}