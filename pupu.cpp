#include "iostream"
#include <stdio.h>
#include <gmp.h>

int main(int argc, char const *argv[]) {

    mpz_t x,y,z;
    int tempvar = 0;
    a:
    std::cin >> tempvar;
    //Teach ordered to do this thing to riddiculously large numbers, 
    //and gave 1725 as example, so i made a little easter egg from it ¯\_(ツ)_/¯

    if (tempvar == 1725)
    {
        std::cout << "IHAN VITUSTI!(Kokeile 1726 ;) " << '\n';
        goto a;
    }


    mpz_init_set_str(x, "1", 10);
    mpz_init_set_str(y, "1", 10);
    mpz_init(z);
    // Calculates fibbonachi sequense using GMP library, (1+1 = 2 -> 1+2=3 -> 2+3=5 -> 3+5=... ETC) to desired number of iterations (tempvar)
    for (int i = 0; i < tempvar; i++) {
        // z = x + y
        mpz_add(z, x, y);
        // x = y
        mpz_set(x, y);
        // y = z
        mpz_set(y, z);
    }
    gmp_printf("Jäniksiä antamallasi kaudella on %Zd\n", z);
    mpz_clear(z);
    mpz_clear(x);
    mpz_clear(y);
    goto a;
    return 0;
}
