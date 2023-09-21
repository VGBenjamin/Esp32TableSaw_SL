#include "ScreenPosition.h"

ScreenPosition::ScreenPosition() : ScreenKeyPad() {
}

void ScreenPosition::init(lv_obj_t * ui_label_current_value, StepperMotor &myStepper) {
    ScreenKeyPad::init(ui_label_current_value);
    stepper_ = &myStepper;
}

void ScreenPosition::validate() {
    stepper_->moveStepperTo(getCurrentValue());
    clear();
}

void ScreenPosition::activate() {
    // Change apparence of Settings Button
    lv_obj_set_style_bg_color(ui_ButtonKeySettings, lv_color_hex(0x3A393B), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_img_set_src(ui_LabelKeySettings, &ui_img_478973782);
    //lv_obj_set_align(ui_Image2, LV_ALIGN_CENTER);

    lv_label_set_text(ui_LabelKeyValidate, "GO");
}
