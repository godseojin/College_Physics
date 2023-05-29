#include <stdio.h>

int main(void)
{
    double m1 = 0.221; /*�۶��̴��� ����*/
    double m2 = 0.22;
    double d = 9.92; /*���� �� cm*/
    double dt1, dt2; /*��� �ð�*/

    double v1f[5]{}, v2f[5]{}; /*�ӷ�*/
    double p1f[5]{}, p2f[5]{}; /*���� �� ���*/
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

    printf("<<<<<<<<<< �۶��̴� 1 >>>>>>>>>>\n");
    for (int i = 0; i < 5; i++) {
        printf("\n(%d) �ӷ� : %f", i + 1, v1f[i]);
        printf("\n(%d) ���� �� ��� : %f\n", i + 1, p1f[i]);
    }

    printf("\n<<<<<<<<<< �۶��̴� 2 >>>>>>>>>>\n");
    for (int i = 0; i < 5; i++) {
        printf("\n(%d) �ӷ� : %f", i + 1, v2f[i]);
        printf("\n(%d) ���� �� ��� : %f\n", i + 1, p2f[i]);
    }

    printf("\n<<<<<<<<<< ���� �� ���� ��� >>>>>>>>>>\n");
    for (int i = 0; i < 5; i++) {
        printf("\n(%d) p1f + p2f = %f\n", i + 1, p1f[i] + p2f[i]);
    }

    printf("\n<<<<<<<<<< ���� �� ���� ������ >>>>>>>>>>\n");
    for (int i = 0; i < 5; i++) {
        printf("\n(%d) KEf = %f\n", i + 1, KEf[i]);
    }

    return 0;
}