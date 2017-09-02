//Hello This is my Program :3

#include <iostream>

void clear_screen()
{
#ifdef WINDOWS
        std::system ( "CLS" );
#else
        // Assume POSIX
        std::system ( "clear" );
#endif
}

float distanceBeforeTrip = -1;
float distanceAfterTrip = -1;
float usedFuel = -1;
float usedFuelInGallons = 0;
bool stepIsNotComplete = true;
float distanceTraveled = 0;
float distanceTraveledinMails = 0;
float fuelPerMail = 0;
float fuelPer100Mail = 0;
float fuelPerKm = 0;
float fuelPer100Km = 0;


void askKilometers()
{
    while (stepIsNotComplete)
    {
        if (distanceBeforeTrip == -1){
            std::cout << "Input Travel Meter reading before trip"  << '\n';
            std::cin >> distanceBeforeTrip;
        }
        else if (distanceAfterTrip == -1){
            std::cout << "Travel Meter reading before trip is [" << distanceBeforeTrip  << "]" << std::endl;
            std::cout << "Input Travel Meter reading after trip" << '\n';
            std::cin >> distanceAfterTrip;
        }
        else if (usedFuel == -1)
        {
            std::cout << "Travel Meter reading before trip is [" << distanceBeforeTrip  << "]" << std::endl;
            std::cout << "Travel Meter reading after trip is  [" << distanceAfterTrip  << "]" << std::endl;
            std::cout << "Input Gasoline consumed during trip" << '\n';
            std::cin >> usedFuel;
            stepIsNotComplete = false;

        }
        clear_screen();
    }
    std::cout << "Travel Meter reading before trip is [" << distanceBeforeTrip  << "]" << std::endl;
    std::cout << "Travel Meter reading after trip is  [" << distanceAfterTrip  << "]" << std::endl;
    std::cout << "Gasoline consumed during trip is    [" << usedFuel  << "]" << std::endl;
}

void calculateStuff()
{
    distanceTraveled = distanceAfterTrip - distanceBeforeTrip;
    fuelPerKm = usedFuel / distanceTraveled;
    fuelPer100Km = fuelPerKm * 100;

    //Now convert to mails and gallons values get from google, not from dock, so might not be exact identical.

    usedFuelInGallons = usedFuel * 0.264172;
    distanceTraveledinMails = distanceTraveled * 0.621371;
    fuelPerMail = usedFuelInGallons / distanceTraveledinMails;
    fuelPer100Mail = fuelPerMail * 100;

}
void printStuff()
{
    std::cout << "\n\n\n";

    std::cout << "Distance traveled;                                        Km/Miles | [" << distanceTraveled << "/" << distanceTraveledinMails << "]" << std::endl;
    std::cout << "Fuel consumed per unit;           Liters per Km / Gallons per Mile | [" << fuelPerKm << "/" << fuelPerMail << "]" << std::endl;
    std::cout << "Fuel consumed per 100 unit; Liters per 100Km / Gallons per 100Mile | [" << fuelPer100Km << "/" << fuelPer100Mail  << "]" << std::endl;
    std::cout << "\n\n\n";


}

int main(int argc, char const *argv[]) {

    askKilometers();
    calculateStuff();
    printStuff();

    int lolint = 0;
    while (lolint != 1) {
        if (lolint == 0)
            std::cout << "Press 1 & Return when ready to quit" << '\n';
        else
            std::cout << "That was not 1 Press 1 & Return to quit" << '\n';
        std::cin >> lolint;
        clear_screen();
    }
    return 0;
}
