#ifndef POWER_H
#define POWER_H

class Power {
public:
    // Constructor
    Power();

    // Set the power consumption
    void setPowerConsumption(float power);

    // Get the power consumption
    float getPowerConsumption();

private:
    // The current power consumption
    float m_powerConsumption;
};

#endif // POWER_H
