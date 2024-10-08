#include <iostream>
#include <utility>  // For pair

using namespace std;

int main() {
    // Define pairs to store the coordinates
    pair<double, double> point1;
    pair<double, double> point2;

    // Prompt the user for the first point
    cout << "Enter the x-coordinate of the first point: ";
    cin >> point1.first;
    cout << "Enter the y-coordinate of the first point: ";
    cin >> point1.second;

    // Prompt the user for the second point
    cout << "Enter the x-coordinate of the second point: ";
    cin >> point2.first;
    cout << "Enter the y-coordinate of the second point: ";
    cin >> point2.second;

    // Check if the two x-coordinates are the same to avoid division by zero
    if (point1.first == point2.first) {
        cout << "The line is vertical. Slope is undefined." << endl;
        cout << "Equation of the line: x = " << point1.first << endl;
        cout << "There is no y-intercept for a vertical line." << endl;
        cout << "X-intercept: " << point1.first << endl;
    } else {
        // Calculate the slope (m)
        double slope = (point2.second - point1.second) / (point2.first - point1.first);

        // Calculate the y-intercept (b)
        double y_intercept = point1.second - slope * point1.first;

        // Calculate the x-intercept (set y = 0)
        double x_intercept = -y_intercept / slope;

        // Display the results
        cout << "\nSlope (m): " << slope << endl;
        cout << "Y-intercept (b): " << y_intercept << endl;
        cout << "Equation of the line: y = " << slope << "x + " << y_intercept << endl;
        cout << "X-intercept: " << x_intercept << endl;
    }

    return 0;
}
