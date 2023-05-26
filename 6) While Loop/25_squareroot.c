#include<stdio.h>
int main()
{
    //Bisection Method`
    //Square root of 55 for eg
    // X^2-55 = 0  then X is sqrt of 55
    // For this first we need to find a number which evaluates
    // to -ve and one number which evaluates to +ve then we will decrease
    // the range and at last find the answer

    double xL=1, xR=25, xM, epsilon;
    epsilon = 0.0001;

    while(xR-xL >= epsilon){
        xM= (xL+xR)/2;
        if((xM*xM-55)>0){
            xR=xM;
        }
        else{
            xL=xM;
        }
    }
    printf("sqrt of 55 is %.4f\n",xL); // we can also write xR as answer
    return 0;
}