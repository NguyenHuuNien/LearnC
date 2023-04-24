#include <stdio.h>
#include <math.h>

double f(double x) {
    return sin(x * x) / exp(x);
}

double trapz(int n) {
    double h = 1.0 / n;
    double S = 0.5 * (f(0) + f(1));
    for (int i = 1; i < n; i++) {
        double x = i * h;
        S += f(x);
    }
    return h * S;
}

int main() {
    double a = 0.0;   // c?n d??i
    double b = 1.0;   // c?n tren
    double eps = 0.0001;  // ?? chinh xac
    double S0 = 0.0, S1 = 0.0;  // gia tr? tich phan ? 2 l?n tinh lien ti?p
    int n = 1;  // s? l??ng ?o?n chia ban ??u

    do {
        S0 = S1;
        S1 = trapz(n);
        n *= 2;  // t?ng s? l??ng ?o?n chia len g?p ?oi
    } while (fabs(S1 - S0) > eps);  // l?p l?i cho ??n khi ??t ?? chinh xac c?n thi?t

    printf("KQ: %.4lf\n", S1);

    return 0;
}

