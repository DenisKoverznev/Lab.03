#include <stdio.h>
#include <math.h>

double f(double x) {
    return (x <= 0) ? log(x + sqrt(x * x + 1)) : (x < 5) ? sin(x + 2 / (x - 1)) : -x + 2;
}

double g(double x, double y) {
    return (x + y > 0) ? log(x + y) / exp(x - y) : NAN;
}

int main() {
    for (double x = -6; x <= 6; x += 0.3) printf("f(%.2f) = %.6f\n", x, f(x));
    for (double x = -4; x <= 4; x += 0.25)
        for (double y = 0; y <= 3; y += 0.1)
            if (!isnan(g(x, y))) printf("g(%.2f, %.2f) = %.6f\n", x, y, g(x, y));
    return 0;
}