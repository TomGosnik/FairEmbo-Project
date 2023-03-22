//Code Arduino issu de mon rapport de stage donc je pense qu'il doit être correct (en tout cas avec les //anciens moteurs et drivers) :


//PROJET FAIREMBO

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

Stepper CamMotor( 3200, DirCam, StepCam );

//BUTTONS

#define StartButton 13

#define BreakButton 11

#define StopButton 12

//LEDS

#define led1 10

#define led2 9

#define led3 8

#define led4 7

#define led5 6

//=========================================================================================//

//VARIABLES :

int Speed = 1000;        // Vitesse de rotation des moteurs

int Start = 0;          // Etat du système (à 0 pour dire qu'il n'est pas démarré)

int radiusExtruder = 5.5;  // Rayon de l'extrudeur en mm

int ParticlesLength = 0;   // Longueur des particules à découper

int Step = 0;           // Nombre de pas à faire par le moteur guidant le fil

int Max = 0;            // Nombre maximum de particules à découper par bobine

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

  digitalWrite( StopButton, LOW );

 

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

}

//=========================================================================================//

//LOOP :

void loop() {

  //Si on appuie sur le bouton Start on lance le programme

  if( digitalRead( StartButton ) == LOW ){

 // Variables de départ

 Start = 1;

 ParticlesNumber = 0;

 // Variables associées aux fonctions

 Step = - ( WireLength( ) / radiusExtruder ) * ( 25600 / 6.28 ); // Nombre de pas à faire en    fonction de la taille du fil à découper

 Max = round( CoilLength( ) / WireLength( ) ); // Nombre de particules à découper en fonction de la bobine

 // LEDs éteintes

 digitalWrite( led1, LOW );

 digitalWrite( led2, LOW );

 digitalWrite( led3, LOW );

 digitalWrite( led4, LOW );

 digitalWrite( led5, LOW );

    

  }

 

  while( Start == 1 ){

    

 // Le moteur de l'extrudeur tourne puis le moteur de la came fait un tour

 WireMotor.step( Step );

 delay( 2 );

 CamMotor.step( 200 );

 delay( 100 );

 // Compteur de particules coupées

 ParticlesNumber = ParticlesNumber + 1;

    

 // Si on appuie sur le bouton Pause on arrête le système (boutons normalement fermés)

 if( digitalRead( BreakButton ) == LOW ) {

   // Tant qu'on n'appuie ni sur le bouton Start ni sur le bouton Stop, le système est en pause

   while( digitalRead( StartButton ) == HIGH and Start == 1 ) {

     // Si on appuie sur le bouton Stop, le système s'arrête totalement

     if( digitalRead( StopButton ) == LOW ) {

       Start = 0;

       delay( 50 );

     

     }

     

     delay( 50 );

     

   }

   

 }

 // Si on appuie sur le bouton Stop on arrête le système

 if( digitalRead( StopButton ) == LOW ) {

   Start = 0;

     

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

   delay(50);

     

   }

    

  }

 

  delay(20);

  // On éteint tout

  digitalWrite( led1, LOW );

  digitalWrite( led2, LOW );

  digitalWrite( led3, LOW );

  digitalWrite( led4, LOW );

  digitalWrite( led5, LOW );

 

}

//=========================================================================================//

// FONCTION SÉLECTION TAILLE DE FIL

// Retourne la taille du fil à couper en fonction de l'information donné par le potentiomètre

float WireLength(){

 

  float CuttingLength;

 

  int pot0 = analogRead( A1 );  // lis la valeur du potentiomètre

 

  if( pot0 <= 5 ){

 CuttingLength = 0.3;

  }

 

  if( 5 < pot0 and pot0 <= 295 ){

 CuttingLength = 0.5;

  }  

 

  if( 295 < pot0 and pot0 <= 580 ){

 CuttingLength = 0.7;

  }  

 

  if( 580 < pot0 and pot0 <= 845 ){

 CuttingLength = 0.9;

  }  

 

  if( 845 < pot0 ){

 CuttingLength = 1.1;

  }

 

  return( CuttingLength );

 

}

// FONCTION SÉLECTION LONGUEUR DE LA BOBINE

int CoilLength() {

 

  float Length;

 

  int pot1 = analogRead( A0 );

 

  if( pot1 <= 135.2 ){

 Length = 500;

  }

 

  if( 135.2 < pot1 and pot1 <= 270.4 ){

 Length = 1000;

  }  

 

  if( 270.4 < pot1 and pot1 <= 405.6 ){

 Length = 2000;

  }  

 

  if( 405.6 < pot1 and pot1 <= 540.8 ){

 Length = 3000;

  }  

 

  if( 540.8 < pot1 and pot1 <= 676 ){

 Length = 5000;

  }

 

  return( Length );

 

}

