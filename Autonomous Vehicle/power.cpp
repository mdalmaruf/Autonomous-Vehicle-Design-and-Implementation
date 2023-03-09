#include "power.h"

Power::Power() {
    // Initialize the power consumption to 0
    m_powerConsumption = 0;
}

void Power::setPowerConsumption(float power) {
    // Set the power consumption
    m_powerConsumption = power;
}

float Power::getPowerConsumption() {
    // Return the current power consumption
    return m_powerConsumption;
}
