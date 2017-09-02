#include "iostream"
#include <stdio.h>
#include <gmp.h>

int main(int argc, char const *argv[]) {

    mpz_t x,y,z;
    int tempvar = 0;
    a:std::cin >> tempvar;
    if (tempvar == 1725)
    {
        std::cout << "IHAN VITUSTI!(Kokeile 1726 ;) " << '\n';
        goto a;
    }


    mpz_init_set_str(x, "1", 10);
    mpz_init_set_str(y, "1", 10);
    mpz_init(z);
    for (int i = 0; i < tempvar; i++) {
        mpz_add(z, x, y);
        mpz_set(x, y);
        mpz_set(y, z);

        //std::cout << "Jäniksiä antamallasi kaudella on " << '\n';

    }
    gmp_printf("Jäniksiä antamallasi kaudella on %Zd\n", z);
    mpz_clear(z);
    mpz_clear(x);
    mpz_clear(y);
    goto a;
    return 0;
}
