#include "BluetoothSerial.h"

// Cria o objeto BluetoothSerial
BluetoothSerial ESP_BT;

#define LED_PIN 2  // GPIO2

void setup() {
  Serial.begin(115200);
  ESP_BT.begin("ESP32_LED_CONTROL"); // Nome do dispositivo Bluetooth

  pinMode(LED_PIN, OUTPUT);
  digitalWrite(LED_PIN, LOW);

  Serial.println("Bluetooth iniciado. Aguardando comandos...");
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
