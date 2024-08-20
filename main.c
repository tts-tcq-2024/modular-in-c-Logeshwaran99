#include "testColorCode.h"

int main() {
    testNumberToPair(4, WHITE, BROWN);
    testNumberToPair(5, WHITE, SLATE);

    testPairToNumber(BLACK, ORANGE, 12);
    testPairToNumber(VIOLET, SLATE, 25);

    // Set the flag to 1 when you want to print the manual for testing
    int printColorReferenceManual = 0;
    printColorReferenceManual = 1;
    PrintColorReferenceManual();

    return 0;
}
