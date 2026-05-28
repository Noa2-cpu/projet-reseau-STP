#include "mac.h"
#include <stdio.h>

int get_mac(const char *chaine, adresse_mac *dest)
{
    uint8_t bytes[6];

    //On test l'échec
    if(sscanf(chaine, "%hhx:%hhx:%hhx:%hhx:%hhx:%hhx", &bytes[0], &bytes[1], &bytes[2],&bytes[3], &bytes[4], &bytes[5]) != 6)
    {
        return 0;
    }

    for(int i = 0; i <= 5; i++)
    {
        dest->byte[i] = bytes[i];
    }
    return 1;
}

int mac_egales(const adresse_mac *a, const adresse_mac *b)
{
    return memcmp(a->byte, b->byte, 6) == 0;
}

void afficher_mac(const adresse_mac* mac)
{
    for(int i = 0; i <= 5; i++)
    {
        printf("%02hhx", mac->byte[i]);
        if(i < 5)
        {
            printf(":");
        }
    }
    printf("\n");
}