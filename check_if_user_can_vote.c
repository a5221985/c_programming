#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>

uint8_t MIN_AGE_TO_VOTE = 18;

static bool isAgeEnoughToVote(uint8_t age);
static void waitForKeyPress(); 

int main(void) {
    printf("Enter your age: ");
    fflush(stdout);

    uint8_t age = 0;
    scanf("%hhu", &age);

    if (isAgeEnoughToVote(age))
        printf("You can cast your vote!\n");
    else
        printf("You cannot vote!\n");

    waitForKeyPress();

    return 0;
}

static inline bool isAgeEnoughToVote(uint8_t age) {
    return age >= MIN_AGE_TO_VOTE;
}

static void waitForKeyPress() {
    printf("Press any key to exit");
    while (getchar() != '\n');
        getchar();
}
