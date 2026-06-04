#include <iostream>

namespace calculator{
    int add(int a , int b){
        return a + b;
    }

    int subtract(int a , int b = 0){
        if(b==0){
            return -a;
        }
        return a - b;
    }

    double add(double a, double b){
        return a + b;
    }

    double subtract(double a, double b){
        return a - b;
    }
    void swap(int& a, int& b) {
        int temp = a;
        a = b;
        b = temp;
    }
}

int main(){
    bool running = true;

    while (running) {
        int choice;

        std::cout << "\n=== Calculator ===\n";
        std::cout << "1. Add two integers\n";
        std::cout << "2. Subtract two integers\n";
        std::cout << "3. Add two decimals\n";
        std::cout << "4. Subtract two decimals\n";
        std::cout << "5. Swap two numbers then add them\n";
        std::cout << "0. Exit\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {

            case 1: {
                int a, b;
                std::cout << "Enter two integers: ";
                std::cin >> a >> b;

                std::cout << "Result = "
                          << calculator::add(a, b)
                          << std::endl;
                break;
            }

            case 2: {
                int a, b;
                char option;

                std::cout << "Use one number only? (y/n): ";
                std::cin >> option;

                if (option == 'y' || option == 'Y') {
                    std::cout << "Enter number: ";
                    std::cin >> a;

                    std::cout << "Result = "
                              << calculator::subtract(a)
                              << std::endl;
                }
                else {
                    std::cout << "Enter two integers: ";
                    std::cin >> a >> b;

                    std::cout << "Result = "
                              << calculator::subtract(a, b)
                              << std::endl;
                }
                break;
            }
            case 3: {
                double a, b;
                std::cout << "Enter two decimals: ";
                std::cin >> a >> b;

                std::cout << "Result = "
                          << calculator::add(a, b)
                          << std::endl;
                break;
            }

            case 4: {
                double a, b;
                std::cout << "Enter two decimals: ";
                std::cin >> a >> b;

                std::cout << "Result = "
                          << calculator::subtract(a, b)
                          << std::endl;
                break;
            }

            case 5: {
                int a, b;

                std::cout << "Enter two integers: ";
                std::cin >> a >> b;

                std::cout << "Before swap: a = "
                          << a << ", b = " << b << std::endl;

                calculator::swap(a, b);

                std::cout << "After swap: a = "
                          << a << ", b = " << b << std::endl;

                std::cout << "Sum after swap = "
                          << calculator::add(a, b)
                          << std::endl;
                break;
            }

            case 0:
                running = false;
                std::cout << "Exiting Calculator...\n";
                break;

            default:
                std::cout << "Invalid choice! Try again.\n";
        }
    }
    return 0;
}
