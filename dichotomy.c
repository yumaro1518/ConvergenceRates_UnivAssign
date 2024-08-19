#include <stdio.h>
#include <math.h>

// 関数の定義
double f(double x) {
    return cos(x) - x * x;
}

int main() {
    double a = 0.0;  // 区間の下限
    double b = 1.0;  // 区間の上限
    double epsilon = 1e-6;  // 収束条件
    double c;
    int max_iter = 50;  // 最大反復回数
    int iter = 0;

    if (f(a) * f(b) >= 0) {
        printf("関数は区間内で符号が変わっていません。\n");
        return -1;
    }

    while ((b - a) >= epsilon && iter < max_iter) {
        c = (a + b) / 2;

        if (fabs(f(c)) < epsilon) {  // cが解に十分近い
            break;
        }

        if (f(a) * f(c) < 0) {
            b = c;
        } else {
            a = c;
        }
        
        iter++;
    }

    printf("収束した解: %f\n", c);
    printf("反復回数: %d\n", iter);

    return 0;
}
