#include <iostream>
#include <cmath>
using namespace std;

// Double comparison using epsilon
bool isEqual(double a, double b, double eps = 1e-9) {
    return abs(a - b) < eps;
}

int main() {
    double x = 0.1 + 0.2;
    double y = 0.3;

    if (isEqual(x, y)) {
        cout << "Considered Equal" << endl;
    } else {
        cout << "Not Equal" << endl;
    }
    return 0;
}