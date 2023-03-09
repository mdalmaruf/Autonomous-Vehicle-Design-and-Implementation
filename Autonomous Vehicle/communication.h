#ifndef COMMUNICATION_H
#define COMMUNICATION_H

#include <string>

class Communication {
public:
    Communication();
    ~Communication();
    void connect();
    void disconnect();
    void sendMessage(std::string message);

private:
    bool isWirelessConnected;
    bool isWiredConnected;
};

#endif
