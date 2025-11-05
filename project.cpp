
#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
    map<string, string> contacts;
    int choice;
    
    // Add some initial contacts
    contacts["Alice"] = "123-4567";
    contacts["Bob"] = "987-6543";
    contacts["Charlie"] = "555-1234";
    
    while(true) {
        cout << "\n=== TELEPHONE DIRECTORY ===" << endl;
        cout << "1. Add Contact" << endl;
        cout << "2. Show All Contacts" << endl;  
        cout << "3. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cin.ignore(); // Clear input buffer
        
        switch(choice) {
            case 1: {
                // Add Contact
                string name, phone;
                cout << "Enter name: ";
                getline(cin, name);
                cout << "Enter phone number: ";
                getline(cin, phone);
                contacts[name] = phone;
                cout << "Contact added successfully!" << endl;
                break;
            }
            
            case 2: {
                // Show All Contacts
                cout << "\n--- ALL CONTACTS ---" << endl;
                for(auto &contact : contacts) {
                    cout << contact.first << " -> " << contact.second << endl;
                }
                break;
            }
            
            case 3:
                // Exit
                cout << "Goodbye!" << endl;
                return 0;
                
            default:
                cout << "Invalid choice! Please try again." << endl;
        }
    }
    
    return 0;
}