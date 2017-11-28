#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    const int CALORIES_PER_COOKIE = 30;
    int amountOfCookiesEaten;

    cout << "Please state the amount of cookies eaten: ";
    cin >> amountOfCookiesEaten;
    double totalCalories = amountOfCookiesEaten*CALORIES_PER_COOKIE;

    cout << "You have consumed " << totalCalories << " calories";

    return 0;
}
