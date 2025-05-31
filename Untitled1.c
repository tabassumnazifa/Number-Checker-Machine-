
//NUMBER CHECKER MACHINE LOGIC MADE BY USUING C PROGRAM LANGUAGE.
/*It includes different loops like for,while,goto statement,condition statements like simple if,if..else,switch case,
library function stdio.h,math.h,user defined function with parameter without return type and with parameter with return
type*/
#include<stdio.h>
#include<math.h>
#include<conio.h>
void peli();
void mag();
void sun();
void adam();
void duck();
void prime();
void aut();
void str();
void arm();
int cou();
void strn();
int cou(int x)
{
 int d,i;
 for (i=x;i!=0;i=i/10)
 {
     d++;
 }
 return d;
}
strn(int x)
{
    int d,c,r,i,f=0;
    for(d=2;d<=x-1;d++)
    {
      if(x%d!=0)
      {
          r=x%10;
          for(c=2;c<=r-1;c++)
          {
              if(r%c==0)
              {
                  f++;
                  break;
              }
          }
      }
    }
    if(f==0)
    {
        printf("Strange Number.");
    }
    else
    {
        printf("Not A Strange Number.");
    }
}

arm(int x)
{
   int i,d=0,s=0,j,r,p,n;
    n=cou(x);
   for(j=x;j!=0;j=j/10)
   {
       r=j%10;
       p=pow(r,n);
       s=s+p;
   }
   if(s==x)
   {
       printf("Armstrong Number.");
   }
   else
   {

       printf("Not An Armstrong Number.");
   }
}
str(int x)
{
    int i,f,t,r,s=0;
    for(i=x;i!=0;i=i/10)
    {
        r=i%10;
        f=1;
        for(t=1;t<=r;t++)
        {
            f=f*t;
        }
        s=s+f;
    }
    if(s==x)
    {
        printf("Strong Number.");
    }
    else
    {
         printf("Not A Strong Number.");
    }
}
aut(int x)
{
    int d=0,i,s,nn,n,p;
   p=cou(x);
    n=pow(10,p);
    s=x*x;
    nn=s%n;
    if(nn=x)
    {
        printf("Automorphic Number.");
    }
    else
    {
         printf("Not An Automorphic Number.");
    }
}
prime(int x)
{
    int d,f=0;
    for(d=2;d<=x-1;d++)
    {
        if(x%d==0)
        {
            f++;
            break;
        }
    }
    if(f>0)
    {
        printf("Not A Prime Number.");
    }
    else
    {
         printf("Prime Number.");
    }
}
duck(int x)
{
    int r,i,f=0;
    for(i=x;i!=0;i=i/10)
    {
        r=i%10;
        if(r==0)
        {
            f++;
            break;
        }
    }
    if(f==1)
    {
        printf("Duck Number.");
    }
    else
    {
         printf("Not A Duck Number.");
    }
}
adam(int x)
{
    int s,i,rev=0,ns,nrev=0,nr,r;
    s=x*x;
    for(i=x;i!=0;i=i/10)
    {
        r=i%10;
        rev=rev*10+r;
    }
    ns=rev*rev;
    while(ns>0)
    {
        nr=ns%10;
        nrev=nrev*10+nr;
        ns=ns/10;
    }
    if(nrev==s)
    {
        printf("Adam Number.");
    }
    else
    {
        printf("Not An Adam Number.");
    }
}
sun(int x)
{
   float r;
   r=sqrt(x+1);
   if((int)r==r)
   {
       printf("Sunny Number.");
   }
   else
   {
        printf("Not A Sunny Number.");
   }
}
mag(int x)
{
    int s=0,r,sr,sum=0;
    while(x>0)
    {
       r=x%10;
       s=s+r;
       x=x/10;
    }
    while(s>0)
    {
        sr=s%10;
        sum=sum+sr;
        s=s/10;
    }
    if(sum==1)
    {
        printf("Magic Number.");
    }
    else
    {
         printf("Not A Magic Number.");
    }
}
peli(int x)
{
    int rev=0,r,i;
    for(i=x;i>0;i=i/10)
    {
        r=i%10;
        rev=rev*10+r;
    }
    if(rev==x)
    {
        printf("Pelindrome Number.");
    }
    else
    {
         printf("Not Pelindrome Number.");
    }
}
main()
{
   int n;
   int p;
   printf("\n\t\tWELCOME\t\t TO\t Number\t\t Checker!!\t\n");
   printf("\n\tInput any number and compare with the Checker :))\n");
   start:
   printf("\nEnter A Number:\t");
    scanf("%d",&n);
    printf("\nPress 1 for MAGIC NUMBER.\n");
    printf("Press 2 for PRIME NUMBER.\n");
    printf("Press 3 for SUNNY NUMBER.\n");
    printf("Press 4 for PELINDROME NUMBER.\n");
    printf("Press 5 for STRANGE NUMBER.\n");
    printf("Press 6 for ADAM NUMBER.\n");
    printf("Press 7 for STRONG NUMBER.\n");
    printf("Press 8 for ARMSTRONG NUMBER.\n");
    printf("Press 9 for DUCK NUMBER.\n");
    printf("Press 10 for AUTOMORPHIC NUMBER.\n");
    printf("Press 0 for START THE MAIN MANU AGAIN.\n");
nazifa:
printf("\nEnter any rank for checking the number's type:\t");
       scanf("%d",&p);
switch(p)
    {
    case 1:
    mag(n);
    break;
    case 2:
    prime(n);
    break;
    case 3:
    sun(n);
    break;
    case 4:
    peli(n);
    break;
    case 5:
    strn(n);
    break;
    case 6:
    adam(n);
    break;
    case 7:
    str(n);
    break;
    case 8:
    arm(n);
    break;
    case 9:
    duck(n);
    break;
    case 10:
    aut(n);
    break;
    case 0:
    goto start;
    default:
    printf("\nThis Number is not valid for my Number Checker!!!");
    }
goto nazifa;
getch();

}
