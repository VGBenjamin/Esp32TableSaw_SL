#include "StepperMotor.h"
#include <Preferences.h>
#include "helper.h"

int currentPosition;
int stepsPerMm;
const char* PREFERENCE_NAMESPACE = "STEPPER_MOTOR";
const char* STEP_PER_MM_KEY = "stepsPerMm";
Preferences preferences; 

StepperMotor::StepperMotor(int dirPin, int stepPin) : dirPin(dirPin), stepPin(stepPin), stepper(AccelStepper::DRIVER, stepPin, dirPin) {
  currentPosition = 0;
  stepsPerMm = 1;

  stepper.setMaxSpeed(2000); // Vitesse maximale en pas par seconde
  stepper.setAcceleration(500); // Accélération en pas par seconde au carré

  // Récupérer une valeur du stepPerMm
  preferences.begin(PREFERENCE_NAMESPACE, false); 
  int value = preferences.getInt(STEP_PER_MM_KEY, 1000);
  stepsPerMm = value;
  Serial.print("Valeur récupérée : ");
  Serial.println(value);
  preferences.end();


  lv_label_set_text(ui_lblPosition1, intToConstChar(value));
}

void StepperMotor::moveStepperTo(int position) {

  stepper.moveTo(position);
  stepper.runToPosition();
}

void StepperMotor::setStepsPerMm(int steps) {
  stepsPerMm = steps;

  //Save it in ROM
  preferences.begin(PREFERENCE_NAMESPACE, false); 
  preferences.putInt(STEP_PER_MM_KEY, steps); 
  preferences.end();
}
