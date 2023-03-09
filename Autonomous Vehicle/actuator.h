#ifndef ACTUATOR_H
#define ACTUATOR_H

class Actuator {
public:
    virtual void adjust_steering_angle(float angle) = 0;
    virtual void apply_brakes(float force) = 0;
    virtual void control_lights(bool headlights_on, bool brake_lights_on) = 0;
    // ... other methods related to actuation
};

#endif // ACTUATOR_H
