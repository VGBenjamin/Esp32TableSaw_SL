// ScreenKeyPad.h
#pragma once
#include "ui.h"
#include <lvgl.h>
#include <stdio.h>
#include <stdlib.h>
#include <cstring>
#include "StepperMotor.h"

class ScreenKeyPad {
private:
    float convertString(const char * str);
    bool containsComma(const char * str);
public:
    ScreenKeyPad();
    virtual void init(lv_obj_t * ui_label_current_value);

    void enterDigitOrDecimal(const char * digitOrDecimal);
    virtual void validate() = 0;
    virtual void activate() = 0;
    void clear();
    int getCurrentValue();
protected:
    lv_obj_t * ui_label_current_value_;
};