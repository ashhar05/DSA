#include <stdio.h>
int main()
{
int m,phy,chem,comp,bio;
float per;
printf("enter the marks of all the subjects at once\n");
scanf("%d%d%d%d%d",&m,&phy,&chem,&comp,&bio);
per=((phy+chem+bio+comp+m)/500.0)*100;
if(per>100 || per<0)
printf("Invalid choice");
else
{
if(per>=90)
{
    printf("excellent marks your grade is A and your percentage =%f",per);
}
else if(per>=80&&per<90)
{
    printf("YOU HSVE GOT GOOD MARKS GRADE= B AND PERCENTAGE=%f",per);
}
else if(per>=70&&per<80)
{
    printf("Your Percentage is=%f",per);
}
else if(per>=60&&per<70)
{
    printf("Your Percentage is=%f",per);
}
else if(per<30)
{
    printf("YOU FAILED NO NEED FOR PERCENTAGE");
}
}
return 0;
}