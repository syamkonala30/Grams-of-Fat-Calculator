#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int getFatCals(int);
double getFatPercent(int, int);

int main()
{
    int totalCalories = 0;
    int fatGramss = 0;
    int fatCalories = 0;
    double fatPercent = 0.0;

    cout << "Total no of Calories? ";
    cin >> totalCalories;
    cout << "enter Grams of fat? ";
    cin >> fatGramss;

    fatCalories = getFatCals(fatGramss);
    fatPercent = getFatPercent(fatCalories, totalCalories);

    cout << fixed << setprecision(2) << endl;
    cout << "Fat in Calories: " << fatCalories << endl;
    cout << "Fat in Percent: " << fatPercent << endl;

    system("pause");
    return 0;
} 

int getFatCals(int fatGram)
{

    int getFatCals = 0;
    getFatCals = fatGram * 9;
    return getFatCals;
}

double getFatPercent(int fatCal, int totalCal)
{

    double getFatPercent = 0.0;
    getFatPercent = static_cast<double>(fatCal) / static_cast<double>(totalCal) * 100;
    return getFatPercent;
}
