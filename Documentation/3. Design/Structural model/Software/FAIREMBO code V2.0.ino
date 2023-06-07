//PROJET FAIREMBO code V2.0

//LIANG CHAOJI  x  GOSNIK TOM 

//=======================================================================================//

//PINS 

//STEPMOTORS
#define DirWire 5
#define StepWire 4
#define DirCam 3
#define StepCam 2

#include <Stepper.h>

Stepper WireMotor( 3200, DirWire, StepWire );
Stepper CamMotor( 200, DirCam, StepCam );

//BUTTONS
#define StartButton 13
#define BreakButton 11
#define StopButton 12
#define RelayDriver A2 


//LEDS
#define led1 10
#define led2 9
#define led3 8
#define led4 7
#define led5 6

//=========================================================================================//

//VARIABLES :

int Speed = 1000;           // Vitesse de rotation des moteurs
int Start = 0;             // Etat du système (à 0 pour dire qu'il n'est pas démarré)
int radiusExtruder = 5.5;  // Rayon de l'extrudeur en mm
int ParticlesLength = 0;   // Longueur des particules à découper
int Step = 0;              // Nombre de pas à faire par le moteur guidant le fil
int Max = 0;               // Nombre maximum de particules à découper par bobine
int ParticlesNumber = 0;   // Nombre de particules découpées en temps réel

//=========================================================================================//

//SETUP :

void setup() {

  //SERIAL
  Serial.begin( 9600 );
  
  //BUTTONS
  pinMode( StartButton, INPUT );
  digitalWrite( StartButton, LOW );
  pinMode( BreakButton, INPUT );
  digitalWrite( BreakButton, LOW );
  pinMode( StopButton, INPUT );
  digitalWrite( StopButton, HIGH );

  
  //STEPMOTORS
  CamMotor.setSpeed( Speed );
  WireMotor.setSpeed( Speed );

  //LEDS
  pinMode( led1, OUTPUT );
  digitalWrite( led1, LOW );
  pinMode( led2, OUTPUT );
  digitalWrite( led2, LOW );
  pinMode( led3, OUTPUT );
  digitalWrite( led3, LOW );
  pinMode( led4, OUTPUT );
  digitalWrite( led4, LOW );
  pinMode( led5, OUTPUT );
  digitalWrite( led5, LOW );
  //Relay 
  pinMode( RelayDriver,OUTPUT);
  digitalWrite( RelayDriver, LOW);

}

//=========================================================================================//

//LOOP :

