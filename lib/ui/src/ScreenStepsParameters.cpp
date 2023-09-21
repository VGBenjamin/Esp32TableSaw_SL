#include "ScreenStepsParameters.h"
#include "helper.h"

ScreenStepsParameters::ScreenStepsParameters() : ScreenKeyPad() {
    
}

void ScreenStepsParameters::init(lv_obj_t * ui_label_current_value, StepperMotor &myStepper) {
    ScreenKeyPad::init(ui_label_current_value);
    LV_LOG_INFO("ScreenKeyPad - getStepsPerMm - %d", intToConstChar(stepper_->getStepsPerMm()));
    
    lv_label_set_text(ui_label_current_value_, intToConstChar(stepper_->getStepsPerMm())); //Set the value to the loaded parameter
}

void ScreenStepsParameters::validate() {
}

void ScreenStepsParameters::activate() {
    // Change apparence of Close Button
    lv_obj_set_style_bg_color(ui_ButtonKeySettings, lv_color_hex(0xCA0C18), LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_img_set_src(ui_LabelKeySettings, &ui_img_1297254713);
    //lv_obj_set_align(ui_Image2, LV_ALIGN_TOP_MID);

    lv_label_set_text(ui_LabelKeyValidate, "Set Step");
}
