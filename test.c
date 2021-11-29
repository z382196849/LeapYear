#include<stdio.h>
#include<windows.h>

int IsLeap(int year)
{
    if(((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
    printf("%d ", year);
 
    return;
}

int main()
{
    int i = 0;
    for(i = 1000; i <= 2000; i++)
    {
	IsLeap(i);
    }
    system("pause");
    return;
}