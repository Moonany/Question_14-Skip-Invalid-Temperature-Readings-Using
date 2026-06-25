#include <iostream>
using namespace std;

int main() {
    double temp;           // Each temperature reading
    double sum        = 0.0; // Accumulates sum of valid readings
    int    validCount = 0;   // Counts valid readings only
    double average;          // Final average of valid readings

    // Programme header
    cout << "========================================" << endl;
    cout << "  Temperature Readings Analyser         " << endl;
    cout << "========================================" << endl;
    cout << "Invalid readings: below 0 degrees C" << endl;
    cout << "----------------------------------------" << endl;

    // for loop: accept exactly 10 temperature readings
    for (int i = 1; i <= 10; i++) {
        cout << "Enter temperature reading " << i << " (C): ";
        cin >> temp;

        // if: check for invalid reading
        if (temp < 0) {
            cout << "  --> Invalid reading (" << temp
                 << " C). Skipped." << endl;
            continue;    // skip rest of loop body; go to next iteration
        }

        // Only reached for valid readings (temp >= 0)
        sum += temp;
        validCount++;
        cout << "  --> Valid reading accepted: " << temp << " C" << endl;
    }

    // After loop: compute and display average
    cout << "----------------------------------------" << endl;
    cout << "RESULTS:" << endl;
    cout << "Valid readings:   " << validCount << endl;
    cout << "Invalid readings: " << (10 - validCount) << endl;

    if (validCount > 0) {
        average = sum / validCount;
        cout << "Sum of valid readings: " << sum << " C" << endl;
        cout << "Average temperature:   " << average << " C" << endl;
    }
    else {
        cout << "No valid readings entered. Cannot calculate average." << endl;
    }

    cout << "========================================" << endl;
    return 0;
}
