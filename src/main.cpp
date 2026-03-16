#include <iostream>
#include <ctime>

int main() {
    int year, month, day = 0;

    while(true) {
        std::cout << "Enter birth year: ";
        std::cin >> year;

        std::cout << "Enter birth month: ";
        std::cin >> month;

        std::cout << "Enter birth day: ";
        std::cin >> day;

        if(year < 0 || month < 0 || month > 12 || day < 0 || day > 31) {
            std::cout << "Invalid Year or Month or Day.\n";
            continue;
        }
        else {
            break;
        }
    }

    std::tm birth{};
    birth.tm_year = year - 1900;
    birth.tm_mon = month - 1;
    birth.tm_mday = day;

    std::time_t birth_time = std::mktime(&birth);
    std::time_t now = std::time(nullptr);

    double age_seconds = difftime(now, birth_time);
    int age_years = age_seconds / (365.2425 * 86400);
    int age_months = age_seconds / (30.44 * 86400);
    int age_days = age_seconds / 86400;

    std::cout << "Age:\n";
    std::cout << "Years: " << age_years << '\n';
    std::cout << "Months: " << age_months << '\n';
    std::cout << "Days: " << age_days << '\n';
    
    std::cin.get();
    std::cin.get();
    return  0;
}