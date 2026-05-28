#include <stdint.h>

typedef struct AdresseIP{
    uint8_t octet[4];
}AdresseIP;

void afficher_ip(const AdresseIP ip); 

AdresseIP creer_ip(uint8_t a, uint8_t b, uint8_t c, uint8_t d);

int ip_egales(const AdresseIP a, const AdresseIP b);

AdresseIP lire_ip_depuis_chaine(const char* fichier);