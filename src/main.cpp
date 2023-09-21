#include <lvgl.h>
#include <TFT_eSPI.h>
#include <ui.h>
#include "../lib/ui/src/StepperMotor.h"
#include "../lib/ui/src/ScreenPosition.h"
#include "../lib/ui/src/ScreenStepsParameters.h"

/*Don't forget to set Sketchbook location in File/Preferencesto the path of your UI project (the parent foder of this INO file)*/

/*Change to your screen resolution*/
static const uint16_t screenWidth  = 240;
static const uint16_t screenHeight = 320;
static const uint16_t TS_MIN_Y = 0;
static const uint16_t TS_MAX_Y = 240;
static const uint16_t TS_MIN_X = 0;
static const uint16_t TS_MAX_X = 320;

static lv_disp_draw_buf_t draw_buf;
static lv_color_t buf[ screenWidth * screenHeight / 10 ];

// Définir les broches pour le moteur
const int PIN_DIR = 13;  // DIR+
const int PIN_PUL = 2; // PUL

TFT_eSPI tft = TFT_eSPI(screenWidth, screenHeight); /* TFT instance */
StepperMotor myStepper(PIN_DIR, PIN_PUL);
ScreenPosition screenPosition;
ScreenStepsParameters screenStepsParameters;

#if LV_USE_LOG != 0
/* Serial debugging */
void my_print(const char * buf)
{
    Serial.printf(buf);
    Serial.flush();
}
#endif

/* Display flushing */
void my_disp_flush( lv_disp_drv_t *disp, const lv_area_t *area, lv_color_t *color_p )
{
    uint32_t w = ( area->x2 - area->x1 + 1 );
    uint32_t h = ( area->y2 - area->y1 + 1 );

    tft.startWrite();
    tft.setAddrWindow( area->x1, area->y1, w, h );
    tft.pushColors( ( uint16_t * )&color_p->full, w * h, true );
    tft.endWrite();

    lv_disp_flush_ready( disp );
}

/*Read the touchpad*/
void my_touchpad_read( lv_indev_drv_t * indev_driver, lv_indev_data_t * data )
{
    uint16_t touchX = 0, touchY = 0;

    bool touched = false;
    tft.getTouch( &touchY, &touchX, 600 );
    touched = touchX != 0 || touchY != 0;

    if( !touched )
    {
        data->state = LV_INDEV_STATE_REL;
    }
    else
    {
        data->state = LV_INDEV_STATE_PR;

        //Serial.print( "Data (" + String(touchX) + ", " + String(touchY) + ")");
        //Inverted as we have rotated the screen (pins up)
        /* Remappage des coordonnées pour correspondre à l'orientation de l'écran */
        int16_t nTmpX = touchX;
        touchX = map(touchX, TS_MIN_X, TS_MAX_X, 0, 240);  // Remplacez TS_MINY et TS_MAXY par vos valeurs minimales et maximales pour Y
        touchY = map(touchY, TS_MIN_Y, TS_MAX_Y, 0, 320);  // Remplacez TS_MINX et TS_MAXX par vos valeurs minimales et maximales pour X

        /*Set the coordinates*/
        data->point.x = touchX;
        data->point.y = touchY;

        //Serial.println( " (" + String(touchX) + ", " + String(touchY) + ")");
    }
}

void custom_init() 
{
    screenPosition.init(ui_lblPosition, myStepper);
    screenStepsParameters.init(ui_lblPosition, myStepper);
}

void setup()
{
    Serial.begin( 115200 ); /* prepare for possible serial debug */

    String LVGL_Arduino = "Hello Arduino! ";
    LVGL_Arduino += String('V') + lv_version_major() + "." + lv_version_minor() + "." + lv_version_patch();

    Serial.println( LVGL_Arduino );
    Serial.println( "I am LVGL_Arduino" );

    lv_init();

#if LV_USE_LOG != 0
    lv_log_register_print_cb( my_print ); /* register print function for debugging */
#endif

    tft.begin();          /* TFT init */
    tft.setRotation( 0 ); /* Landscape orientation, flipped */

    lv_disp_draw_buf_init( &draw_buf, buf, NULL, screenWidth * screenHeight / 10 );

    /*Initialize the display*/
    static lv_disp_drv_t disp_drv;
    lv_disp_drv_init( &disp_drv );
    /*Change the following line to your display resolution*/
    disp_drv.hor_res = screenWidth;
    disp_drv.ver_res = screenHeight;
    disp_drv.flush_cb = my_disp_flush;
    disp_drv.draw_buf = &draw_buf;
    lv_disp_drv_register( &disp_drv );

    /*Initialize the (dummy) input device driver*/
    static lv_indev_drv_t indev_drv;
    lv_indev_drv_init( &indev_drv );
    indev_drv.type = LV_INDEV_TYPE_POINTER;
    indev_drv.read_cb = my_touchpad_read;
    lv_indev_drv_register( &indev_drv );


    ui_init();

    custom_init();

    Serial.println( "Setup done" );
}

void loop()
{
    // myStepper.moveStepperTo(1000);

    // delay(1000); // Attendre une seconde

    // // Faire tourner le moteur de 1000 pas dans l'autre sens
    // myStepper.moveStepperTo(0);

    // delay(1000); // Attendre une seconde


    lv_timer_handler(); /* let the GUI do its work */
    delay(5);
}
