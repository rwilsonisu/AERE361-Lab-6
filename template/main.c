#include <stdio.h>

double midpoint(double (*func)(double), double a, double b);
double simpson_13(double (*func)(double), double a, double b);
double simpson_38(double (*func)(double), double a, double b);
double gauss_quad(double (*func)(double), double a, double b, int n);

double integrand(double x){
    return x*x;
}

int main(void) {
    double ans;

    ans = midpoint(integrand, 0, 2);
    printf("Midpoint integration: %g\n", ans);

    ans = simpson_13(integrand, 0, 2);
    printf("Simpson's 1/3 Rule: %g\n", ans);

    ans = simpson_38(integrand, 0, 2);
    printf("Simpson's 3/8 Rule: %g\n", ans);

    ans = gauss_quad(integrand, 0, 3, 8);
    printf("Gauss Quad: %g\n", ans);

    return 0;
}
