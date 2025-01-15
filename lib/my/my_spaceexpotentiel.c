/*
** EPITECH PROJECT, 2023
** my_float.c
** File description:
** Displaying a float without printf
*/

#include <unistd.h>
#include "my.h"

int my_spchoicesuite(int i, int i2, float f2, int science)
{
    int temp = i;

    my_spaceputmanychar(i, i2, &f2);
        if (science < 10) {
            my_putstr("e+0");
        } else {
            my_putstr("e+");
        }
        my_put_nbr(science);
}

int my_spchoice(int i, int i2, float f2, int science)
{
    int temp = i;

    if (temp < 0) {
        my_putmanynegchar(i, i2, &f2);
        if (science < 10) {
            my_putstr("e+0");
        } else {
            my_putstr("e+");
        }
        my_put_nbr(science);
        return 0;
    } else {
        my_spchoicesuite(i, i2, f2, science);
        return 0;
    }
    my_otherchoice(i, i2, f2, science);
}

int my_spex(float *f, int *science2, int *i)
{
    while (*f > 10 ^ *f < -10) {
        *f = *f / 10.0;
        *science2 = *science2 + 1;
    }
    *i = (int)*f;
}

int my_spaceexpotentiel(float f, int nbr, int science)
{
    int n = 6;
    int science2 = 0;
    int i;
    float f2;
    int i2;

    my_spex(&f, &science2, &i);
    if (i == 0) {
        count0(&f, &science);
        my_spaceexpotentiel(f, 1, science);
        return 0;
    } else {
        f2 = (f - i);
        i2 = f2 * my_compute_speit(10, n);
    }
    if (nbr == 1) {
        my_otherchoice(i, i2, f2, science);
        return 0;
    }
    my_spchoice(i, i2, f2, science2);
}
