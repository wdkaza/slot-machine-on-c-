#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

void showbalance(double balance);
void spin_slot(double balance);
void odd_or_even();
void randomizer(int slot1, int slot2, int slot3);


int main() {
    double balance = 1000;
    double price = 10;
    int choice = 0;

    do {
        std::cout << "1. spin\n";
        std::cout << "2. odd or even\n";
        std::cout << "3. show balance\n";
        std::cout << "4. quit\n";
        std::cin >> choice;

        switch (choice) {
            case 1:
                spin_slot(balance);
                break;
            case 2:
                odd_or_even();
                break;
            case 3:
                showbalance(balance);
                break;
            case 4:
                std::cout << "Quitting the game.\n";
                break;
            default:
                std::cout << "Invalid choice \n";
                break;
        }
    } while (choice != 4);

    return 0;
}
void showbalance(double balance){
    std::cout << "your balance is: " << balance << '\n';
}

void spin_slot(double balance){
    int slot1, slot2, slot3;
    randomizer(slot1, slot2, slot3);
    std::cout << slot1 << " " << slot2 << " " << slot3 << " \n";
    if(slot1 == slot2 == slot3){
        std::cout << "you won!\n";
        balance += 100;
    }
    else{
        std::cout << "try again!\n";
    }
}
void odd_or_even(){
    // nothing right now
}
void randomizer(int slot1, int slot2, int slot3){
    srand(time(NULL));
    slot1 = rand() % 9 + 1;
	slot2 = rand() % 9 + 1;
	slot3 = rand() % 9 + 1;
}