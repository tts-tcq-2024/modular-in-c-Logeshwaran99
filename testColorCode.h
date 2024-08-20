#ifndef TESTCOLORCODE_H
#define TESTCOLORCODE_H

#include "ColorCode.h"
#include "GetColorFromPairNumber.h"
#include "GetPairNumberFromColor.h"
#include "testColorCodeReferenceManual.h"

void testNumberToPair(int pairNumber,
    enum MajorColor expectedMajor,
    enum MinorColor expectedMinor);

void testPairToNumber(
    enum MajorColor major,
    enum MinorColor minor,
    int expectedPairNumber);

#endif // TESTCOLORCODE_H
