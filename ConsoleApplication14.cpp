#include <iostream>
#include <queue>
#include "Ingredient.h"
using namespace std;

int main() {
    priority_queue<Ingredient> cooker; // черга з пріоритетом

    while (true) {
        cout << "Enter what you want to do:\n";
        cout << "1 - Add ingredient\n";
        cout << "2 - Cook a dish\n";
        cout << "0 - Exit\n";

        int choice;
        cin >> choice;

        if (choice == 0) break;

        if (choice == 1) {
            string name;
            int time;

            cout << "Enter name of ingredient: ";
            cin >> name;

            cout << "Enter time of cooking(seconds): ";
            cin >> time;

            cooker.push(Ingredient(name, time));
        }
        else if (choice == 2) {
            if (cooker.empty()) {
                cout << "No ingredients to cook!\n";
            }
            else {
                Ingredient ing = cooker.top();
                cooker.pop();

                cout << "Cooking: " << ing.name
                    << " (" << ing.cookTime << " sec)" << endl;
            }
        }
        else {
            cout << "Invalid option!\n";
        }

        cout << endl;
    }

    return 0;
}

