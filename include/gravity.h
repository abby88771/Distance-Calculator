#ifndef _STDIO_H_
#define _STDIO_H_
#ifndef _MATH_H_
#define _MATH_H_
typedef void(G_function)(double,double,double);// x,y
typedef void(T_function)(double,double);// t
typedef struct gravity{
    double v;//Velocity
    double a;//Angle
    double t;//Time
}Gravity;

void x_distance(double,double,double);//Function(x)
void y_distance(double,double,double);//Function(y)
void t_time(double,double);//Function(t)-Landing time
double total(double v,double a,double t,G_function x, G_function y,T_function t1);//CallbackFunction
#endif
#endif