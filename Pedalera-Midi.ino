#include <MIDI.h> //https://github.com/FortySevenEffects/arduino_midi_library/
/**************************************/
//#include <ClickButton.h>
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
//Entradas Ampliación
#define switch6     44     //Switch 6
#define switch7     46     //Switch 7
#define switch8     48     //Switch 8
#define switch9     50     //Switch 9
#define switch10    52     //Switch 10



//Salidas
#define led1        7      //led 1
#define led2        6      //led 2
#define led3        5      //led 3
#define led4        4      //led 4
#define led5        3      //led 5
//Salidas Ampliación
#define led6        45     //led 6
#define led7        47     //led 7
#define led8        49     //led 8
#define led9        51     //led 9
#define led10       53     //led 10



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
  pinMode(switch6,INPUT_PULLUP); // setup button as input
  pinMode(switch7,INPUT_PULLUP); // setup button as input
  pinMode(switch8,INPUT_PULLUP); // setup button as input
  pinMode(switch9,INPUT_PULLUP); // setup button as input
  pinMode(switch10,INPUT_PULLUP); // setup button as input
   
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);
  pinMode(led6, OUTPUT);
  pinMode(led7, OUTPUT);
  pinMode(led8, OUTPUT);
  pinMode(led9, OUTPUT);
  pinMode(led10, OUTPUT);

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
      digitalWrite(led6,LOW);
      digitalWrite(led7,LOW);
      digitalWrite(led8,LOW);
      digitalWrite(led9,LOW);
      digitalWrite(led10,LOW);
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
      digitalWrite(led6,LOW);
      digitalWrite(led7,LOW);
      digitalWrite(led8,LOW);
      digitalWrite(led9,LOW);
      digitalWrite(led10,LOW);      
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
      digitalWrite(led6,LOW);
      digitalWrite(led7,LOW);
      digitalWrite(led8,LOW);
      digitalWrite(led9,LOW);
      digitalWrite(led10,LOW);
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
      digitalWrite(led6,LOW);
      digitalWrite(led7,LOW);
      digitalWrite(led8,LOW);
      digitalWrite(led9,LOW);
      digitalWrite(led10,LOW);
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
      digitalWrite(led6,LOW);
      digitalWrite(led7,LOW);
      digitalWrite(led8,LOW);
      digitalWrite(led9,LOW);
      digitalWrite(led10,LOW);
      delay(250);
    }
  }
    if(digitalRead(switch6) == LOW) { // check button state
    delay(50); // software de-bounce
    if(digitalRead(switch6) == LOW) { // check button state again
      Boton = 6;
      digitalWrite(led1,LOW);
      digitalWrite(led2,LOW);
      digitalWrite(led3,LOW);
      digitalWrite(led4,LOW);
      digitalWrite(led5,LOW);
      digitalWrite(led6,HIGH);
      digitalWrite(led7,LOW);
      digitalWrite(led8,LOW);
      digitalWrite(led9,LOW);
      digitalWrite(led10,LOW);
      delay(250);
    }
  }

  if(digitalRead(switch7) == LOW) { // check button state
    delay(50); // software de-bounce
    if(digitalRead(switch7) == LOW) { // check button state again
      Boton = 7;
      digitalWrite(led1,LOW);
      digitalWrite(led2,LOW);
      digitalWrite(led3,LOW);
      digitalWrite(led4,LOW);
      digitalWrite(led5,LOW);
      digitalWrite(led6,LOW);
      digitalWrite(led7,HIGH);
      digitalWrite(led8,LOW);
      digitalWrite(led9,LOW);
      digitalWrite(led10,LOW);
      delay(250);
    }
  }

  if(digitalRead(switch8) == LOW) { // check button state
    delay(50); // software de-bounce
    if(digitalRead(switch8) == LOW) { // check button state again
      Boton = 8;
      digitalWrite(led1,LOW);
      digitalWrite(led2,LOW);
      digitalWrite(led3,LOW);
      digitalWrite(led4,LOW);
      digitalWrite(led5,LOW);
      digitalWrite(led6,LOW);
      digitalWrite(led7,LOW);
      digitalWrite(led8,HIGH);
      digitalWrite(led9,LOW);
      digitalWrite(led10,LOW);
      delay(250);
    }
  }

  if(digitalRead(switch9) == LOW) { // check button state
    delay(50); // software de-bounce
    if(digitalRead(switch9) == LOW) { // check button state again
      Boton = 9;
      digitalWrite(led1,LOW);
      digitalWrite(led2,LOW);
      digitalWrite(led3,LOW);
      digitalWrite(led4,LOW);
      digitalWrite(led5,LOW);
      digitalWrite(led6,LOW);
      digitalWrite(led7,LOW);
      digitalWrite(led8,LOW);
      digitalWrite(led9,HIGH);
      digitalWrite(led10,LOW);
      delay(250);
    }
  }

  if(digitalRead(switch10) == LOW) { // check button state
    delay(50); // software de-bounce
    if(digitalRead(switch10) == LOW) { // check button state again
      Boton = 10;
      digitalWrite(led1,LOW);
      digitalWrite(led2,LOW);
      digitalWrite(led3,LOW);
      digitalWrite(led4,LOW);
      digitalWrite(led5,LOW);
      digitalWrite(led6,LOW);
      digitalWrite(led7,LOW);
      digitalWrite(led8,LOW);
      digitalWrite(led9,LOW);
      digitalWrite(led10,HIGH);
      delay(250);
    }
  }

 switch (Boton) {
  case 1:
    //
    //   x x  x x
    //    x    x
    //   x x  x o
    //
    // Amp Control. Lead + FX
    midiOut.sendControlChange(82,126,1); // send a MIDI Program Change command - Lead + FX to AMP
    delay(100);
    midiOut.sendControlChange(69,2,1); // send a MIDI Control Change command - Activar Snapshot 3
    
    Boton = 0;
    delay(500);
    digitalWrite(led1,LOW);
    digitalWrite(led2,LOW);
    digitalWrite(led3,LOW);
    digitalWrite(led4,LOW);
    digitalWrite(led5,LOW);
    digitalWrite(led6,LOW);
    digitalWrite(led7,LOW);
    digitalWrite(led8,LOW);
    digitalWrite(led9,LOW);
    digitalWrite(led10,LOW);
    break;

  case 2:
    // Activo el Modo Snapshot
    // Activo el preset (42A)
    //
    //   x x  x x
    //    x    x
    //   x x  o x
    //
    // Amp Control. Crunch + FX
    midiOut.sendControlChange(81,126,1);  // send a MIDI Program Change command - Crunch + FX to AMP
    delay(100);
    midiOut.sendControlChange(69,1,1); // send a MIDI Control Change command - Activar Snapshot 2

    Boton = 0;
    delay(500);
    digitalWrite(led1,LOW);
    digitalWrite(led2,LOW);
    digitalWrite(led3,LOW);
    digitalWrite(led4,LOW);
    digitalWrite(led5,LOW);
    digitalWrite(led6,LOW);
    digitalWrite(led7,LOW);
    digitalWrite(led8,LOW);
    digitalWrite(led9,LOW);
    digitalWrite(led10,LOW);
    break;
  case 3:
    //
    //   x x  x x
    //    x    o
    //   x x  x x
    //
    // Activar/Desactivar el Afinador
    midiOut.sendControlChange(68,0,1); // send a MIDI Control Change command - Afinador
    Boton = 0;
    delay(500);
    digitalWrite(led1,LOW);
    digitalWrite(led2,LOW);
    digitalWrite(led3,LOW);
    digitalWrite(led4,LOW);
    digitalWrite(led5,LOW);
    digitalWrite(led6,LOW);
    digitalWrite(led7,LOW);
    digitalWrite(led8,LOW);
    digitalWrite(led9,LOW);
    digitalWrite(led10,LOW);
    break;
  case 4:
    //
    //   x x  x o
    //    x    x
    //   x x  x x
    //
    // Activo el FS5
    midiOut.sendControlChange(53,126,1); // send a MIDI Control Change command - Actuar como FS5
    
    Boton = 0;
    delay(500);
    digitalWrite(led1,LOW);
    digitalWrite(led2,LOW);
    digitalWrite(led3,LOW);
    digitalWrite(led4,LOW);
    digitalWrite(led5,LOW);
    digitalWrite(led6,LOW);
    digitalWrite(led7,LOW);
    digitalWrite(led8,LOW);
    digitalWrite(led9,LOW);
    digitalWrite(led10,LOW);
    break;
  case 5:
    //
    //   x x  o x
    //    x    x  
    //   x x  x x
    //
    // Activo el FS4
    midiOut.sendControlChange(52,126,1); // send a MIDI Control Change command - Actuar como FS4
    
    //midiOut.sendControlChange(52,126,1); // send a MIDI Control Change command - Actuar como FS4
    //midiOut.sendControlChange(53,126,1); // send a MIDI Control Change command - Actuar como FS5
    //midiOut.sendControlChange(69,0,1); // send a MIDI Control Change command - Activar Snapshot 1
    //midiOut.sendControlChange(69,1,1); // send a MIDI Control Change command - Activar Snapshot 2
    //midiOut.sendControlChange(69,2,1); // send a MIDI Control Change command - Activar Snapshot 3
    ///////////////////////////////////////////////////////////////////////////////////////////////
    //midiOut.sendControlChange(71,0,1); // send a MIDI Control Change command - Modo Stomp
    //midiOut.sendProgramChange(125,1); // send a MIDI Program Change command - Preset 42C
    ///////////////////////////////////////////////////////////////////////////////////////////////
    //midiOut.sendControlChange(71,3,1); // send a MIDI Control Change command - Modo Snapshot
    //midiOut.sendProgramChange(122,1); // send a MIDI Program Change command - Preset 41C

    
    Boton = 0;
    delay(500);
    digitalWrite(led1,LOW);
    digitalWrite(led2,LOW);
    digitalWrite(led3,LOW);
    digitalWrite(led4,LOW);
    digitalWrite(led5,LOW);
    digitalWrite(led6,LOW);
    digitalWrite(led7,LOW);
    digitalWrite(led8,LOW);
    digitalWrite(led9,LOW);
    digitalWrite(led10,LOW);
    break;

  case 6:
    //
    //   x x  x x  
    //    x    x  
    //   x o  x x  
    //
    // Amp Control. Clean + FX
    midiOut.sendControlChange(80,126,1);  // send a MIDI Program Change command - Clean + FX to AMP
    delay(100);
    midiOut.sendControlChange(69,0,1); // send a MIDI Control Change command - Activar Snapshot 1
        
    Boton = 0;
    delay(500);
    digitalWrite(led1,LOW);
    digitalWrite(led2,LOW);
    digitalWrite(led3,LOW);
    digitalWrite(led4,LOW);
    digitalWrite(led5,LOW);
    digitalWrite(led6,LOW);
    digitalWrite(led7,LOW);
    digitalWrite(led8,LOW);
    digitalWrite(led9,LOW);
    digitalWrite(led10,LOW);
    break;

  case 7:
    // Activo el Modo Snapshot
    // Activo el preset (42A)
    //
    //   x x  x x  
    //    x    x
    //   o x  x x  
    //
    //Activo el modo Stomp
    //Activo el preset 42C
    midiOut.sendControlChange(71,3,1); // send a MIDI Control Change command - Modo Snapshot
    midiOut.sendProgramChange(125,1); // send a MIDI Program Change command - Preset 42C

    Boton = 0;
    delay(500);
    digitalWrite(led1,LOW);
    digitalWrite(led2,LOW);
    digitalWrite(led3,LOW);
    digitalWrite(led4,LOW);
    digitalWrite(led5,LOW);
    digitalWrite(led6,LOW);
    digitalWrite(led7,LOW);
    digitalWrite(led8,LOW);
    digitalWrite(led9,LOW);
    digitalWrite(led10,LOW);
    break;
  case 8:
    //
    //   x x  x x  
    //    o    x
    //   x x  x x  
    //
    // Activo el Modo Stomp
    // Activo el preset (42B)
    midiOut.sendControlChange(71,3,1); // send a MIDI Control Change command - Modo Snapshot
    midiOut.sendProgramChange(124,1); // send a MIDI Program Change command - Preset 42B

        
    Boton = 0;
    delay(500);
    digitalWrite(led1,LOW);
    digitalWrite(led2,LOW);
    digitalWrite(led3,LOW);
    digitalWrite(led4,LOW);
    digitalWrite(led5,LOW);
    digitalWrite(led6,LOW);
    digitalWrite(led7,LOW);
    digitalWrite(led8,LOW);
    digitalWrite(led9,LOW);
    digitalWrite(led10,LOW);
    break;
  case 9:
    //
    //   x o  x x  
    //    x    x
    //   x x  x x  
    //
    // Activo el Modo Snapshot
    // Activo el preset (42A)
    midiOut.sendControlChange(71,3,1); // send a MIDI Control Change command - Modo Snapshot
    midiOut.sendProgramChange(123,1); // send a MIDI Program Change command - Preset 42A
    
    Boton = 0;
    delay(500);
    digitalWrite(led1,LOW);
    digitalWrite(led2,LOW);
    digitalWrite(led3,LOW);
    digitalWrite(led4,LOW);
    digitalWrite(led5,LOW);
    digitalWrite(led6,LOW);
    digitalWrite(led7,LOW);
    digitalWrite(led8,LOW);
    digitalWrite(led9,LOW);
    digitalWrite(led10,LOW);
    break;
  case 10:
    //
    //   o x  x x  
    //    x    x
    //   x x  x x  
    //
    // Activo el Modo Stomp
    // Activo el preset (41C)
    midiOut.sendControlChange(71,3,1); // send a MIDI Control Change command - Modo Snapshot
    midiOut.sendProgramChange(122,1); // send a MIDI Program Change command - Preset 41C
    
    Boton = 0;
    delay(500);
    digitalWrite(led1,LOW);
    digitalWrite(led2,LOW);
    digitalWrite(led3,LOW);
    digitalWrite(led4,LOW);
    digitalWrite(led5,LOW);
    digitalWrite(led6,LOW);
    digitalWrite(led7,LOW);
    digitalWrite(led8,LOW);
    digitalWrite(led9,LOW);
    digitalWrite(led10,LOW);
    break; 
}
Boton = 0;
  
}  
