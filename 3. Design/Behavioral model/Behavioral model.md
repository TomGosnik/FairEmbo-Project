# Behavioral model

The system is composed of two mechanically moving parts. These two movements are driven by the two stepper motors: 
- the one linked to the extruder which guides and advances the wire,
- the one linked to the cam which cuts the wire.

## Wire guide

The first stepper motor is connected to an extruder, used today in 3D printers. An extruder is composed of different parts that are important for its operation:
- a gear wheel attached to the motor shaft,
- a ball bearing pressed against the gear wheel to prevent the wire from slipping,
- a nozzle that guides the wire to the place where it will be cut.

The gear wheel drives the bearing, which causes the wire to translate as shown below.
The translation and therefore the step corresponding to the size of the cut particles are therefore the image of the step imposed by the stepper motor.

<p align="center"> 
 <img src="https://user-images.githubusercontent.com/109949167/185093643-2ff640a2-b763-41d6-8711-f9bc578f8184.png" />
</p>

## Wire cutting

The principle of cutting is that of the cam which transforms the rotational movement imposed by the motor into a translational movement.
A cam is an off-axis cylinder, i.e. the radius is not the same depending on the angle of rotation. It is this difference in radius that allows the red part to be translated (see below). 

To avoid friction, a ball bearing is used to link the cam and the red part.

This red part is guided in translation with a rail system. This red part is also directly screwed to the mobile blade, which is itself in translation against the second immobile blade.

In order to be able to move back and forth on the blade system, it was decided to use springs so that the red part could return to its initial position.

<p align="center"> 
 <img src="https://user-images.githubusercontent.com/109949167/185092061-1b17edde-aa71-4d2a-895f-e9d1bd8737b5.png" />
</p>

