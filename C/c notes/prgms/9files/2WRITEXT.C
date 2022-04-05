#include<stdio.h>
#include<conio.h>
main()
{     float time;
      clrscr();
      printf("enter the time/n");
      scanf("%f",&time);
      if(time<12)
      {    printf("MORNING");
      }
      else if(time<16)
      {    printf("AFTER NOON");
      }
      else if(time<21)
      {    printf("EVENING");
      }
      else if(time<24)
      {    printf("NIGHT");
      }
      else
      {    printf("INVALID TIME");
      }
      getch();
}