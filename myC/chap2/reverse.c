#include<stdio.h>
int main()
{
    int ram,shyam,ajay;
    printf("Enter three age");
    scanf("%d%d%d",&ram,&shyam,&ajay);

if(ram<shyam && ram<ajay)
{
    printf("Ram is younger");
}

else if(shyam<ram && shyam<ajay)
{
    printf("Shyam is younger");
}    

else if(ajay<ram && ajay<shyam)
{
    printf("Ajay is younger");
}
return 0;
}