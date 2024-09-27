#include <iostream>
#include <utility>  // For std::pair

int main() {
    // Define pairs to store the coordinates
    std::pair<double, double> point1;
    std::pair<double, double> point2;

    // Prompt the user for the first point
    std::cout << "Enter the x-coordinate of the first point: ";
    std::cin >> point1.first;
    std::cout << "Enter the y-coordinate of the first point: ";
    std::cin >> point1.second;

    // Prompt the user for the second point
    std::cout << "Enter the x-coordinate of the second point: ";
    std::cin >> point2.first;
    std::cout << "Enter the y-coordinate of the second point: ";
    std::cin >> point2.second;

    // Check if the two x-coordinates are the same to avoid division by zero
    if (point1.first == point2.first) {
        std::cout << "The line is vertical. Slope is undefined." << std::endl;
        std::cout << "Equation of the line: x = " << point1.first << std::endl;
        std::cout << "There is no y-intercept for a vertical line." << std::endl;
        std::cout << "X-intercept: " << point1.first << std::endl;
    } else {
        // Calculate the slope (m)
        double slope = (point2.second - point1.second) / (point2.first - point1.first);

        // Calculate the y-intercept (b)
        double y_intercept = point1.second - slope * point1.first;

        // Calculate the x-intercept (set y = 0)
        double x_intercept = -y_intercept / slope;

        // Display the results
        std::cout << "\nSlope (m): " << slope << std::endl;
        std::cout << "Y-intercept (b): " << y_intercept << std::endl;
        std::cout << "Equation of the line: y = " << slope << "x + " << y_intercept << std::endl;
        std::cout << "X-intercept: " << x_intercept << std::endl;
    }

    return 0;
}
