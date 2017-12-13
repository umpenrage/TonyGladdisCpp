#include <iostream>
#include <iomanip>


using namespace std;

int main()
{
    //this program tells you how much fat per grams make up the total caloric intake

    const int FAT_PER_GRAM = 9;
    double fatPercentage;
    int amountOfFatGrams;
    int totalCaloriesFromFat;
    int totalCalories;

    cout << "Please indicate the amount of grams of fat and the total amount of calories per serving: ";
    cin>> amountOfFatGrams;
    cin>> totalCalories;
    //calculates and ensures that the amount of calories in fat are not > total calories per serving
    totalCaloriesFromFat = FAT_PER_GRAM * amountOfFatGrams;
    if(amountOfFatGrams < 0)
    {
        cout << "You cannot have negative grams of fat";
    }
    else if(totalCalories < 0)
    {
        cout << "You cannot have negative calories";
    }
    else if(totalCaloriesFromFat > totalCalories)
    {
        cout<< "The calories from fat cannot exceed the total calories per serving";
    }
    else
    {
        fatPercentage = (static_cast<double>(totalCaloriesFromFat)/totalCalories)*100;
        cout << "Your food caloric intake is " << fixed << setprecision(2)<< showpoint<< fatPercentage << "% fat and ";
        if(fatPercentage<30)
        {
            cout << "is considered to be low fat";
        }
        else
        {
            cout << "is not considered low fat";
        }
    }
    return 0;
}
