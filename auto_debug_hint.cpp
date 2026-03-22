#include <iostream>
#include <cmath>
using namespace std;

// Auto debug hint for floating-point numbers
void debugDouble(double a, double b) {
    double diff = abs(a - b);
    if(diff > 1e-9) {
        cout << "[DEBUG] Values differ by: " << diff << endl;
    } else {
        cout << "[DEBUG] Values are approximately equal." << endl;
    }
}

int main() {
    double x = 0.1 + 0.2;
    double y = 0.3;
    debugDouble(x, y);
    return 0;
}