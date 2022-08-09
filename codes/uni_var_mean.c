#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "coeffs.h"

double Mean ;
int  main(void) //main function begins
{
 
//Uniform random numbers
uniform("uni.dat", 1000000);

//Gaussian random numbers
// gaussian("gau.dat", 1000000);

//Mean of uniform
Mean = mean("uni.dat");
printf("Mean :%lf\n",mean("uni.dat"));
printf("Variance :%lf\n",var(Mean,"uni.dat"));
return 0;
}
