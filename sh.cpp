#include <iostream>
#include <string>
#include <map>
using namespace std;

void setColor(const string& color) {
    if (color == "blue") cout << "\033[1;34m";  // Blue text
    else if (color == "green") cout << "\033[1;32m";  // Green text
    else if (color == "reset") cout << "\033[0m";  // Reset to default
}

void showTransportInfo()//menu
 {
    setColor("blue");

    cout << "\n\n";
    cout << "****************************************************************************************************************************************************" << endl;
    cout << "*                                                                                                                                                  *" << endl;
    cout << "*                                                         WELCOME TO MUET TRANSPORTATION                                                           *" << endl;
    cout << "*                                                                                                                                                  *" << endl;
    cout << "****************************************************************************************************************************************************" << endl;
    cout << "\n\n";

    setColor("green");
    cout << "****************************************************************************************************************************************************" << endl;
    cout << "*                                                                                                                                                  *" << endl;
    cout << "*                                            Our transport system provides two types of services:                                                 *" << endl;
    cout << "*                                                                                                                                                  *" << endl;
    cout << "*                                              1. Official MUET Buses (25 available buses)                                                         *" << endl;
    cout << "*                                              2. Private Shuttles (15 available shuttles)                                                        *" << endl;
    cout << "*                                                                                                                                                  *" << endl;
    cout << "****************************************************************************************************************************************************" << endl;
    cout << "*                                                                                                                                                  *" << endl;
    cout << "*                                           Press 'c' and Enter to continue...                                                                     *" << endl;
    cout << "*                                                                                                                                                  *" << endl;
    cout << "****************************************************************************************************************************************************" << endl;
    cout << "\n\n";

    setColor("reset");
}

void showOptions() {
    setColor("green");
    cout << "\nPlease select an option:" << endl;
    cout << "1. Official MUET Buses" << endl;
    cout << "2. Private Shuttles" << endl;
    cout << "Enter your choice (1 or 2): ";
    setColor("reset");
}

void getShuttleInfo() {
    string location, timing;
    map<string, string> shuttleRoutes = {
        {"Jamshoro", "S101"},
        {"Hyderabad", "S102"},
        {"Latifabad", "S103"},
        {"Qasimabad", "S104"},
        {"City Center", "S105"}
    };

    cout << "\n--- Shuttle Information ---" << endl;
    cout << "Available locations: Jamshoro, Hyderabad, Latifabad, Qasimabad, City Center" << endl;
    cout << "Enter your location: ";
    cin >> location;
    cout << "Enter preferred timing (morning/evening): ";
    cin >> timing;

    if (shuttleRoutes.count(location)) {
        cout << "Based on your input, the recommended shuttle number is " << shuttleRoutes[location] << "." << endl;
    } else {
        cout << "Shuttle service is not available for this location." << endl;
    }
}

void getOfficialBusInfo() {
    string location, timing;
    map<string, string> busRoutes = {
        {"Jamshoro", "B201"},
        {"Hyderabad", "B202"},
        {"Latifabad", "B203"},
        {"Qasimabad", "B204"},
        {"City Center", "B205"}
    };

    cout << "\n--- Official Bus Information ---" << endl;
    cout << "Available locations: Jamshoro, Hyderabad, Latifabad, Qasimabad, City Center" << endl;
    cout << "Enter your location: ";
    cin >> location;
    cout << "Enter preferred timing (morning/evening): ";
    cin >> timing;

    if (busRoutes.count(location)) {
        cout << "Based on your input, the recommended bus number is " << busRoutes[location] << "." << endl;
    } else {
        cout << "Bus service is not available for this location." << endl;
    }
}

int main() {
    char continueChoice;
    int optionChoice;
    string ch;
do{
    showTransportInfo();
    cin >> continueChoice;

    if (continueChoice == 'c' || continueChoice == 'C') {
        showOptions();
        cin >> optionChoice;

        if (optionChoice == 1) {
            getOfficialBusInfo();
        } else if (optionChoice == 2) {
            getShuttleInfo();
        } else {
            cout << "Invalid option selected. Please restart the program." << endl;
        }
    } else {
        cout << "Program ended. Please run again to continue." << endl;
    }
    cout<<"\n yes or no :";
    cin>>ch;
    
}
  while(ch!="no");
    return 0;
}

