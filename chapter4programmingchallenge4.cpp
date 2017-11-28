#include <iostream>

using namespace std;

int main()
{
    int length1;
    int width1;
    int length2;
    int width2;

    cout << "Please input the length of rectangle 1 and 2, respectively: ";
    cin >> length1 >> length2;
    cout << "Please input the width of rectangle 1 and 2, respectively: ";
    cin >> width1 >> width2;

    int area1 = length1 * width1;
    int area2 = length2 * width2;

    cout << "The area for rectangle 1 is : " << area1<<endl
         << "The area for rectangle 2 is : " << area2 <<endl;
    if(area1 > area2){
        cout << "rectangle 1 has a greater area than rectangle 2";
    }
    else if(area1 == area2){
        cout << "Both rectangles have the same area";
    }
    else{
        cout << "Rectangle 2 has a greater area than rectangle 1";
    }
    return 0;
}
