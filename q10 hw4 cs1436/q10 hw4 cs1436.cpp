// q10 hw4 cs1436.cpp : Question 10
//

#include <iostream>
#include<string>
#include<iomanip>
using namespace std;

int main() {
    int years;
    double monthlyRainfall, totalRainfall = 0.0;
    int totalMonths;
    do {
        cout << "Enter the number of years: ";
        cin >> years;

        if (years < 1)
            cout << "Error: Number of years must be at least 1. Please enter again.\n";
    } while (years < 1);

    for (int year = 1; year <= years; year++) {
        cout << "\nYear " << year << ":\n";
        for (int month = 1; month <= 12; month++) {
          do {
              cout << "Enter the inches of rainfall for month " << month << ": ";
                cin >> monthlyRainfall;

              if (monthlyRainfall < 0)
                    cout << "Error: Rainfall cannot be negative. Please enter again.\n";
            } while (monthlyRainfall < 0);
            totalRainfall += monthlyRainfall;
        }
    }
    totalMonths = years*12;
    double averageRainfall = totalRainfall / totalMonths;
    cout << fixed <<setprecision(2);
    cout << "\nNumber of months: " << totalMonths << endl;
    cout << "Total inches of rainfall: " << totalRainfall<< endl;
    cout << "Average rainfall per month: " <<averageRainfall << " inches" << endl;

    return 0;
}
