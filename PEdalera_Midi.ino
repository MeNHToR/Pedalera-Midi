#include <MIDI.h> //https://github.com/FortySevenEffects/arduino_midi_library/
/**************************************/
#include <ClickButton.h>
#include <midi.h>
#include <midi_defs.h>
#include <midi_message.h>
#include <midi_namespace.h>
#include <midi_settings.h>



//Entradas
#define switch1     22     //Switch 1
#define switch2     24     //Switch 2
#define switch3     26     //Switch 3
#define switch4     28     //Switch 4
#define switch5     30     //Switch 5

//Salidas
#define led1        7     //led 1
#define led2        6     //led 2
#define led3        5     //led 3
#define led4        4     //led 4
#define led5        3     //led 5

int Boton = 0;            //Variable para activar la señal Midi que corresponda al Boton pulsado

/**************************************/

//Instancia para controlar el puerto MIDI
MIDI_CREATE_INSTANCE(HardwareSerial,Serial, midiOut); 

void setup()
{
  pinMode(switch1,INPUT_PULLUP); // setup button as input
  pinMode(switch2,INPUT_PULLUP); // setup button as input
  pinMode(switch3,INPUT_PULLUP); // setup button as input
  pinMode(switch4,INPUT_PULLUP); // setup button as input
  pinMode(switch5,INPUT_PULLUP); // setup button as input
   
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);

  Serial.begin(31250); // setup serial for MIDI
} 
/****************************************/
void loop()
{
//si se pulsa un pulsador, se activa su led.
//Y se desactivan todos los demás
//Se manda el comando MIDI que toca
  
  if(digitalRead(switch1) == LOW) { // check button state
    delay(50); // software de-bounce
    if(digitalRead(switch1) == LOW) { // check button state again
      Boton = 1;
      digitalWrite(led1,HIGH);
      digitalWrite(led2,LOW);
      digitalWrite(led3,LOW);
      digitalWrite(led4,LOW);
      digitalWrite(led5,LOW);
      delay(250);
    }
  }

    if(digitalRead(switch2) == LOW) { // check button state
    delay(50); // software de-bounce
    if(digitalRead(switch2) == LOW) { // check button state again
      Boton = 2;
      digitalWrite(led1,LOW);
      digitalWrite(led2,HIGH);
      digitalWrite(led3,LOW);
      digitalWrite(led4,LOW);
      digitalWrite(led5,LOW);
      delay(250);
    }
  }

    if(digitalRead(switch3) == LOW) { // check button state
    delay(50); // software de-bounce
    if(digitalRead(switch3) == LOW) { // check button state again
      Boton = 3;
      digitalWrite(led1,LOW);
      digitalWrite(led2,LOW);
      digitalWrite(led3,HIGH);
      digitalWrite(led4,LOW);
      digitalWrite(led5,LOW);
      delay(250);
    }
  }

    if(digitalRead(switch4) == LOW) { // check button state
    delay(50); // software de-bounce
    if(digitalRead(switch4) == LOW) { // check button state again
      Boton = 4;
      digitalWrite(led1,LOW);
      digitalWrite(led2,LOW);
      digitalWrite(led3,LOW);
      digitalWrite(led4,HIGH);
      digitalWrite(led5,LOW);
      delay(250);
    }
  }

    if(digitalRead(switch5) == LOW) { // check button state
    delay(50); // software de-bounce
    if(digitalRead(switch5) == LOW) { // check button state again
      Boton = 5;
      digitalWrite(led1,LOW);
      digitalWrite(led2,LOW);
      digitalWrite(led3,LOW);
      digitalWrite(led4,LOW);
      digitalWrite(led5,HIGH);
      delay(250);
    }
  }
  
switch (Boton) {
  case 1:
    // Activar/Desactivar el Afinador
    midiOut.sendControlChange(68,0,1); // send a MIDI Control Change command
    Boton = 0;
    delay(2000);
    digitalWrite(led1,LOW);
    digitalWrite(led2,LOW);
    digitalWrite(led3,LOW);
    digitalWrite(led4,LOW);
    digitalWrite(led5,LOW);
    break;
  case 2:
    //Activo el Modo Snapshot
    // Activo el preset Stomp Trifecta (39A)
    midiOut.sendControlChange(71,3,1); // send a MIDI Control Change command
    midiOut.sendProgramChange(114,1); // send a MIDI Program Change command
    Boton = 0;
    delay(2000);
    digitalWrite(led1,LOW);
    digitalWrite(led2,LOW);
    digitalWrite(led3,LOW);
    digitalWrite(led4,LOW);
    digitalWrite(led5,LOW);
    break;
  case 3:
    //Activo el Modo Snapshot
    // Activo el preset Stomp TrifectaCH (39B)
    midiOut.sendControlChange(71,3,1); // send a MIDI Control Change command
    midiOut.sendProgramChange(115,1); // send a MIDI Program Change command
    Boton = 0;
    delay(2000);
    digitalWrite(led1,LOW);
    digitalWrite(led2,LOW);
    digitalWrite(led3,LOW);
    digitalWrite(led4,LOW);
    digitalWrite(led5,LOW);
    break;
  case 4:
    //Activo el Modo Snapshot
    // Activo el preset Stomp TrifectaCH_MeNHToR (39C)
    midiOut.sendControlChange(71,3,1); // send a MIDI Control Change command
    midiOut.sendProgramChange(116,1); // send a MIDI Program Change command
    Boton = 0;
    delay(2000);
    digitalWrite(led1,LOW);
    digitalWrite(led2,LOW);
    digitalWrite(led3,LOW);
    digitalWrite(led4,LOW);
    digitalWrite(led5,LOW);
    break;
  case 5:
    //Activo el Modo Snapshot
    // Activo el preset Stomp Reserva (40A)
    midiOut.sendControlChange(71,3,1); // send a MIDI Control Change command
    midiOut.sendProgramChange(117,1); // send a MIDI Program Change command
    Boton = 0;
    delay(2000);
    digitalWrite(led1,LOW);
    digitalWrite(led2,LOW);
    digitalWrite(led3,LOW);
    digitalWrite(led4,LOW);
    digitalWrite(led5,LOW);
    break;
}
Boton = 0;
  
}  
