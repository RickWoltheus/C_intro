#include <stdio.h>

int main()
{
    int getal1;
    int getal2;
    printf( "voer getal 1 in" );
    scanf( "%d", &getal1 );
    printf( "9/;getal 1 is %d\n", getal1 );

    printf( "voer getal 2 in");
    scanf("%d", &getal2);
    printf("getal 2 is %d\n", getal2);

    if (getal1 > getal2) {
        printf("getal 1 is groter dan getal 2\n");
    }
    if (getal1 < getal2) {
        printf("getal 2 is groter dan getal 1\n");
    }
    if (getal1 == getal2){
        printf("getal 1 en getal 2 zijn gelijk");
    }


    getchar();
    return 0;
}
