#include "BluetoothSerial.h"

// Cria o objeto BluetoothSerial
BluetoothSerial ESP_BT;

#define LED_PIN 2  // GPIO2
const int LED_BT = 4; //GPIO4


void setup() {
  Serial.begin(115200);
  
  pinMode(LED_PIN, OUTPUT);
  pinMode(LED_BT, OUTPUT);
  digitalWrite(LED_PIN, LOW);

  if (ESP_BT.begin("ESP32_LED_CONTROL")) {
    Serial.println("✅ Bluetooth iniciado!");
    digitalWrite(LED_BT, HIGH);   // Liga o LED no pino 4
  } else {
    Serial.println("❌ Falha ao iniciar Bluetooth!");
    digitalWrite(LED_BT, LOW);    // LED apagado
  }

}

void loop() {
  if (ESP_BT.available()) {
    String command = ESP_BT.readStringUntil('\n');
    command.trim(); // remove espaços e quebras

    Serial.println("Recebido: " + command);

    if (command == "ON") {
      digitalWrite(LED_PIN, HIGH);
      ESP_BT.println("LED ligado!");
    }
    else if (command == "OFF") {
      digitalWrite(LED_PIN, LOW);
      ESP_BT.println("LED desligado!");
    }
    else {
      ESP_BT.println("Comando inválido!");
    }
  }
}
