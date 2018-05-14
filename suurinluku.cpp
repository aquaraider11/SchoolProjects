#include "iostream"


//This function is pretty self explanatory
//it gets a number from cin, stores it in temp int, and does some error checking on it
//to confirm that it is not below zero

//TODO: Error checking for numbers above int limit, and other illegal charachters.

int requestNumsFromUser(int index, int arrSize)
{
    int tempInt = -1;
    while (tempInt < 1)
    {
        std::cout << "Fill data for slot " << index << "/" << arrSize << '\n';
        std::cin >> tempInt;

        if (tempInt < 0)
        {
            std::cout << "Value you entered is not valid: Try again!" << '\n';
            tempInt = -2;
        }
        else
        {
            return tempInt;
        }
    }
    return 0;
}

int findLargestNum(int arrSize)
{
    //Create array, of size of user input, and store it
    int numbers[arrSize];

    //fill the array by requesting numbers from user
    for (int i = 0; i < arrSize; i++) {
        numbers[i] = requestNumsFromUser(i + 1, arrSize);
        std::cout << "Array " << i+1 << " contains " << numbers[i] << '\n';
    }

    //Create integer for the largest number,
    // and go through the number array one by one to compare numbers to the currently largest one,
    // if number is larger, update the largest number
    int largestNum =0;
    for (int i = 0; i < arrSize; i++) {
        if (largestNum < numbers[i])
            largestNum = numbers[i];
    }


    return largestNum;
}

void waitForInput()
{
    int inputNumber = 0;
    while (inputNumber != 1) {
        if (inputNumber == 0)
            std::cout << "Press 1 & Return when ready to quit" << '\n';
        else
            std::cout << "That was not 1: Press 1 & Return to quit" << '\n';
        std::cin >> inputNumber;

    }
}

int main(int argc, char const *argv[]) {

    //Querry the user for array size, and save it to variable
    std::cout << "Input desired array size" << std::endl;
    int arrSize;
    std::cin >> arrSize;

    //run the "main" function and cout it's output.
    int tempInt2 = findLargestNum(arrSize);
    std::cout << "Largest of the numbers [" << tempInt2 << "]" << std::endl;

    //Wait for user to press 1, to exit the program after they have read the output.
    waitForInput();

    return 0;
}
