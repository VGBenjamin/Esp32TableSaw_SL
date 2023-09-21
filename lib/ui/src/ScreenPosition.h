#pragma once
#include "ScreenKeyPad.h"
#include "ui.h"
#include <lvgl.h>
#include <stdio.h>
#include <stdlib.h>
#include <cstring>
#include "StepperMotor.h"

class ScreenPosition : public ScreenKeyPad {
public:
    ScreenPosition();
    void init(lv_obj_t * ui_label_current_value, StepperMotor &myStepper);
    void validate()  override;
    void activate() override;
private:
    StepperMotor* stepper_ = nullptr;
};
