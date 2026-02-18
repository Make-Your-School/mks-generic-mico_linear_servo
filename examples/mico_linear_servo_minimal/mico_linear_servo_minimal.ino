// schließe einen Servo an Pin D9 des Arduino / Grove Shield an
// schließe einen Dreh-Regler an Pin A0 des Arduino / Grove Shield an
// lade den code auf den Arduino
// nun kannst du die Position des Servos mit Hilfe des Dreh-Reglers einstellen

#include <Servo.h>

// erstellt ein Servo-Objekt, um einen Servomotor zu steuern
Servo myservo;

// Analog Pin, an dem das Potentiometer angeschlossen ist
int potpin = A0;
// Variable um den Wert des Analogen Pin zwischenzuspeichern
int val;

void setup() {
    // verknüpft den Servomotor an Pin 9 mit dem Servo-Objekt
    myservo.attach(9);
}

void loop() {
    // liest das Potentiometer aus (Wert zwischen 0 und 1023)
    val = analogRead(potpin);
    // rechnet den Wert in den Wertebereich des Servomotors (zwischen 0 und 180)
    // um
    val = map(val, 0, 1023, 0, 180);
    // überträgt die Zielposition an den Servomotors
    myservo.write(val);
    // lässt dem Servomotor Zeit, die Zielposition zu erreichen
    delay(15);
}
