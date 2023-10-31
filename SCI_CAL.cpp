#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int choice;
    double num1, num2, result;

    cout << "Simple Scientific Calculator" << endl;
    cout << "---------------------------" << endl;

    while (true) {
        cout << "Options:" << endl;
        cout << "1. Addition" << endl;
        cout << "2. Subtraction" << endl;
        cout << "3. Multiplication" << endl;
        cout << "4. Division" << endl;
        cout << "5. Square Root" << endl;
        cout << "6. Power" << endl;
        cout << "7. Quit" << endl;
        cout << "Enter your choice (1-7): ";
        cin >> choice;

        if (choice == 7) {
            cout << "Calculator exiting. Goodbye!" << endl;
            break;
        }

        if (choice >= 1 && choice <= 6) {
            cout << "Enter first number: ";
            cin >> num1;

            if (choice != 5 && choice != 7) {
                cout << "Enter second number: ";
                cin >> num2;
            }

            switch (choice) {
                case 1:
                    result = num1 + num2;
                    break;
                case 2:
                    result = num1 - num2;
                    break;
                case 3:
                    result = num1 * num2;
                    break;
                case 4:
                    if (num2 == 0) {
                        cout << "Error: Division by zero is not allowed." << endl;
                        continue;
                    }
                    result = num1 / num2;
                    break;
                case 5:
                    if (num1 < 0) {
                        cout << "Error: Square root of a negative number is not allowed." << endl;
                        continue;
                    }
                    result = sqrt(num1);
                    break;
                case 6:
                    result = pow(num1, num2);
                    break;
                default:
                    cout << "Invalid choice. Please enter a valid option (1-7)." << endl;
                    continue;
            }

            cout << "Result: " << result << endl;
        } else {
            cout << "Invalid choice. Please enter a valid option (1-7)." << endl;
        }
    }

    return 0;
}
