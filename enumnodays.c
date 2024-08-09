#include<stdio.h>
enum weekdays{
    sunday=7,monday=1,tuesday,wednesday,thrusday,friday,saturday
};
int main()
{
    enum weekdays day;
    day=tuesday;
    // scanf("%d",&day);
    switch(day)
    {
         case 1:
        printf("Monday");
        break;
        
        case 2:
        printf("Tuesday");
        break;
        case 3:
        printf("Wednesday");
        break;
         case 4:
        printf("Thrusday");
        break;
        case 5:
        printf("Friday");
        break;
        case 6:
        printf("Saturday");
        break;
        
        case 7:
        printf("Sunday");
        break;
    }

}