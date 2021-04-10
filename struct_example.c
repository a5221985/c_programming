#include <stdio.h>
#include <stdint.h>

struct CarModel {
    uint32_t carNumber;
    uint32_t carWeight;
    uint8_t carMaxSpeed;
    float carPrice;
};

int main() {
    struct CarModel carBMW = { 2021, 15000, 220, 1330 };
    struct CarModel carHonda = { .carNumber = 4031, .carWeight = 35000, .carMaxSpeed = 160, .carPrice = 1900.96 };

    printf("%u, %u, %u, %f\n", carBMW.carNumber, carBMW.carWeight, carBMW.carMaxSpeed, carBMW.carPrice);
    printf("%u, %u, %u, %f\n", carHonda.carNumber, carHonda.carWeight, carHonda.carMaxSpeed, carHonda.carPrice);
    return 0;
}
