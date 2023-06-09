#include "Driver.h"

int main() {
    Display display;
    string input;

    while (true) {
        cout << display.tick();
        cin >> input;
    }
    return 0;
}