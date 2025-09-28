#include <iostream>
#include<windows.h>
#include<sstream>
#include<fstream>
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
        {"rahim.110", "s101112"},
        {"moksh", "Mk123"},
        {"luksh", "Lk456"},
        {"hamza", "Hz789"},
        {"muhammad", "Md1011"},
        {"tariq", "Tq1213"},
        {"sujal", "Sj1415"},
        {"sampat", "St1617"},
        {"arslan", "An1819"},
        {"basit", "Bt2021"},
        {"asad", "As2223"},
        {"amjad", "Aj2425"},
        {"aneel", "An2627"},
        {"zubair", "Zb2829"},
        {"moiz", "Mz3031"},
        {"mubshar", "Mb3233"}
    };

    string username, password;
    bool accessGranted = false;

    
        
        cout <<GREEN<<"============================================================================================================================================================================" << endl;
		Sleep(500);
        cout << "============================================================================================================================================================================" <<RESET<< endl;
		Sleep(500);
        cout <<BLUE<< "\n                                                                   Please enter your login credentials below:\n" <<RESET<< endl;
		Sleep(500);
	   cout <<GREEN<< "============================================================================================================================================================================" << RESET<<endl;
	   Sleep(500);
        cout <<BLUE<< "                                                                       WELCOME TO THE MUET TRANSPORT SYSTEM  " <<RESET<< endl;
		Sleep(500);
        cout << GREEN<<  "============================================================================================================================================================================" <<RESET<< endl;
		Sleep(500);
        cout<<BLUE << "\n                                                           To access the system, please enter your username and password.\n" <<RESET << endl;

        do{
        cout <<BLUE<< "Username: "<<RESET;
        cin >> username;
        cout <<BLUE<< "Password: ";
        cin >> password;
      
        
        cout << "\nVerifying";
        for (int i = 0; i < 10; i++) {
            cout << ".";
            Sleep(100); 
        }
        Sleep(500);
          system("CLS");
        
        if (users.find(username) != users.end() && users[username] == password) {
            cout<<"                                                                                                                                                           "<<endl;
            cout<<"                                                                                                                                                           "<<endl;
            cout<<"                                                                                                                                                           "<<endl;
            cout<<"                                                                                                                                                           "<<endl;
            cout<<"                                                                                                                                                           "<<endl;
            cout<<"                                                                                                                                                           "<<endl;
            cout<<"                                                                                                                                                           "<<endl;
            cout<<"                                                                                                                                                           "<<endl;
            cout<<"                                                                                                                                                           "<<endl;
            cout<<"                                                                                                                                                           "<<endl;
            cout << "=========================================================================================================================================================" << endl;
            cout << "                                                                 Access Granted! Welcome!           " << endl;
            cout << "=========================================================================================================================================================" << endl;
            accessGranted = true;
            Sleep(5000);
            system("CLS");
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
 
    cout << "============================================================================================================================================================================" <<  endl;
    cout << GREEN << "                                                                       MUET TRANSPORT SYSTEM           " << RESET << endl;
    cout << "============================================================================================================================================================================" <<  endl;

  
    cout << GREEN << "\n       Main Menu: Please Select an Option\n" << RESET << endl;

 
    cout << BLUE << "1. Official MUET Buses" << RESET << endl;
    cout << GREEN << "   - Safe and convenient transport directly managed by MUET." << RESET << endl;


    cout << BLUE << "2. Private Shuttles" << RESET << endl;
    cout << GREEN << "   - Flexible routes and timing, managed by private operators." << RESET << endl;

    cout << BLUE << "3. Feedback" << RESET << endl;
    cout << GREEN << "   - Share your experience to help us improve our service." << RESET << endl;


    cout << BLUE << "4. Complain" << RESET << endl;
    cout << GREEN << "   - Report issues or concerns with our transportation services." << RESET << endl;


    cout << "\n============================================================================================================================================================================" <<  endl;
    cout << "Enter your choice (1, 2, 3, or 4): " << RESET;
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
    ofstream feedbackFile("feedback.csv" , ios::app);
    if(feedbackFile.is_open()){
          if (feedbackFile.tellp() == 0) {
            // Write the headings if the file is empty
            feedbackFile << "rating,feedback" << endl;
        }
        feedbackFile<<rating<< ",\""<<comment<<"\""<<endl;
        feedbackFile.close();
        cout << "Feedback saved successfully to feedback.csv!" << endl;
     } else{
         cout << "Error: Could not open feedback file!" << endl;
     } 
    
    cout << "\nThank you for your feedback!" << endl;
    cout << "Your rating: " << rating << "/5" << endl;
    cout << "Your comments: " << comment << endl;
    // system("CLS");
    setColor("reset");

}

void getShuttleInfo() {
   setColor("blue");
    string location, timing  ;
    int ch , time ;
    char op;
    map<pair<string, string> , string> shuttleRoute = {
        {{"phataq","morning"} ,"S01"},
        {{"phataq","evening"} ,"S01E"},
        {{"kotri","morning"}, "S02"},
        {{"kotri","evening"} ,"S02E"},
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
        {{"tilk charhe","morning"} ,"B09"},
        {{"tilk charhe","evening"} ,"S09E"},
        {{"thandi sarak","morning"} ,"S010"},
        {{"thandi sarak","evening"} ,"S010E"},
        {{"market","morning"}, "S012"},
        {{"market","evening"} ,"S012E"},
        {{"gul center","morning"}, "S13"},
        {{"gul center","evening"} ,"S13E"},
        {{"hala naka","morning"} ,"S14"},
        {{"hala naka","evening"} ,"S14E"},
        {{"citizen","morning"}, "S15"},
        {{"citizen","evening"} ,"S15E"},
        {{"wadho wah","morning"} , "S16"},
        {{"wadho wah","evening"} ,"S16E"},
        {{"petaro","morning"} ,"S17"},
        {{"petaro","evening"}, "S17E"},
        {{"power house","morning"} ,"S18"},
        {{"power house","evening"} ,"S18E"},
        {{"ali town","morning"} ,"S19"},
        {{"ali town","evening"} ,"S19E"},
      
    };
     
    cout << endl;
    cout << "=============================== Official Bus Information ===============================" << endl;
    cout << left << setw(20) << "Location" << setw(15) <<"Timing" << setw(10) <<"Route Code" << endl;
     cout << "-------------------------------------------------------------------------------" << endl;
    for (const auto& route : shuttleRoute) {
        cout << left << setw(20) << route.first.first << setw(15) << route.first.second << setw(10) << route.second << right << setw(35) <<"-"<<endl;
    }

    cout << "===============================================================================" << endl;
    do{
        cout << "\nDo you want to:\n1.  Travel to university?\n2.Travel from university?\nChoose (1/2): ";
        cin >> ch;
        cin.ignore(); 
        if(ch==2){
    do{       
        cout << "Enter the location where you want to go  ";
        getline(cin , location);
        
        cout << "Enter preferred timing (morning/evening): ";
        cin >> timing;
        cout << "Enter in hours: ";
        cin >> time;
    
        if (shuttleRoute.count({location , timing})) 
        { 
            if(time>=1 && time<=2)
            {
            system("CLS");
             cout << "\033[1;34m"<< "\tBased on your input, the recommended Shuttle number is " << shuttleRoute[{location , timing}] << " which will move at 1:30 pm from CC." << endl;
            }
             else if(time>2 && time<=4 )
            {
                  system("CLS");
               cout << "Based on your input, the recommended shuttle number is " << shuttleRoute[{location , timing}] << " which will move at 2:30 pm from Zero point." << endl;
            } 
            
            //  else if(time>5 && time<=6 )
            // {
            //       system("CLS");
            //    cout << "Based on your input, the recommended bus number is " << shuttleRoute[{location , timing}] << " which will move at 6pm from Zero point." << endl;
            // } 
            //  else if(time>6 && time<=7 )
            // {
            //       system("CLS");
            //    cout << "Based on your input, the recommended bus number is " <<shuttleRoute[{location , timing}] << " which will move at 7pm from Zero point." << endl;
            // } 
            else if (time < 1 || time> 7){
                cout<<"No bus will  move at this time"<<endl;
            }
           
        } 

      
        else 
        cout<<"The shuttle is not available for tha time:"<< "\033[0m"<<endl;
         cout<<"\n do you want to enter another location or time ? (press y /n)"; 
        cin>>op;
        cin.ignore();
        }while(op=='y'|| op=='Y');
      setColor("reset");
    cin.ignore();
    if(shuttleRoute.count({location , timing}))
    {
        break;
    }}
    else if(ch==1){
        
       cout << "Enter your current location: ";
       getline(cin , location);
       cout << "Enter preferred timing : ";
       cin >> timing;
       if (shuttleRoute.count({location , timing})) 
         {
             if(timing=="morning")
            {
            system("CLS");
             cout << "\033[1;34m"<< "\tBased on your input, the recommended bus number is " << shuttleRoute[{location , timing}] << " which will move at 8am." << endl;
            }
             else if(timing=="evening")
            {
                  system("CLS");
               cout << "Based on your input, the recommended bus number is " <<shuttleRoute[{location , timing}] << " which will move at 3pm." << endl;
            } 
         }
        else 
         cout<<"The bus is not available for tha time:"<< "\033[0m"<<endl;
         
    // cin.ignore();
      if(shuttleRoute.count({location , timing}))
    {
        break;
    }}
    cin.ignore();
    if(shuttleRoute.count({location , timing}))
    {
        break;
    }
        
    else
     cout<<"Invalid location or timing , please try again"<<endl;
    
    }
    while(true);
     
    setColor("reset");
   
 

}
void getOfficialBusInfo() {
    setColor("green");
    string location, timing  ;
    int ch , time ;
    char op;
    map<pair<string, string> , string> busRoutes = {
        {{"phataq","morning"} ,"B01"},
        {{"phataq","evening"} ,"B01E"},
        {{"kotri","morning"}, "B02"},
        {{"kotri","evening"} ,"B02E"},
        {{"latifabad","morning"}, "B03"},
        {{"latifabad","evening"} ,"B03E"},
        {{"qasimabad","morning"} ,"B04"},
        {{"qasimabad","evening"} ,"B04E"},
        {{"naseem nagar","morning"}, "B05"},
        {{"naseem nagar","evening"} ,"B05E"},
        {{"saedaba","morning"} , "B06"},
        {{"saedaba","evening"} ,"B06E"},
        {{"pathan colony","morning"} ,"B07"},
        {{"pathan colony","evening"}, "B07E"},
        {{"qasim chouk","morning"} ,"B08"},
        {{"qasim chouk","evening"} ,"B08E"},
        {{"tilk charhe","morning"} ,"B09"},
        {{"tilk charhe","evening"} ,"B09E"},
        {{"thandi sarak","morning"} ,"B010"},
        {{"thandi sarak","evening"} ,"B010E"},
        {{"market","morning"}, "B012"},
        {{"market","evening"} ,"B012E"},
        {{"gul center","morning"}, "B13"},
        {{"gul center","evening"} ,"B13E"},
        {{"hala naka","morning"} ,"B14"},
        {{"hala naka","evening"} ,"B14E"},
        {{"citizen","morning"}, "B15"},
        {{"citizen","evening"} ,"B15E"},
        {{"wadho wah","morning"} , "B16"},
        {{"wadho wah","evening"} ,"B16E"},
        {{"petaro","morning"} ,"B17"},
        {{"petaro","evening"}, "B17E"},
        {{"power house","morning"} ,"B18"},
        {{"power house","evening"} ,"B18E"},
        {{"ali town","morning"} ,"B19"},
        {{"ali town","evening"} ,"B19E"},
      
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
        cout << "\nDo you want to:\n1.  Travel to university?\n2.Travel from university?\nChoose (1/2): ";
        cin >> ch;
        cin.ignore(); 
        if(ch==2){
    do{       
        cout << "Enter the location where you want to go  ";
        getline(cin , location);
        cout << "Enter preferred timing (morning/evening): ";
        cin >> timing;
        cout << "Enter in hours: ";
        cin >> time;
    
        if (busRoutes.count({location , timing})) 
        { 
            if(time>=1 && time<=3)
            {
            system("CLS");
             cout << "\033[1;34m"<< "\tBased on your input, the recommended bus number is " << busRoutes[{location , timing}] << " which will move at 3:10 from CC." << endl;
            }
             else if(time>3 && time<=5 )
            {
                  system("CLS");
               cout << "Based on your input, the recommended bus number is " << busRoutes[{location , timing}] << " which will move at 5pm for Zero point." << endl;
            } 
            
             else if(time>5 && time<=6 )
            {
                  system("CLS");
               cout << "Based on your input, the recommended bus number is " << busRoutes[{location , timing}] << " which will move at 6pm for Zero point." << endl;
            } 
             else if(time>6 && time<=7 )
            {
                  system("CLS");
               cout << "Based on your input, the recommended bus number is " << busRoutes[{location , timing}] << " which will move at 7pm for Zero point." << endl;
            } 
            else if (time < 1 || time> 7){
                cout<<"No bus will  move according to this time"<<endl;
            }
           
        } 

      
        else 
        cout<<"The bus is not available for tha time:"<< "\033[0m"<<endl;
         cout<<"\n do you want to enter another location or time ? (press y /n)"; 
        cin>>op;
        cin.ignore(); 
        }while(op=='y'|| op=='Y');
      setColor("reset");
    cin.ignore();
    if(busRoutes.count({location , timing}))
    {
        break;
    }}
    else if(ch==1){
        
       cout << "Enter your current location: ";
       getline(cin , location);
       cout << "Enter preferred timing : ";
       cin >> timing;
       if (busRoutes.count({location , timing})) 
         {
             if(timing=="morning")
            {
            system("CLS");
             cout << "\033[1;34m"<< "\tBased on your input, the recommended bus number is " << busRoutes[{location , timing}] << " which will move at 8am." << endl;
            }
             else if(timing=="evening")
            {
                  system("CLS");
               cout << "Based on your input, the recommended bus number is " << busRoutes[{location , timing}] << " which will move at 3pm." << endl;
            } 
         }
        else 
         cout<<"The bus is not available for tha time:"<< "\033[0m"<<endl;
         
    // cin.ignore();
      if(busRoutes.count({location , timing}))
    {
        break;
    }}
    cin.ignore();
    if(busRoutes.count({location , timing}))
    {
        break;
    }
        
    else
     cout<<"Invalid location or timing , please try again"<<endl;
    
    }
    while(true);
     
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
    ofstream complainFile("complain.csv " , ios::app);
    if(complainFile.is_open()){
        if(complainFile.tellp()==0){
            complainFile<<"NAME,Issue, description"<<endl;
        }
        complainFile<<name<< ",\""<<issueType<<"\""<<"\""<<description<<endl;
        complainFile.close();
        cout << "Your complain have saved successfully to complain.csv!" << endl;
     } else{
         cout << "Error: Could not open complain file!" << endl;
     } 
    
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
    bool exitprogram = false;
do{  
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
        if (optionChoice == 1) {
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
        { cout << "Invalid option selected. Please select correct option." << endl;}
        setColor("RED");
           cout << "\n============================================\n";
                cout << "Would you like to:\n";
                cout << "1. Go back to the main menu\n";
                cout << "2. Log in with a new username\n";
                cout << "============================================" << endl;
                cout << "Enter choice (1 or 2): ";
                int postOption;
                cin >> postOption;
        setColor("RESET");
                if (postOption == 2) {
                    system("CLS");
                    break; // inner loop se exit karne ke liye take dobara relogin kare
                }
                else 
                system("CLS");
    }
     
    } while(!exitprogram);
}    while(true);
}
