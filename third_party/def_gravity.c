#include <stdio.h>
#include <math.h>
#include "gravity.h"

// Put implement to this file!
double total(double v, double a, double t, G_function x, G_function y, T_function t1)
{
    x(v, a, t); // Call function x_distance()
    y(v, a, t); // Call function y_distance()
    t1(v, a);   // Call function t_time()
    return 0;
}
void t_time(double v, double a)
{
    double t = 0;
    t = 2 * v * sin(a / 57.295) / 9.81;
    printf("landing time(t)= %f sec\n", t);
}
void x_distance(double v, double a, double t)
{
    double x = 0;
    double t_land = 0;
    t_land = 2 * v * sin(a / 57.295) / 9.81;
    if (t > t_land)
    {
        t = t_land;
        x = v * cos(a / 57.295) * t;
        printf("x=%f (m)(has landed)\n", x);
    }
    else
    {
        x = v * cos(a / 57.295) * t;
        printf("x=%f (m)\n", x);
    }
}
void y_distance(double v, double a, double t)
{
    double y = 0;
    double v1 = 0;
    double v2 = 0;
    v1 = v * sin(a / 57.295);
    v2 = v1 - 9.81 * t; // v=v0+at;
    y = ((v1 * v1) - (v2 * v2)) / (2 * 9.81);
    if (y < 0)
    {
        y = 0;
        printf("y=%f (m) (has landed)\n", y);
    }
    else
        printf("y=%f (m)\n", y);
}