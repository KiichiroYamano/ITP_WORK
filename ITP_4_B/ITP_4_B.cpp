#include<cstdio>

int main(){

    double r,area,circumference;

    scanf("%lf", &r);
    area = r * r * 3.14159265359;
    circumference = 2.0 * r * 3.14159265359;
    printf("%lf %lf", area, circumference);

    return 0;
}

