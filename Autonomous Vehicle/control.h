#ifndef CONTROL_H
#define CONTROL_H

class Control {
  public:
    Control();
    void maintainSafeDistance();
    void obeyTrafficRules();
    void adjustSteeringAngle();
    void applyEmergencyBrakes();
    void maintainSetSpeed();
    void maintainSafeSteering();
    void cruiseControl();
    void adaptiveCruiseControl();
    void collisionDetection();
    void adaptiveSteeringControl();
    void emergencyBrakeAssist();
  private:
    double currentSpeed;
    double distanceToObstacle;
    double steeringAngle;
    bool isCruiseControlOn;
};

#endif
