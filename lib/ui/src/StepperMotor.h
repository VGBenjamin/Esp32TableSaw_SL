#ifndef STEPPER_MOTOR_H
#define STEPPER_MOTOR_H

#include <AccelStepper.h>

class StepperMotor {
  private:
    AccelStepper stepper;
    const int dirPin;
    const int stepPin;

  public:
    StepperMotor(int dirPin, int stepPin);
    void moveStepperTo(int position);
    void setStepsPerMm(int steps);
};

#endif // STEPPER_MOTOR_H
