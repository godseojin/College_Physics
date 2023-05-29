#include <stdio.h>

int main(void)
{
    double m1 = 0.221; /*글라이더의 질량*/
    double m2 = 0.22;
    double d = 9.92; /*날개 폭 cm*/
    double dt1, dt2; /*통과 시간*/

    double v1f[5]{}, v2f[5]{}; /*속력*/
    double p1f[5]{}, p2f[5]{}; /*폭발 후 운동량*/
    double KEf[5]{};

    for (int i = 0; i < 5; i++) {
        scanf("%lf", &dt1);
        v1f[i] = d / 100 / dt1;
        p1f[i] = m1 * v1f[i];
    }

    for (int i = 0; i < 5; i++) {
        scanf("%lf", &dt2);
        v2f[i] = d / 100 / dt2;
        p2f[i] = m2 * v2f[i];
    }

    for (int i = 0; i < 5; i++) {
        KEf[i] = (p1f[i] * v1f[i] + p2f[i] * v2f[i]) / 2;
    }

    printf("<<<<<<<<<< 글라이더 1 >>>>>>>>>>\n");
    for (int i = 0; i < 5; i++) {
        printf("\n(%d) 속력 : %f", i + 1, v1f[i]);
        printf("\n(%d) 폭발 후 운동량 : %f\n", i + 1, p1f[i]);
    }

    printf("\n<<<<<<<<<< 글라이더 2 >>>>>>>>>>\n");
    for (int i = 0; i < 5; i++) {
        printf("\n(%d) 속력 : %f", i + 1, v2f[i]);
        printf("\n(%d) 폭발 후 운동량 : %f\n", i + 1, p2f[i]);
    }

    printf("\n<<<<<<<<<< 폭발 후 계의 운동량 >>>>>>>>>>\n");
    for (int i = 0; i < 5; i++) {
        printf("\n(%d) p1f + p2f = %f\n", i + 1, p1f[i] + p2f[i]);
    }

    printf("\n<<<<<<<<<< 폭발 후 계의 에너지 >>>>>>>>>>\n");
    for (int i = 0; i < 5; i++) {
        printf("\n(%d) KEf = %f\n", i + 1, KEf[i]);
    }

    return 0;
}