#include<stdio.h>
enum weekdays{monday=1,Tuesday,Thrusday,wednesday,Thursday, Friday, Saturday, Sunday};
int main()
{
    enum weekdays day;
    scanf("%d",&day);
    switch (day)
    {
        case 1:
        case 2:
        case 3:
        case 4:
        case 5: 
         printf("Work hard for the week. Good luck.");
      break;
       case 6:
    case 7:
      printf("Enjoy the weekend!!");
      break;
    }
    return 0;
}