#include <cstdio>

int main() {
    int i = 0, x = 0, tmp = 0, min = 999999999;
    for (i = 0; i <= 9; i += 1) {
        scanf("%d", &x);
        if (i == 0) {
            tmp = x;
            continue;
        }
        else {
            if (x > tmp) {
                if (min > x - tmp) {
                    min = x - tmp;
                }
            }
            if (tmp > x) {
                if (min > tmp - x) {
                    min = tmp - x;
                }

            }
        }
        tmp = x;
    }
    printf("%d",min);

    return 0;
}
