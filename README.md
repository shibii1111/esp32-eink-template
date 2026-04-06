# ESP32 E-Ink Dashboard

Small project using an ESP32 and a 2.9" e-ink display (KeeYee / Waveshare) powered by GxEPD2.

## Hardware
- ESP32 DOIT DevKit V1
- 2.9" E-Ink display (3-color)
- SPI interface

## Wiring
| E-Ink | ESP32 |
|------|------|
| CS   | 5    |
| DC   | 27   |
| RST  | 26   |
| BUSY | 4    |
| CLK  | 18   |
| DIN  | 23   |

## Library
- GxEPD2

## Working Display Driver
```cpp
GxEPD2_3C<GxEPD2_290_C90c, GxEPD2_290_C90c::HEIGHT>