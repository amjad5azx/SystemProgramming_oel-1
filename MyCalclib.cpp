#ifndef MYCALCLIB_C_
#define _MYCALCLIB_C_
#include "MyCalclib.h" 
double Tax(double amount){
    double tax=0;
    if(amount<1000){
        tax=amount*0.10;
    }
    else if(amount<10000){
        tax=amount*0.20;
    }
    else if(amount<100000){
        tax=amount*0.30;
    }
    else{
        tax=amount*0.40;
    }
    return tax;
}
#endif