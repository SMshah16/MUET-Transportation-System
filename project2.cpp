#include <iostream>
#include<windows.h>
#include <string>
#include <unordered_map>
#include<map>
#include <iomanip>
using namespace std;
const string RESET = "\033[0m";
const string GREEN = "\033[32m";
const string YELLOW = "\033[33m";
const string BLUE = "\033[34m";

void setColor(const string& color) {
    if (color == "blue") cout << "\033[1;34m";  // Blue text
    if (color == "yellow") cout << "\033[1;33m";  // Blue text
    else if (color == "green") cout << "\033[3;32m";  // Green text
    else if (color == "red") cout << "\033[2;31m";  // red text
    else if (color == "reset") cout << "\033[0m";  // Reset to default
}
void username_pass() {
    unordered_map<string, string> users = {
        {"sayedmuzamil.123", "s123"},
        {"shabeehhaider55", "s456"},
        {"saadmemon34", "s789"},
        {"rahim.112", "s101112"}
    };

    string username, password;
    bool accessGranted = false;

    
        
        cout <<GREEN<<"============================================================================================================================================================================" << endl;
		Sleep(500);
        cout << "============================================================================================================================================================================" <<RESET<< endl;
		Sleep(500);
        cout <<YELLOW<< "\n                                                                   Please enter your login credentials below:\n" <<RESET<< endl;
		Sleep(500);
	   cout <<GREEN<< "============================================================================================================================================================================" << RESET<<endl;
	   Sleep(500);
        cout <<YELLOW<< "                                                                       WELCOME TO THE MUET TRANSPORT SYSTEM  " <<RESET<< endl;
		Sleep(500);
        cout << GREEN<<  "============================================================================================================================================================================" <<RESET<< endl;
		Sleep(500);
        cout<<YELLOW << "\n                                                           To access the system, please enter your username and password.\n" <<RESET << endl;

        do{
        cout <<YELLOW<< "Username: "<<RESET;
        cin >> username;
        cout <<YELLOW<< "Password: ";
        cin >> password;
      
        
        cout << "\nVerifying";
        for (int i = 0; i < 10; i++) {
            cout << ".";
            Sleep(100); 
        }
        Sleep(500);
          system("CLS");
        
        if (users.find(username) != users.end() && users[username] == password) {
            cout << "=========================================================================================================================================================" << endl;
            cout << "                                                                 Access Granted! Welcome!           " << endl;
            cout << "=========================================================================================================================================================" << endl;
            accessGranted = true;
            
        } else {
           cout << "=========================================================================================================================================================" << endl;
            cout << "                                                                 Access Denied! Try Again          " << endl;
          cout << "=========================================================================================================================================================" << endl;
            Sleep(1000); 
        }
    } while (!accessGranted); 
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
 
    cout << YELLOW << "============================================================================================================================================================================" << RESET << endl;
    cout << YELLOW << "                                                                       MUET TRANSPORT SYSTEM           " << RESET << endl;
    cout << YELLOW << "============================================================================================================================================================================" << RESET << endl;

  
    cout << GREEN << "\n       Main Menu: Please Select an Option\n" << RESET << endl;

 
    cout << BLUE << "1. Official MUET Buses" << RESET << endl;
    cout << GREEN << "   - Safe and convenient transport directly managed by MUET." << RESET << endl;


    cout << BLUE << "2. Private Shuttles" << RESET << endl;
    cout << GREEN << "   - Flexible routes and timing, managed by private operators." << RESET << endl;

    cout << BLUE << "3. Feedback" << RESET << endl;
    cout << GREEN << "   - Share your experience to help us improve our service." << RESET << endl;


    cout << BLUE << "4. Complain" << RESET << endl;
    cout << GREEN << "   - Report issues or concerns with our transportation services." << RESET << endl;


    cout << YELLOW << "\n============================================================================================================================================================================" << RESET << endl;
    cout << YELLOW << "Enter your choice (1, 2, 3, or 4): " << RESET;
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

    cin.ignore(); // yeh faltu stored character ko ignore karneke liye
    cout << "Please provide any additional comments or suggestions: ";
    getline(cin, comment); 
    
    cout << "\nThank you for your feedback!" << endl;
    cout << "Your rating: " << rating << "/5" << endl;
    cout << "Your comments: " << comment << endl;
    system("CLS");
    setColor("reset");

}

