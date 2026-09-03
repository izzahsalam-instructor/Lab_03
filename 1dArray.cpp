#include <iostream>
using namespace std;

int main() {
    // Store 5 days of temperature
    int temp[5] = {72, 75, 68, 70, 74};
    
    cout << "Weather Report:\n";
    for(int i = 0; i < 5; i++) {
        cout << "Day " << i+1 << ": " << temp[i] << "°F\n";
    }
    
    // Find hottest day
    int hottest = temp[0];
    for(int i = 1; i < 5; i++) {
        if(temp[i] > hottest) {
            hottest = temp[i];
        }
    }
    cout << "\nHottest: " << hottest << "°F";
    
    return 0;
}
