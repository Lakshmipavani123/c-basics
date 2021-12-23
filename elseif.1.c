#include<stdio.h>
void main()

{ int time;
   scanf("%d",&time);
 if(time<=12)
  { printf("do break fast"); 
  }
  else if(time<=15)
  {printf(" eat and   sleep"); 
  }
  else if(time<= 18)
  { printf("eat snacks");
  }
  else
  { printf("sleep");
  }
}
