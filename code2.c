/************************************
 * filename: code2.c
 * coder   : Afna Ayshu Jaffin
 * date    : 20.09.22
 * version : 1.0
 * description: 
 *          Write a C program that takes a string and two integers (n1, n2).
 *          Now reverse the sequence of characters of the string between n1 and n2.
Sample Date:
("abcdxyabcd", 5, 6) -> "abcdyxabcd"
("Exercises", 1, 3) -> "exercises"
 *************************************/

#include<stdio.h>
#include<string.h>
int main()
{
    char string[30];
    int n1,n2,i;
    printf("/t/tProblem\n\n");
    printf("Write a C program that takes a string and two integers (n1, n2).");
    printf("\nNow reverse the sequence of characters of the string between n1 and n2.");
    printf("\n\nENTER THE STRING : ");
    scanf("%s",&string);
    printf("ENTER 2 INTEGERS :\n");
    printf("n1 : ");
    scanf("%d",&n1);
    printf("n2 : ");
    scanf("%d",&n2);
    //hi

    //code
    char buff[30];
    int length;
    length = (n2-n1)/2;
    strcpy(buff,string);
    n1 =n1-1;
    n2=n2-1;
    for(i=0;i<=length;i++)
    {
       buff[n1] = string[n2];
       buff[n2] = string[n1];
       n1++;
       n2--;
    }

    printf("RESULT IS %s",buff);
    return 0;
}
