/* #include <stdio.h>
int main(){
  int year;
printf("enter year");
scanf("%d",&year);
if (year%4==0 || year %400==0){
printf("leap year");
}
else if (year %100==0){
printf("0");}
return 0;}*/
#include <stdio.h>

int main()
{
int leap_year = 1900;

// Correct Ternary Syntax: (condition) ? (if true) : (if false);
 (leap_year % 4 == 0 &&( leap_year % 400 == 0 ||leap_year % 100 != 0))
 ? printf("leap year")
: printf("not leap year");

return 0;
}
