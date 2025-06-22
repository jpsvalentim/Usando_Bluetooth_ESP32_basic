## Controle de LED via Bluetooth com ESP32

Este projeto permite o controle de um LED conectado ao ESP32 utilizando comunicação Bluetooth serial. O usuário pode ligar e desligar o LED através de comandos enviados por um aplicativo de terminal Bluetooth no celular.

## 🚀 Tecnologias e Ferramentas
🔌 ESP32

🔵 Bluetooth Serial (Classic)
💡 Linguagem: C++ (Framework Arduino)
🛠️ IDE: PlatformIO (VS Code) ou Arduino IDE
📲 App Bluetooth: Serial Bluetooth Terminal (Android) ou equivalente no iOS


## 🗂️ Estrutura do Projeto
📁 Controle_LED_Bluetooth_ESP32
 ┣ 📄 platformio.ini (se estiver usando PlatformIO)
 ┣ 📄 README.md
 ┗ 📄 src
    ┗ 📄 main.cpp (código principal)


## 🔌 Esquemático de Hardware
ESP32	Componente
GPIO 4	LED (com resistor de 220Ω)
GPIO 2	LED (com resistor de 220Ω)


## 🧠 Funcionalidades
✅ Ligar o LED através do Bluetooth (enviando o comando 1).
✅ Desligar o LED (enviando o comando 0).
📡 Comunicação sem fio entre celular e ESP32 usando Bluetooth Serial.


## 📲 Aplicativo Recomendado
🔗 Serial Bluetooth Terminal (Android)
👉 Baixar na Play Store

Alternativas para iOS:
BlueTerm, Bluetooth Terminal HC-05, ou similares.

## 🏗️ Instalação e Upload
✅ Dependências:
- Biblioteca BluetoothSerial (já nativa no ESP32 com Arduino).
- Drivers do ESP32 instalados na sua máquina.

## 🔧 Upload do Código:
1.Abra na Arduino IDE ou PlatformIO (VS Code).
2.Selecione a placa: ESP32 Dev Module.
3.Conecte o ESP32 via USB.
4.Faça o upload do código.

## 💻 Código Principal
# explore o diretório

##🔗 Como Usar
1.Ligue seu ESP32 com o LED conectado no GPIO 4.
2.No celular, ative o Bluetooth e pareie com o ESP32 (nome ESP32_BT).
3.Conecte pelo aplicativo.

4. Digite:
1(ON) → para ligar o LED.
0(OFF) → para desligar o LED.

5.🚀 Veja a resposta no app e no monitor serial.


## 🎯 Melhorias Futuras
- Controle de múltiplos LEDs.
- Integração com sensores (DHT11, LDR, etc.).
- Inclusão de comandos para ativar outros dispositivos ou automações.

## 👨‍💻 Autor
João Pedro Silva Valentim
📍 SENAI - Jaraguá do Sul - CentroWEG
📅 2025 
