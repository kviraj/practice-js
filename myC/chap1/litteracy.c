#include <stdio.h>
#include <stdlib.h>

int main()
{

    float men,women,total=80000,totalit,litmen,litwomen,illit,illitwomen;
    float illitmen;
    
    men=(52/100.0)*total;
    printf("Men: %f\n",men);

    women=total-men;
    printf("Women: %f\n",women);

    totalit=(48.0/100.0)*80000;
    printf("Totalit: %f\n",totalit);

    litmen=(35.0/100)*80000;
    printf("litmen: %f\n",litmen);

    litwomen=totalit-litmen;
    printf("litwomen: %f\n",litwomen);

    illit=total-totalit;
    printf("illit: %f\n",illit);

    illitmen=men-litmen;
    printf("IllitMen: %f\n",illitmen);

    illitwomen=women-litwomen;
    printf("illiterate women: %f\n",illitwomen);

    return 0;
}














