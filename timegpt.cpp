#include <iostream>
using namespace std;

int main() {
    char m; /* m  = meridiem */
    int start_hour, start_min, start_sec;
    int end_hour, end_min, end_sec;
    int total_time_spend = 0;
    
    cout << "Enter the starting time (hours, minutes, seconds): " << endl;
    cin >> start_hour >> start_min >> start_sec;

    cout << "Enter the ending time (hours, minutes, seconds): " << endl;
    cin >> end_hour >> end_min >> end_sec;

    int start_time_in_sec = start_hour * 3600 + start_min * 60 + start_sec;
    int end_time_in_sec = end_hour * 3600 + end_min * 60 + end_sec;
    int total_time_in_sec = end_time_in_sec - start_time_in_sec;

    if (total_time_in_sec < 0) {
        cout << "Enter the meridiem (for AM press a, for PM press p): " << endl;
        cin >> m;
        
        if (m == 'a') {
            total_time_spend = total_time_in_sec + 12 * 3600;
        } else if (m == 'p') {
            total_time_spend = total_time_in_sec + 24 * 3600;
        } else {
            cout << "Please enter a valid instruction." << endl;
            return 0; // exit program due to invalid input
        }
    } else {
        total_time_spend = total_time_in_sec;
    }

    int total_hour_spend = total_time_spend / 3600;
    if (total_time_spend % 3600 > 0) {
        total_hour_spend++;
    }

    int charge = 0;
    if (total_hour_spend == 1) {
        charge += 20;
    } else if (total_hour_spend == 2) {
        charge += 35;
    } else if (total_hour_spend > 2) {
        charge = 35 + (total_hour_spend - 2) * 10;
    }

    cout << "Client had used service for " << total_hour_spend << " hours." << endl;
    cout << "Client is charged: Rs." << charge << endl;

    return 0;
}