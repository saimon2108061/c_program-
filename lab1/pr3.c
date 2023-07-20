// area and perimeter of a triangle
#include<stdio.h>
#include<math.h>
main()
{ int a,b,c,p;
  float area,s;
printf("Enter the three sides of the triangle:");
scanf("%d%d%d",&a,&b,&c);
p=(a+b+c);
s=p/2;
area=sqrt(s*(s-a)*(s-b)*(s-c));
printf("The perimeter of the triangle is =%d\n",p);
printf("The area of the triangle is= %.2f sq. unit",area);


}
