#include "AdresseIP.h"

AdresseIP creer_ip(uint8_t a, uint8_t b, uint8_t c, uint8_t d){
    return(AdresseIP){
        .octet[0] = a,
        .octet[1] = b,
        .octet[2] = c,
        .octet[3] = d
    }
}

void afficher_ip(const AdresseIP ip){
    printf("%d.%d.%d.%d", ip.octets[0], ip.octets[1], ip.octets[2], ip.octets[3])
}

int ip_egales(const ipAdress a, const ipAdress b){
    for(int i < ipAdress -> octet; i++)
    {
        if(a -> octet[i] != b -> octet[i])
        {
            return 0;
        }
    }
    return 1;
}

AdresseIP lire_ip_depuis_chaine(const char* chaine){
    AdresseIP ip;
    sscanf(chaine, "%d.%d.%d.%d", ip -> octet[0], ip -> octet[1], ip -> octet[2], ip -> octet[3]);
}