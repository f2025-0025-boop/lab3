#include <iostream>
using namespace std;

int main() {
    int totalSeconds = 4564;
    int minutes, seconds;

    minutes = totalSeconds / 60;     // divide by 60 to get minutes
    seconds = totalSeconds % 60;     // remainder gives leftover seconds

    cout << "Total seconds: " << totalSeconds << endl;
    cout << "Equivalent to: " << minutes << " minutes and " << seconds << " seconds" << endl;

    return 0;
}
