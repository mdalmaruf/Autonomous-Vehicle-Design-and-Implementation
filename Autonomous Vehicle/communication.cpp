#include "communication.h"
#include <iostream>

using namespace std;

Communication::Communication() : isWirelessConnected(false), isWiredConnected(false) {}

Communication::~Communication() {}

void Communication::connect() {
    // Check if wireless communication is available and connect if needed
    if (/* code to check wireless communication is available */) {
        // code to connect to wireless communication
        isWirelessConnected = true;
        cout << "Wireless communication connected" << endl;
    }

    // Check if wired communication is available and connect if needed
    if (/* code to check wired communication is available */) {
        // code to connect to wired communication
        isWiredConnected = true;
        cout << "Wired communication connected" << endl;
    }

    if (!isWirelessConnected && !isWiredConnected) {
        cout << "No communication method available" << endl;
    }
}

void Communication::disconnect() {
    // Disconnect wireless communication if connected
    if (isWirelessConnected) {
        // code to disconnect wireless communication
        isWirelessConnected = false;
        cout << "Wireless communication disconnected" << endl;
    }

    // Disconnect wired communication if connected
    if (isWiredConnected) {
        // code to disconnect wired communication
        isWiredConnected = false;
        cout << "Wired communication disconnected" << endl;
    }
}

void Communication::sendMessage(string message) {
    if (isWirelessConnected || isWiredConnected) {
        // Code to send message
        cout << "Message sent: " << message << endl;
    } else {
        cout << "No communication method available" << endl;
    }
}
