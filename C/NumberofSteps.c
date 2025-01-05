#include <stdio.h>
int NumberofSteps(int num){
    if (num==0)
        return 0;
    else if (num%2==0)
    {
        return 1+ NumberofSteps(num/2)
    }
    else
    {
        return 1+ NumberofSteps(num-1)
    }
}