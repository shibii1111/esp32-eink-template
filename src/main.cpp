#include <Arduino.h>
#include <GxEPD2_BW.h>
#include <GxEPD2_3C.h>
#include <epd3c/GxEPD2_290c.h>
#include <Fonts/FreeMonoBold9pt7b.h>

#define EPD_CS   5
#define EPD_DC   27
#define EPD_RST  26
#define EPD_BUSY 4

GxEPD2_3C<GxEPD2_290_C90c, GxEPD2_290_C90c::HEIGHT> display(
    GxEPD2_290_C90c(EPD_CS, EPD_DC, EPD_RST, EPD_BUSY)
);

void setup()
{
    Serial.begin(115200);
    delay(1000);

    Serial.println("Booting e-ink test...");

    display.init(115200);
    display.setRotation(1);
    display.setFont(&FreeMonoBold9pt7b);

    display.setFullWindow();
    display.firstPage();
    do
    {
        display.fillScreen(GxEPD_WHITE);

        display.setTextColor(GxEPD_BLACK);
        display.setCursor(10, 30);
        display.println("ESP32 + EINK");

        display.setCursor(10, 55);
        display.println("Driver OK");
    }
    while (display.nextPage());

    Serial.println("Draw done.");
}

void loop()
{
}