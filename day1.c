/*c program to convert total days to years,months and days
created on 25.01.2023 Version 1.0
code by Afna Ayshu Jaffin*/
#include<stdio.h>
int main()
{
    int days=0,yr=0,yrmod=0,month=0;
    printf("\t\t--Days to Years,months and Days--\n\n");
    printf("1 year = 365 days -- 1 months = 30 Days\n");
    printf("\tENTER THE NO. OF DAYS : ");
    scanf("%d",&days);
    if(days>=365)
    {
     yr = days/365;
     yrmod =days%365;
     month = yrmod/30;
     days = month%30;
    }
    else if(days<365 && days>=30)
    {
     month = days/30;
     days = days%30;
    }
    else
    {
        days = days;
    }
    printf("\n%d YEAR(S) %d MONTH(S) %d DAY(S)",yr,month,days);
    return 0;
}
