#ifndef CONTROLLER_H
#define CONTROLLER_H

class Controller {
  public:
    Controller();
    void setSafeDistance(float distance);
    void setSpeedLimit(float limit);
    void setObstacleDetection(bool enabled);
    void setTrafficRules(bool enabled);
    void setAdaptiveCruiseControl(bool enabled);
    void setEmergencyBrakeAssist(bool enabled);
    void update();
    
  private:
    float safeDistance;
    float speedLimit;
    bool obstacleDetectionEnabled;
    bool trafficRulesEnabled;
    bool adaptiveCruiseControlEnabled;
    bool emergencyBrakeAssistEnabled;
};

#endif
