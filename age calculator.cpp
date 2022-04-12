#include <iostream>
using namespace std;
// function to calculate current age
void findAge(int cd, int cm, int cy, int bd, int bm, int by)
{
    // days of every month
    int month[] = { 31, 28, 31, 30, 31, 30, 31,
                        31, 30, 31, 30, 31 };

    // if birth date is greater then current birth
    if (bd > cd) {
        cd = cd + month[bm - 1];
        cm = cm - 1;
    }

    // if birth month exceeds current month
    if (bm > cm) {
        cy = cy - 1;
        cm = cm + 12;
    }
