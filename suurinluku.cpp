#include "iostream"



int fillerFunction(int index)
{
    int tempInt = -1;
    while (tempInt < 0)
    {
        std::cout << "Fill data for slot " << index << "/10" << '\n';
        std::cin >> tempInt;
        if (tempInt < 0)
        {
        std::cout << "Value you entered is not valid: Try again!" << '\n';
        }
        else
        {
            return tempInt;
        }
    }
return 0;
}

int lolfunction()
{
    int array[10] = {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1};
    for (int i = 0; i < 10; i++) {
            array[i] = fillerFunction(i+1);
            std::cout << "array " << i+1 << " contains " << array[i] << '\n';
    }
    int largest =0;
    for (int i = 0; i < 10; i++) {
        if (largest < array[i])
        largest = array[i];
    }


    return largest;
}

int main(int argc, char const *argv[]) {
    int tempInt2 = lolfunction();
    std::cout << "Largest of the 10 [" << tempInt2 << "]" << std::endl;
    int lolint = 0;
    while (lolint != 1) {
        if (lolint == 0)
            std::cout << "Press 1 & Return when ready to quit" << '\n';
        else
            std::cout << "That was not 1 Press 1 & Return to quit" << '\n';
        std::cin >> lolint;

    }
    return 0;
}
