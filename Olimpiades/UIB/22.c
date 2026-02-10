#include <stdio.h>
#include <math.h>

int main(void) {
    int n;
    if (scanf("%d", &n) != 1) return 0;

    for (int i = 0; i < n; i++) {
        long long h, d;
        if (scanf("%lld %lld", &h, &d) != 2) return 0;

        long long ans = llround(hypot((double)h, (double)d));
        printf("%lld\n", ans);
    }
    return 0;
}
