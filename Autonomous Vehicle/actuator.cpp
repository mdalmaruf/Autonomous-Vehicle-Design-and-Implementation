#include "actuator.h"
#include <iostream>

class Motor : public Actuator {
public:
    void adjust_steering_angle(float angle) override {
        std::cout << "Adjusting steering angle to " << angle << " degrees" << std::endl;
    }
    void apply_brakes(float force) override {
        std::cout << "Applying brakes with force of " << force << std::endl;
    }
    void control_lights(bool headlights_on, bool brake_lights_on) override {
        std::cout << "Headlights " << (headlights_on ? "on" : "off") << ", brake lights " << (brake_lights_on ? "on" : "off") << std::endl;
    }
    // ... other methods related to actuation
};
