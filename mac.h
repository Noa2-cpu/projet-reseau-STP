#include <stdio.h>
#include <stdint.h>
#include <string.h>

typedef struct adresse_mac
{
    uint8_t byte[6];
} adresse_mac;

int getMac(const char *chaine, adresse_mac *dest);

int mac_egales(const adresse_mac *a, const adresse_mac *b);

void afficher_mac(const adresse_mac* mac);