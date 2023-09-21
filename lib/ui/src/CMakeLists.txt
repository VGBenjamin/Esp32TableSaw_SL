SET(SOURCES screens/ui_ScrMove.c
    screens/ui_ScrSettings.c
    ui.c
    components/ui_comp_hook.c
    ui_helpers.c
    ui_events.cpp
    images/ui_img_478973782.c
    images/ui_img_position1_24_white_png.c
    images/ui_img_position2_24_white_png.c
    images/ui_img_position3_24_white_png.c
    images/ui_img_2104542103.c
    images/ui_img_561644076.c
    images/ui_img_1297254713.c
    images/ui_img_settings_24_png.c
    images/ui_img_settings_fill0_wght400_grad0_opsz24_png.c
    images/ui_img_settings_fill0_wght400_grad0_opsz48_png.c)

add_library(ui ${SOURCES})
