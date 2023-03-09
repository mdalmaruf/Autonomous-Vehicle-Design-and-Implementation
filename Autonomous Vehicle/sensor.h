#ifndef SENSOR_H
#define SENSOR_H

class Sensor {
public:
    void detect_objects();
    void detect_lane();
    void monitor_environment();
    void track_gps();
    void detect_traffic_signs();
    void detect_proximity();
    void detect_temperature();
    void detect_humidity();
    void detect_fuel_level();
    void detect_tire_pressure();
    void detect_oxygen_level();
};

#endif
