#include <stdio.h> 
#include <stdlib.h>
#include <math.h>
#include"coeffs.h"

//Defining the function for generating non uniform numbers
void nonuniform(char *str1 ,char *str2,int len)
{
  int i;
  double x,V;
  FILE *fp1,*fp2;

  fp1 = fopen(str1,"r");
  fp2 = fopen(str2,"w");
  //generate numbers
  while(fscanf(fp1,"%lf",&x)!=EOF)
  {
    x = log(1-x);
    // printf("%lf\n",x);
    V = (-2)*x;
    fprintf(fp2,"%lf\n",V);
    printf("%lf\n",V);
  }
  fclose(fp1);
  fclose(fp2);
}

double Mean ;
int  main(void) //main function begins
{

//Uniform random numbers
nonuniform("uni.dat","nonuni.dat", 1000000);
Mean = mean("nonuni.dat");
printf("Mean : %lf\n",mean("nonuni.dat"));
printf("Variance : %lf\n",var(Mean,"nonuni.dat"));


return 0;
}