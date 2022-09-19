/************************************
 * filename: code1.c
 * coder : Afna Ayshu Jaffin
 * date  : 19.09.22
 * version : 1.0
 * description: Write a C program that takes n number of positive integers. 
 *              Find the integer that appears the least number of times among
 *              the said integers. If there are multiple such integers, select
 *              the smallest one.
 *************************************/
#include <stdio.h>
int main(){
    int n,i,j,k;
    int arr[10],c[10],last[10];
    int count =0;
    printf("Problem\nWrite a C program that takes n number of positive integers.");
    printf("\nFind the integer that appears the least number of times among the ");    
    printf("\nsaid integers. If there are multiple such integers,\nselect the smallest one.");       
    printf("\n\nEnter the no of integers : ");
    scanf("%d", &n);
    printf("Enter the %d positive integers: \n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    
    //code main

    int final[10];
    
    for(i=0,k=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                count++;
            }
        }
        c[i]= count;
        if(c[i]==1)
        {
          final[k]=arr[i];
          k++;
        }
        count=0;
    }
    if(k!=0)
    {
    int minimum;
    minimum = final[0];

    for(i=1;i<k;i++)
    {
      if(final[i]<minimum)
      {
        minimum = final[i];
      }
    }
    printf("The answer is %d ", minimum);
    }
    else
    {
        printf("no answer : %d",arr[1]);
    }

return 0;
}

