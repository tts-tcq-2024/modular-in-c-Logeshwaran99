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
