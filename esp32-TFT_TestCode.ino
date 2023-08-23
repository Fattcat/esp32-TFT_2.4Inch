#include <Adafruit_ST7789.h>
#include <SPI.h>

#define TFT_CS     15
#define TFT_DC     2
#define TFT_RST    4

Adafruit_ST7789 tft = Adafruit_ST7789(TFT_CS, TFT_DC, TFT_RST);

void setup() {
  Serial.begin(9600);
  tft.init(240, 320); // Inicializácia displeja s rozlíšením 240x320
  tft.setRotation(1); // Nastavenie rotácie displeja
  tft.fillScreen(ST77XX_GREEN); // Vyplnenie displeja zelenou farbou

  // Nastavenie fontu
  tft.setTextWrap(true); // Zapnutie automatického zalamovania textu
  tft.setTextSize(2); // Veľkosť fontu
}

void loop() {
  tft.setCursor(0, 0);
  tft.setRotation(0);
  tft.fillScreen(ST77XX_BLACK);
  tft.setTextColor(ST77XX_ORANGE);

  tft.setCursor(0,0);
  tft.println("TFT Display Test 1");
  delay(1000);
  tft.fillScreen(ST77XX_WHITE);
  tft.setCursor(0,20);
  tft.println("TFT Display Test 2");
  tft.setCursor(0,30);
  delay(1000);
  tft.fillScreen(ST77XX_WHITE);
  tft.println("TFT Display Test 3");
  tft.setCursor(0,40);
  delay(1000);
  tft.fillScreen(ST77XX_WHITE);
  tft.println("TFT Display Test 4");
  tft.setCursor(0,60);
  delay(1000);
  tft.fillScreen(ST77XX_WHITE);
  tft.println("TFT Display Test 5");
  tft.setCursor(0,80);
  delay(1000);
  tft.fillScreen(ST77XX_WHITE);
  tft.println("TFT Display Test 6");
  tft.setCursor(0,100);
  delay(1000);
  tft.fillScreen(ST77XX_WHITE);
  tft.println("TFT Display Test 7");
  tft.setCursor(0,120);
  delay(1000);
  tft.fillScreen(ST77XX_WHITE);
  tft.println("TFT Display Test 8");
  tft.setCursor(0,140);
  delay(1000);
  tft.fillScreen(ST77XX_WHITE);
  tft.println("TFT Display Test 9");
  tft.setCursor(0,160);
  delay(1000);
  tft.fillScreen(ST77XX_WHITE);
  tft.println("TFT Test Number:10");
  tft.setCursor(0,180);
  delay(1000);
  tft.fillScreen(ST77XX_WHITE);
  tft.println("TFT Test Number: 11");
  tft.setCursor(0,200);
  delay(1000);
  tft.fillScreen(ST77XX_WHITE);
  tft.println("TFT Test Number: 12");
  tft.setCursor(0,220);
  delay(1000);
  tft.fillScreen(ST77XX_WHITE);
  tft.println("TFT Test Number: 13");
  tft.setCursor(0,240);
  delay(1000);
  tft.fillScreen(ST77XX_WHITE);
  tft.println("TFT Test Number: 14");
  delay(3000);

  tft.setRotation(1);
  tft.fillScreen(ST77XX_BLACK);
  tft.setTextColor(ST77XX_ORANGE);

  tft.setCursor(0,0);
  tft.println("TFT Display Test 1");
  delay(1000);
  tft.fillScreen(ST77XX_WHITE);
  tft.setCursor(0,20);
  tft.println("TFT Display Test 2");
  tft.setCursor(0,30);
  delay(1000);
  tft.fillScreen(ST77XX_WHITE);
  tft.println("TFT Display Test 3");
  tft.setCursor(0,40);
  delay(1000);
  tft.fillScreen(ST77XX_WHITE);
  tft.println("TFT Display Test 4");
  tft.setCursor(0,60);
  delay(1000);
  tft.fillScreen(ST77XX_WHITE);
  tft.println("TFT Display Test 5");
  tft.setCursor(0,80);
  delay(1000);
  tft.fillScreen(ST77XX_WHITE);
  tft.println("TFT Display Test 6");
  tft.setCursor(0,100);
  delay(1000);
  tft.fillScreen(ST77XX_WHITE);
  tft.println("TFT Display Test 7");
  tft.setCursor(0,120);
  delay(1000);
  tft.fillScreen(ST77XX_WHITE);
  tft.println("TFT Display Test 8");
  tft.setCursor(0,140);
  delay(1000);
  tft.fillScreen(ST77XX_WHITE);
  tft.println("TFT Display Test 9");
  tft.setCursor(0,160);
  delay(1000);
  tft.fillScreen(ST77XX_WHITE);
  tft.println("TFT Test Number: 10");
  tft.setCursor(0,180);
  delay(1000);
  tft.fillScreen(ST77XX_WHITE);
  tft.println("TFT Test Number: 11");
  tft.setCursor(0,200);
  delay(1000);
  tft.fillScreen(ST77XX_WHITE);
  tft.println("TFT Test Number: 12");
  tft.setCursor(0,220);
  delay(1000);
  tft.fillScreen(ST77XX_WHITE);
  tft.println("TFT Test Number: 13");
  tft.setCursor(0,240);

  tft.setRotation(2);
  tft.fillScreen(ST77XX_BLACK);
  tft.setTextColor(ST77XX_ORANGE);
  tft.setCursor(0,0);
  tft.println("TFT Display Test 1");
  delay(1000);
  tft.fillScreen(ST77XX_WHITE);
  tft.setCursor(0,20);
  tft.println("TFT Display Test 2");
  tft.setCursor(0,30);
  delay(1000);
  tft.fillScreen(ST77XX_WHITE);
  tft.println("TFT Display Test 3");
  tft.setCursor(0,40);
  delay(1000);
  tft.fillScreen(ST77XX_WHITE);
  tft.println("TFT Display Test 4");
  tft.setCursor(0,60);
  delay(1000);
  tft.fillScreen(ST77XX_WHITE);
  tft.println("TFT Display Test 5");
  tft.setCursor(0,80);
  delay(1000);
  tft.fillScreen(ST77XX_WHITE);
  tft.println("TFT Display Test 6");
  tft.setCursor(0,100);
  delay(1000);
  tft.fillScreen(ST77XX_WHITE);
  tft.println("TFT Display Test 7");
  tft.setCursor(0,120);
  delay(1000);
  tft.fillScreen(ST77XX_WHITE);
  tft.println("TFT Display Test 8");
  tft.setCursor(0,140);
  delay(1000);
  tft.fillScreen(ST77XX_WHITE);
  tft.println("TFT Display Test 9");
  tft.setCursor(0,160);
  delay(1000);
  tft.fillScreen(ST77XX_WHITE);
  tft.println("TFT Test Number:10");
  tft.setCursor(0,180);
  delay(1000);
  tft.fillScreen(ST77XX_WHITE);
  tft.println("TFT Test Number: 11");
  tft.setCursor(0,200);
  delay(1000);
  tft.fillScreen(ST77XX_WHITE);
  tft.println("TFT Test Number: 12");
  tft.setCursor(0,220);
  delay(1000);
  tft.fillScreen(ST77XX_WHITE);
  tft.println("TFT Test Number: 13");
  tft.setCursor(0,240);
  delay(1000);
  tft.fillScreen(ST77XX_WHITE);
  tft.println("TFT Test Number: 14");
  delay(3000);

  tft.setRotation(3);
  tft.fillScreen(ST77XX_BLACK);
  tft.setTextColor(ST77XX_ORANGE);

  tft.setCursor(0,0);
  tft.println("TFT Display Test 1");
  delay(1000);
  tft.fillScreen(ST77XX_WHITE);
  tft.setCursor(0,20);
  tft.println("TFT Display Test 2");
  tft.setCursor(0,30);
  delay(1000);
  tft.fillScreen(ST77XX_WHITE);
  tft.println("TFT Display Test 3");
  tft.setCursor(0,40);
  delay(1000);
  tft.fillScreen(ST77XX_WHITE);
  tft.println("TFT Display Test 4");
  tft.setCursor(0,60);
  delay(1000);
  tft.fillScreen(ST77XX_WHITE);
  tft.println("TFT Display Test 5");
  tft.setCursor(0,80);
  delay(1000);
  tft.fillScreen(ST77XX_WHITE);
  tft.println("TFT Display Test 6");
  tft.setCursor(0,100);
  delay(1000);
  tft.fillScreen(ST77XX_WHITE);
  tft.println("TFT Display Test 7");
  tft.setCursor(0,120);
  delay(1000);
  tft.fillScreen(ST77XX_WHITE);
  tft.println("TFT Display Test 8");
  tft.setCursor(0,140);
  delay(1000);
  tft.fillScreen(ST77XX_WHITE);
  tft.println("TFT Display Test 9");
  tft.setCursor(0,160);
  delay(1000);
  tft.fillScreen(ST77XX_WHITE);
  tft.println("TFT Test Number: 10");
  tft.setCursor(0,180);
  delay(1000);
  tft.fillScreen(ST77XX_WHITE);
  tft.println("TFT Test Number: 11");
  tft.setCursor(0,200);
  delay(1000);
  tft.fillScreen(ST77XX_WHITE);
  tft.println("TFT Test Number: 12");
  tft.setCursor(0,220);
  delay(1000);
  tft.fillScreen(ST77XX_WHITE);
  tft.println("TFT Test Number: 13");
  tft.setCursor(0,240);
}