void getShuttleInfo() {
    setColor("blue");
    string location, timing;
    map<pair<string, string> , string> shuttleRoute = {
        {{"jamshoro","morning"} ,"S01"},
        {{"jamshoro","evening"} ,"S01E"},
        {{"jyderabad","morning"}, "S02"},
        {{"jyderabad","evening"} ,"S02E"},
        {{"latifabad","morning"}, "S03"},
        {{"latifabad","evening"} ,"S03E"},
        {{"qasimabad","morning"} ,"S04"},
        {{"qasimabad","evening"} ,"S04E"},
        {{"naseem nagar","morning"}, "S05"},
        {{"naseem nagar","evening"} ,"S05E"},
        {{"saedaba","morning"} , "S06"},
        {{"saedaba","evening"} ,"S06E"},
        {{"pathan colony","morning"} ,"S07"},
        {{"pathan colony","evening"}, "S07E"},
        {{"qasim chouk","morning"} ,"S08"},
        {{"qasim chouk","evening"} ,"S08E"},
        {{"tilk charhe","morning"} ,"S09"},
        {{"tilk charhe","evening"} ,"S09E"},
      
    };
     
    cout << endl;
    cout << "\033[1m"<< "================================================= Official Shuttle Information ===============================================" <<"\033[0m" << endl;
    cout <<GREEN<< left << setw(20) << "Location" << setw(15) <<"Timing" << setw(10) <<"Route Code" << RESET<<endl;
     cout << "\033[1m"<< "-------------------------------------------------------------------------------------------" << endl;
    for (const auto& route : shuttleRoute ) {
        cout << left << setw(20) << route.first.first << setw(15) << route.first.second << setw(10) << route.second << right << setw(35) <<"-"<<"\033[0m"<<endl;
    }

    cout << "==========================================================================================================================================" << endl;
    do{
    cout << "Enter your Location where you want to go: ";
    getline(cin , location);
    cout << "Enter preferred timing (morning/evening): ";
    cin >> timing;
    cin.ignore();
    if(shuttleRoute.count({location , timing}))
    {
        break;
    }
    else {cout<<"Invalid location or timing , please try again"<<endl;
    }
    }
    while(true);
     
    
        if (shuttleRoute.count({location , timing})) 
        {
            if(timing=="morning")
            {
             cout << "Based on your input, the recommended bus number is " << shuttleRoute[{location , timing}] << " which will move at 8am." << endl;
            }
             else if(timing=="evening")
            {
               cout << "Based on your input, the recommended bus number is " << shuttleRoute[{location , timing}] << " which will move at 1:30pm." << endl;
            } 
        }
        else 
        cout<<"The bus is not available for tha time:"<<endl;
      setColor("reset");
 

}
void getOfficialBusInfo() {
    setColor("green");
    string location, timing;
    map<pair<string, string> , string> busRoutes = {
        {{"jamshoro","morning"} ,"S01"},
        {{"jamshoro","evening"} ,"S01E"},
        {{"jyderabad","morning"}, "S02"},
        {{"jyderabad","evening"} ,"S02E"},
        {{"latifabad","morning"}, "S03"},
        {{"latifabad","evening"} ,"S03E"},
        {{"qasimabad","morning"} ,"S04"},
        {{"qasimabad","evening"} ,"S04E"},
        {{"naseem nagar","morning"}, "S05"},
        {{"naseem nagar","evening"} ,"S05E"},
        {{"saedaba","morning"} , "S06"},
        {{"saedaba","evening"} ,"S06E"},
        {{"pathan colony","morning"} ,"S07"},
        {{"pathan colony","evening"}, "S07E"},
        {{"qasim chouk","morning"} ,"S08"},
        {{"qasim chouk","evening"} ,"S08E"},
        {{"tilk charhe","morning"} ,"S09"},
        {{"tilk charhe","evening"} ,"S09E"},
      
    };
     
    cout << endl;
    cout << "=============================== Official Bus Information ===============================" << endl;
    cout << left << setw(20) << "Location" << setw(15) <<"Timing" << setw(10) <<"Route Code" << endl;
     cout << "-------------------------------------------------------------------------------" << endl;
    for (const auto& route : busRoutes) {
        cout << left << setw(20) << route.first.first << setw(15) << route.first.second << setw(10) << route.second << right << setw(35) <<"-"<<endl;
    }

    cout << "===============================================================================" << endl;
    do{
    cout << "Enter your Location where you want to go: ";
    getline(cin , location);
    cout << "Enter preferred timing (morning/evening): ";
    cin >> timing;
    cin.ignore();
    if(busRoutes.count({location , timing}))
    {
        break;
    }
    else {cout<<"Invalid location or timing , please try again"<<endl;
    }
    }
    while(true);
     
    
        if (busRoutes.count({location , timing})) 
        {
            if(timing=="morning")
            {
             cout << "Based on your input, the recommended bus number is " << busRoutes[{location , timing}] << " which will move at 8am." << endl;
            }
             else if(timing=="evening")
            {
               cout << "Based on your input, the recommended bus number is " << busRoutes[{location , timing}] << " which will move at 3pm." << endl;
            } 
        }
        else 
        cout<<"The bus is not available for tha time:"<<endl;
      setColor("reset");
   
}

void complain()
{
    string issueType , description , name;
    setColor("red");
    cout <<"\033[1" << "\n--- Complaint Section ---" <<"\033[0m]" <<endl;
    cout<<"What is your name :";
    cin.ignore();
    getline(cin,name);
    cout << "Please describe your complaint (e.g., bus delay, driver behavior, cleanliness): ";
    cin.ignore();
    getline(cin, issueType);
    cout << "Provide additional details about the complaint: ";
    getline(cin, description);
    cout << "\nThank you for your complaint. We will look into the matter." << endl;
    cout << "Complaint Summary:" << endl;
    cout <<left <<"Complainant Name: " << name << endl;
    cout <<left <<"Issue: " << issueType << endl;
    cout <<left <<"Details: " << description << endl;

    setColor("reset");
   
}


int main() {
    char continueChoice;
    int optionChoice;
    string ch;
    username_pass();
    do{
    showTransportInfo();
    cin >> continueChoice;
    system("CLS");
      if(continueChoice!='c' && continueChoice!='C')
    {
        cout<<"\033[2;36m"<<"Please enter c or C to continue:"<<"\033[0m"<<endl;
        cin>>continueChoice;
    }
    else break;
    } while(true);
    do{
    if (continueChoice == 'c' || continueChoice == 'C') {
        showOptions();
        cin >> optionChoice;
        system("CLS");
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
        else if(optionChoice == 4)
        {
            complain();
        }
        else if(optionChoice==1 && optionChoice==2 && optionChoice==3 && optionChoice==4)
        {
            break;
             system("CLS");
        }
        else
            cout << "Invalid option selected. Please select correct option." << endl;
        
         
    }
     
    } while(true);
}
