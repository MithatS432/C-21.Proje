// main.c
#include <stdio.h>

// Makro tan�m�
#define PI 3.14159
#define DEBUG 1

// Ko�ullu derleme: DEBUG a��k ise log yaz
#ifdef DEBUG
    #define LOG(x) printf("LOG: %s\n", x)
#else
    #define LOG(x)
#endif

int main() {
    double radius = 5.0;
    double area = PI * radius * radius;

    LOG("Alan hesaplandi.");

    printf("Yaricapi %.2f olan dairenin alani: %.2f\n", radius, area);

    return 0;
}
