#ifndef UI_H
#define UI_H

#include <iostream>

class UserInterface {
    public:
        // Constructor
        UserInterface() {}

        // Functional features
        void displayRelevantInformation();
        void respondToVoiceCommands();
        void displayUI();

        // Non-functional features
        void ensureAccessibility();
        void ensureConvenience();
};

#endif
