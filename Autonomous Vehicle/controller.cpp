#include "controller.h"
#include <iostream>

void Controller::setSafeDistance(float distance) {
  std::cout << "Setting safe distance to " << distance << " meters." << std::endl;
  this->safeDistance = distance;
}

void Controller::setSpeedLimit(float limit) {
  std::cout << "Setting speed limit to " << limit << " kph." << std::endl;
  this->speedLimit = limit;
}

void Controller::setObstacleDetection(bool enabled) {
  if (enabled) {
    std::cout << "Obstacle detection enabled." << std::endl;
  } else {
    std::cout << "Obstacle detection disabled." << std::endl;
  }
  this->obstacleDetectionEnabled = enabled;
}

void Controller::setTrafficRules(bool enabled) {
  if (enabled) {
    std::cout << "Following traffic rules enabled." << std::endl;
  } else {
    std::cout << "Following traffic rules disabled." << std::endl;
  }
  this->trafficRulesEnabled = enabled;
}

void Controller::setAdaptiveCruiseControl(bool enabled) {
  if (enabled) {
    std::cout << "Adaptive cruise control enabled." << std::endl;
  } else {
    std::cout << "Adaptive cruise control disabled." << std::endl;
  }
  this->adaptiveCruiseControlEnabled = enabled;
}

void Controller::setEmergencyBrakeAssist(bool enabled) {
  if (enabled) {
    std::cout << "Emergency brake assist enabled." << std::endl;
  } else {
    std::cout << "Emergency brake assist disabled." << std::endl;
  }
  this->emergencyBrakeAssistEnabled = enabled;
}

void Controller::update() {
  if (this->obstacleDetectionEnabled) {
    std::cout << "Checking for obstacles." << std::endl;
    // Code to detect obstacles goes here
  }
  
  if (this->trafficRulesEnabled) {
    std::cout << "Following traffic rules." << std::endl;
    // Code to obey traffic rules goes here
  }
  
  if (this->adaptiveCruiseControlEnabled) {
    std::cout << "Maintaining set speed and safe distance." << std::endl;
    // Code to maintain set speed and safe distance goes here
  }
  
  // Code to adjust steering angle, apply brakes, etc. goes here
  // ...
}

Controller::Controller() {
  this->safeDistance = 0;
  this->speedLimit = 0;
  this->obstacleDetectionEnabled = false;
  this->trafficRulesEnabled = false;
  this->adaptiveCruiseControlEnabled = false;
  this->emergencyBrakeAssistEnabled = false;
}
