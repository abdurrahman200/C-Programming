#include <stdio.h>
#include <stdlib.h>

int main()
{
    double sub1,sub2,sub3,sub4,sub5;
    double total,average;
    printf("Please Enter All Subject Marks : \n");
    scanf("%lf %lf %lf %lf %lf",&sub1,&sub2,&sub3,&sub4,&sub5);

    total = sub1+ sub2 + sub3 + sub4 + sub5;
    printf("Total  marks Is : %.2lf\n",total);

    average = total/5;
    printf("Average  marks Is : %.2lf\n",average);

    return 0;
}