void loop() {
  //Si on appuie sur le bouton Start on lance le programme (bouton est normalement ouvert)
  
  //Serial.println(Start);
  if( digitalRead( StartButton ) == HIGH ){ 
    //Le relais envoie un signal à ventilo 
    digitalWrite( RelayDriver, HIGH );
    delay(100) ;

    // Variables de départ    
    Start = 1;
    ParticlesNumber = 0;

    // Variables associées aux fonctions
    Step =  ( WireLength() / radiusExtruder ) * ( 25600 / (2*PI) );    // Nombre de pas à faire en fonction de la taille du fil à découper
    //25600 est le nombre de pas un tour de moteur

    Max = round( CoilLength() / WireLength() );                        // Nombre de particules à découper en fonction de la bobine

    // LEDs éteintes
    digitalWrite( led1, LOW );
    digitalWrite( led2, LOW );
    digitalWrite( led3, LOW );
    digitalWrite( led4, LOW );
    digitalWrite( led5, LOW );

  }
  
  while( Start == 1 ){
    //Le relais envoie un signal à ventilo 
    // Le moteur de l'extrudeur tourne puis le moteur de la came fait un tour
    //Serial.println(Step);
    WireMotor.step( Step );
    delay( 2 );
    CamMotor.step( 800 ); //25600
    delay( 200 );

    // Compteur de particules coupées
    ParticlesNumber = ParticlesNumber + 1;
    
    // Si on appuie sur le bouton Pause on arrête le système (boutons normalement ouvert)
    if( digitalRead( BreakButton ) == HIGH ) {
     //Le relais envoie un signal à ventilo 
     digitalWrite( RelayDriver,HIGH );
      // Tant qu'on n'appuie ni sur le bouton Start ni sur le bouton Stop (boutons normalement fermé), le système est en pause
      while( digitalRead( StartButton ) == LOW and Start == 1 ) {
      delay(100) ;

        // Si on appuie sur le bouton Stop, le système s'arrête totalement
        if( digitalRead( StopButton ) == LOW ) {  
        //Le relais envoie un signal à ventilo 
        digitalWrite( RelayDriver, LOW);
      
          Start = 0;
          delay( 50 );
        
        }
        
        delay( 50 );
        
      }
      
    }

    // Si on appuie sur le bouton Stop on arrête le système
    if( digitalRead( StopButton ) == LOW ) {
     //Le relais envoie un signal à ventilo 
      digitalWrite( RelayDriver, LOW);
      


      Start = 0;
      delay(100) ;  
    }
      

    //Si la bobine est utilisée au 1/5 
    if( ParticlesNumber == round( Max / 5 ) ) {

      digitalWrite( led1, HIGH );
      
    }

    //Si la bobine est utilisée aux 2/5 
    if( ParticlesNumber == round( ( Max * 2 ) / 5 ) ) {

      digitalWrite( led2, HIGH );
      
    }
    
    //Si la bobine est utilisée aux 3/5 
    if( ParticlesNumber == round( ( Max * 3 ) / 5 ) ) {

      digitalWrite( led3, HIGH );
      
    }

    //Si la bobine est utilisée aux 4/5 
    if( ParticlesNumber == round( ( Max * 4 ) / 5 ) ) {

      digitalWrite( led4, HIGH );
      
    }

    // Si la bobine est épuisée on arrête le système 
    if( ParticlesNumber >= Max ) {

      digitalWrite( led5, HIGH );
      Start = 0;
      delay(5000);
        
      }
    
  }
  
  delay(20);

  // On éteint tout 
  digitalWrite( led1, LOW );
  digitalWrite( led2, LOW );
  digitalWrite( led3, LOW );
  digitalWrite( led4, LOW );
  digitalWrite( led5, LOW );
  digitalWrite( RelayDriver, LOW);
  
}

//=========================================================================================//

// FONCTION SELECTION TAILLE DE FIL
// Retourne la taille du fil à couper en fonction de l'information donné par le potentiomètre

float WireLength(){
  
  float CuttingLength;
  
  
  int pot0 = analogRead( A0 );  // lis la valeur du potentiometre
  Serial.println(pot0);
  
  if( pot0 <= 150 ){
    CuttingLength = 0.3;
  }
  
  if( 150 < pot0 and pot0 <= 400 ){
    CuttingLength = 0.5;
  }  
  
  if( 400 < pot0 and pot0 <= 650 ){
    CuttingLength = 0.7;
  }  
  
  if( 650 < pot0 and pot0 <= 900 ){
    CuttingLength = 0.9;
  }  
  
  if( 900 < pot0 ){
    CuttingLength = 1.1;
  }
  //Serial.print(",");  
  //Serial.println(CuttingLength);
  return( CuttingLength ); 

}

// FONCTION SELECTION LONGUEUR DE LA BOBINE

int CoilLength() {
  
  float Length;
  
  int pot1 = analogRead( A1 );
  
  if( pot1 <= 150 ){
    Length = 500;
  }
  
  if( 150 < pot1 and pot1 <= 400 ){
    Length = 1000;
  }  
  
  if( 400 < pot1 and pot1 <= 650 ){
    Length = 2000;
  }  
  
  if( 650 < pot1 and pot1 <= 900 ){
    Length = 3000;
  }  
  
  if( 900 < pot1  ){
    Length = 5000;
  }
  
  Serial.print("\t"); 
  Serial.println(pot1);
  return( Length );
  
}
