// ScreenKeyPad.cpp
#include "ScreenKeyPad.h"
#include <cstring>

ScreenKeyPad::ScreenKeyPad() {
}

void ScreenKeyPad::init(lv_obj_t * ui_label_current_value) {
    ui_label_current_value_ = ui_label_current_value;
}


/*
void enterDigitOrDecimal(const char * digitOrDecimal) {
        LV_LOG_INFO("enterDigitOrDecimal");
        char pstring[100];
        char * stringValue = lv_label_get_text(ui_lblPosition);
        char result[100];

        if (strcmp(stringValue, "0") == 0) { 
            strcpy(result, digitOrDecimal);
        } else {
            sprintf(result, "%s%s", stringValue, digitOrDecimal);
        }

        lv_label_set_text(ui_lblPosition, result);
    }

    bool containsComma(const char * str) {
        while (*str != '\0') {
            if (*str == ',') {
                return true;
            }
            ++str;
        }
        return false;
    }

    float convertString(const char * str) {
        float result = 0.0;
        float decimalFactor = 0.1;
        bool isNegative = false;

        if (*str == '-') {
            isNegative = true;
            ++str;
        }

        while (*str >= '0' && *str <= '9') {
            result = result * 10 + (*str - '0');
            ++str;
        }

        if (*str == '.') {
            ++str;
            while (*str >= '0' && *str <= '9') {
                result = result + (*str - '0') * decimalFactor;
                decimalFactor *= 0.1;
                ++str;
            }
        }

        if (isNegative) {
            result = -result;
        }

        return result;
    }*/

void ScreenKeyPad::enterDigitOrDecimal(const char * digitOrDecimal) {
    LV_LOG_INFO("ScreenKeyPad - enterDigitOrDecimal");
    if(ui_label_current_value_ == nullptr) {
        LV_LOG_ERROR("ui_label_current_value_ is nullptr");
        return;
    }

    char pstring[100];
    char * stringValue = lv_label_get_text(ui_label_current_value_);
    char result[100];

    if (strcmp(stringValue, "0") == 0) { 
        strcpy(result, digitOrDecimal);
    } else {
        sprintf(result, "%s%s", stringValue, digitOrDecimal);
    }

    lv_label_set_text(ui_label_current_value_, result);
}

float ScreenKeyPad::convertString(const char * str) {
    float result = 0.0;
        float decimalFactor = 0.1;
        bool isNegative = false;

        if (*str == '-') {
            isNegative = true;
            ++str;
        }

        while (*str >= '0' && *str <= '9') {
            result = result * 10 + (*str - '0');
            ++str;
        }

        if (*str == '.') {
            ++str;
            while (*str >= '0' && *str <= '9') {
                result = result + (*str - '0') * decimalFactor;
                decimalFactor *= 0.1;
                ++str;
            }
        }

        if (isNegative) {
            result = -result;
        }

        return result;
}

bool ScreenKeyPad::containsComma(const char * str) {
    while (*str != '\0') {
        if (*str == ',') {
            return true;
        }
        ++str;
    }
    return false;
}

void ScreenKeyPad::clear() {
    lv_label_set_text(ui_label_current_value_, "0");
}

int ScreenKeyPad::getCurrentValue() {
    char * stringValue = lv_label_get_text(ui_label_current_value_);
    return atoi(stringValue);
}

