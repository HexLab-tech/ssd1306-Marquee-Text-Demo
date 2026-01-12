#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#define W 128
#define H 64

Adafruit_SSD1306 display(W, H, &Wire, -1);

const char text[] = "your text here";

int textSize = 3;          // KOCAMAN
int textX;                 // kayan X
int textY;                 // ortalama Y
int textWidth;             // yazının piksel genişliği

void setup() {
  display.begin(SSD1306_SWITCHCAPVCC, 0x3C);
  display.clearDisplay();
  display.setTextColor(SSD1306_WHITE);

  display.setTextSize(textSize);

  // Yazı ölçüsü hesapla
  int16_t x1, y1;
  uint16_t w, h;
  display.getTextBounds(text, 0, 0, &x1, &y1, &w, &h);

  textWidth = w;
  textX = W;               // sağdan başla (ilk başta CA görünsün)
  textY = (H - h) / 2;     // dikey ortala
}

void loop() {
  display.clearDisplay();

  display.setCursor(textX, textY);
  display.print(text);

  display.display();

  textX -= 1;  // sola kay

  // Yazı tamamen çıktıysa başa sar
  if (textX < -textWidth) {
    textX = W;
  }

  delay(20); // hız (küçült → daha hızlı)
}
