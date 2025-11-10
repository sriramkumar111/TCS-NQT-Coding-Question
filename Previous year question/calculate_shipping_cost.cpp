//You are tasked with writing a program to calculate the total shipping 
//cost based on the weight of the package and the distance it needs to travel. 
//The shipping cost is determined by the following criteria:
//1. Base money: $5.00
//2. Cost per kilogram: $2.00
//3. Cost per 10 kilometers: $0.5
//
//Examplel:
//10 (w)
//100 (D)
//output: $30.00

#include <bits/stdc++.h>
using namespace std;

double calculateShippingCost(int weight, int distance) {
    const double baseCost = 5.00;
    const double costPerKg = 2.00;
    const double costPer10Km = 0.50;

    double totalCost = baseCost + (weight * costPerKg) + ((distance / 10) * costPer10Km);
    return totalCost;
}

int main() {
    int weight, distance;
    cout << "Enter package weight (kg): ";
    cin >> weight;
    cout << "Enter shipping distance (km): ";
    cin >> distance;

    double totalCost = calculateShippingCost(weight, distance);
    cout << fixed << setprecision(2);
    cout << "Total Shipping Cost: $" << totalCost << endl;

    return 0;
}

