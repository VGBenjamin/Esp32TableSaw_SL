#include "StepperMotor.h"
#include "NVSHelper.h"

int currentPosition;
int stepsPerMm;
NVSHelper nvsHelper("stepperMotor");
const char* STEP_PER_MM_KEY = "stepsPerMm" 

StepperMotor::StepperMotor(int dirPin, int stepPin) : dirPin(dirPin), stepPin(stepPin), stepper(AccelStepper::DRIVER, stepPin, dirPin) {
  currentPosition = 0;
  stepsPerMm = 1;
  stepper.setMaxSpeed(2000); // Vitesse maximale en pas par seconde
  stepper.setAcceleration(500); // Accélération en pas par seconde au carré

  // Récupérer une valeur du stepPerMm
  int32_t value;
  if (nvsHelper.load(STEP_PER_MM_KEY, value) != ESP_OK) {
    Serial.println("Erreur lors du chargement");
  } else {
    stepsPerMm = value;
    Serial.print("Valeur récupérée : ");
    Serial.println(value);
  }
}

void StepperMotor::moveStepperTo(int position) {

  stepper.moveTo(position);
  stepper.runToPosition();
}

void StepperMotor::setStepsPerMm(int steps) {
  stepsPerMm = value;
  if (nvsHelper.save(STEP_PER_MM_KEY, steps) != ESP_OK) {
    Serial.println("Erreur lors de la sauvegarde");
  }
}
