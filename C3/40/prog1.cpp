#include <iostream>

using namespace std;

float yo_avrage(float arr[3])
{
    return ((arr[0] + arr[1] + arr[2]) / 3.0);
}

int main (void)
{
    float arr[3];

    cout << "enter the gread 1" << endl;
    cin >> arr[0];
    cout << "enter the gread 2" << endl;
    cin >> arr[1];
    cout << "enter the gread 3" << endl;
    cin >> arr[2];
    cout << "The avrage point is : " << yo_avrage(arr);
    return (0);
}