# ESP32-Wokwi-Project

Ce projet contient un exemple de simulation ESP32 réalisé avec [Wokwi](https://wokwi.com).

## Matériel requis
- ESP32 DevKit V1
- Un Bouton
- Une résistance 150ohms
- Une Led
- Câbles de connexion

## Fonctionnalités
- Détection de mouvement
- Contrôle d'un relais avec temporisation
- Simulation Wokwi intégrée

## Schéma de connexion
| Composant  | ESP32 Pin |
|------------|----------|
| btn   | GPIO 15  |
| led   | GPIO 2  |

## Comment exécuter
1. Ouvrir le fichier `.ino` sur l'IDE Arduino.
2. Charger le programme sur un ESP32 ou simuler avec Wokwi.

## Code source
```cpp
const int btn = 15;
const int led = 2;

bool etat = false;

void setup() {
  Serial.begin(115200);
  pinMode(btn, INPUT_PULLUP);
  pinMode(led, OUTPUT);
}


void loop() {
  bool btn_etat = digitalRead(btn);
  if (btn_etat == LOW) {
    etat = !etat;
    digitalWrite(led, etat);
    delay(500);
  }
}
```
---
## Auteur
Paul Jacotin
