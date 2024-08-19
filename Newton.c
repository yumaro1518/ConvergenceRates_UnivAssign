#include <stdio.h>
#include <math.h>

// 関数の定義
double f(double x) {
    return cos(x) - x * x;
}

// 導関数の定義
double f_prime(double x) {
    return -sin(x) - 2 * x;
}

int main() {
    double x0 = 0.5;  // 初期値
    double epsilon = 1e-6;  // 収束条件
    int max_iter = 30;  // 最大反復回数

    double x_n = x0;
    double x_n1;
    int i;

    for (i = 0; i < max_iter; i++) {
        x_n1 = x_n - f(x_n) / f_prime(x_n);
        if (fabs(x_n1 - x_n) < epsilon) {
            break;
        }
        x_n = x_n1;
    }

    printf("収束した解: %f\n", x_n1);
    printf("反復回数: %d\n", i);

    return 0;
}
