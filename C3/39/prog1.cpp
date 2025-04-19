#include <iostream>

using namespace std;

int main (void)
{
    int arr[3];

    cout << "enter the gread 1" << endl;
    cin >> arr[0];
    cout << "enter the gread 2" << endl;
    cin >> arr[1];
    cout << "enter the gread 3" << endl;
    cin >> arr[2];
    cout << "The avrage point is : " << (float)(arr[0] + arr[1] + arr[2]) / 3;
    return (0);
}