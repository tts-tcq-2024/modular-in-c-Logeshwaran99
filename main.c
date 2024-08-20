#include "testColorCode.h"

// Define a flag to control printing the color reference manual
int printColorReferenceManual = 0;

void PrintColorReferenceManual(void) {
    if (!printColorReferenceManual) {
        return;  // Do not print if the flag is not set
    }

    char colorPairNames[MAX_COLORPAIR_NAME_CHARS];
    for (int i = 1; i <= numberOfMajorColors * numberOfMinorColors; i++) {
        ColorPair colorPair = GetColorFromPairNumber(i);
        ColorPairToString(&colorPair, colorPairNames);
        printf("%d: %s\n", i, colorPairNames);
    }
}

int main() {
    testNumberToPair(4, WHITE, BROWN);
    testNumberToPair(5, WHITE, SLATE);

    testPairToNumber(BLACK, ORANGE, 12);
    testPairToNumber(VIOLET, SLATE, 25);

    // Set the flag to 1 when you want to print the manual for testing
    printColorReferenceManual = 1;
    PrintColorReferenceManual();

    return 0;
}
