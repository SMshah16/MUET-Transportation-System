#include <iostream>
#include <string>
#include <map>
#include<iomanip>
using namespace std;

void setColor(const string& color) {
    if (color == "blue") cout << "\033[1;34m";  // Blue text
    else if (color == "green") cout << "\033[3;32m";  // Green text
    else if (color == "red") cout << "\033[2;31m";  // red text
    else if (color == "reset") cout << "\033[0m";  // Reset to default
}

void showTransportInfo()//menu
 {
    setColor("blue");

    cout << "\n\n";
    cout << "*********************************************************************************************************************************************************" << endl;
    cout << "*                                                                                                                                                       *" << endl;
    cout << "*                                                         WELCOME TO MUET TRANSPORTATION                                                                *" << endl;
    cout << "*                                                                                                                                                       *" << endl;
    cout << "*********************************************************************************************************************************************************" << endl;
    cout << "\n\n";

    setColor("green");
    cout << "*********************************************************************************************************************************************************" << endl;
    cout << "*                                                                                                                                                       *" << endl;
    cout << "*                                            Our transport system provides Four types of services:                                                      *" << endl;
    cout << "*                                                                                                                                                       *" << endl;
    cout << "*                                              1. Official MUET Buses (25 available buses)                                                              *" << endl;
    cout << "*                                              2. Private Shuttles (15 available shuttles)                                                              *" << endl;
    cout << "*                                              3. Feedback:                                                                                             *" << endl;
    cout << "*                                              4. Complain:                                                                                             *" << endl;
    cout << "*                                                                                                                                                       *" << endl;
    cout << "*********************************************************************************************************************************************************" << endl;
    cout << "*                                                                                                                                                       *" << endl;
    cout << "*                                           Press 'c' and Enter to continue...                                                                          *" << endl;
    cout << "*                                                                                                                                                       *" << endl;
    cout << "*********************************************************************************************************************************************************" << endl;
    cout << "\n\n";

    setColor("reset");
}

void showOptions() {
    setColor("green");
    cout << "\nPlease select an option:" << endl;
    cout << "1. Official MUET Buses" << endl;
    cout << "2. Private Shuttles" << endl;
    cout << "3. Feedback" << endl;
    cout << "4. Complain" << endl;
    cout << "Enter your choice (1 , 2 ,  3 or 4): ";
    setColor("reset");
}
void givefeedback()
{
    string rating, comment;
    
    setColor("red");
    cout << "\n--- Feedback ---" << endl;
    cout << "Please rate your experience with our transportation system (1 to 5): ";
    cin >> rating;
    
    // if someone gives rating above 5
    while (rating != "1" && rating != "2" && rating != "3" && rating != "4" && rating != "5") {
        cout << "Invalid rating. Please enter a value between 1 and 5: ";
        cin >> rating;
    }

    cin.ignore(); // Clear the newline character from the input buffer
    cout << "Please provide any additional comments or suggestions: ";
    getline(cin, comment); // Get multi-line comment
    
    // Display feedback summary
    cout << "\nThank you for your feedback!" << endl;
    cout << "Your rating: " << rating << "/5" << endl;
    cout << "Your comments: " << comment << endl;
    
    setColor("reset");

}

void getShuttleInfo() {
    string location, timing;
    setColor("red");
    map<string, string> shuttleRoutes = {
        {"Jamshoro", "S01"},
        {"Hyderabad", "S02"},
        {"Latifabad", "S03"},
        {"Qasimabad", "S04"},
        {"City Center", "S05"},
        {"Naseem Nagar", "S06"},
        {"Sindh University Society", "S07"},
        {"Saedaba", "S08"},
        {"Pathan Colony", "S09"},
        {"Tilk Charhe", "S11"},
        {"Qasim Chouk", "S12"},
        {"Phataq", "S13"},
        {"Kotri", "S14"},
        {"Resham Gali", "S15"}
    };

    
    cout << endl;
    cout << "=============================== Shuttle Routes ===============================" << endl;
    cout << left << setw(20) << "Location" << setw(10) << "Route Code" << endl;
    cout << "-------------------------------------------------------------------------------" << endl;
    for (const auto& route : shuttleRoutes) {
        cout << left << setw(20) << route.first << setw(10) << route.second << endl;
    }

    cout << "===============================================================================" << endl;
    
    cout << "\033[0m"; 
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
    // while(continueChoice!='c' && continueChoice!='C' ) 
    // {}
    if (continueChoice == 'c' || continueChoice == 'C') {
        showOptions();
        cin >> optionChoice;

        if (optionChoice == 1) 
        {
            getOfficialBusInfo();
        }
        else if (optionChoice == 2) 
        {
            getShuttleInfo();
        } 
        else if(optionChoice == 3)
        {
            givefeedback();
        }
        // else if(optionChoice == 4)
        // {
        //     givefeedback();
        // }
        else {
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

