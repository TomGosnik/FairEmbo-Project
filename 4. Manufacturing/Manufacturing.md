# Manufacturing

## 1. Bill of Materials

 - **Definition:** *A bill of materials (BOM) is a comprehensive list of parts, items, and other materials required to create a product, as well as instructions required for gathering and using the required materials.*

Component name |	Nomenclature |	Number of components |	Material |	Manufacturing technique |	Machine reference |	Manufacturing parameters |	Component reference |	Link |	Unit price
|:---:|:---:|:---:|:---:|:---:|:---:|:---:|:---:|:---:|:---:|
Structure	|
Plates |	
Back plate |	STRUCT_Pl_AR |	1 |	MDF  	| Découpe laser / Stratoconception					
Right plate	| STRUCT_Pl_D |	1		|					
Left plate	| STRUCT_Pl_G	| 1		|					
Inner plate	| STRUCT_Pl_M	| 1		|					
Front plate |	STRUCT_Pl_AV |	1	|						
Bottom plate |	STRUCT_Pl_B	| 1		|					
Top plate |	STRUCT_Pl_H |	1		|					
Motor support plate |	STRUCT_Pl_Puiss	| 1	|
Cover	| STRUCT_Couv |	1	| Plexiglass	| Découpe laser + plieuse |	Epilog laser fusion	|		
High magnet holder plate	| STRUCT_Pl_P-Aim_H |	2			|				
Front magnet holder plate	| STRUCT_Pl_P-Aim_AV	|							
Drawer		|							
Bottom plate |	STRUCT_T_B|	1	| Plexiglass |	Découpe laser	| Epilog laser fusion |
Front plate	| STRUCT_T_AV |	1			|
Rear plate|	STRUCT_T_AR	|1							
Left side plate	|STRUCT_T_G|	2							
Right side plate	|STRUCT_T_D								
Equerres									
Top front drawer (interface)	|STRUCT_Eq_Interf_H_AV|	8	|ABS|	Impression 3D	|Zortrax M200 				
Top back drawer (interface)|	STRUCT_Eq_Interf_H_AR								
Bottom front drawer (interface)|	STRUCT_Eq_Interf_B_AV								
Bottom back drawer (interface)	|STRUCT_Eq_Interf_B_AR								
Right front drawer (engine section)|	STRUCT_Eq_Puiss_D_AV								
Right back drawer (engine section)	|STRUCT_Eq_Puiss_D_AR								
Left front drawer (engine section)	|STRUCT_Eq_Puiss_G_AV								
Left back drawer (engine section) |	STRUCT_Eq_Puiss_G_AR								
Coil									
Coil	|STRUCT_Bob|	1	|Plastic						
Coil threaded rod	|STRUCT_Bob_TF	|1	|Steel	|	| |	|	M5 * 130		
Threaded rod protection	|STRUCT_Bob_Protect-TF|	1|	ABS	|Impression 3D	|Zortrax M200				
Wire positioning piece|	STRUCT_Bob_Pos|	1							
Magnet									
High-high magnet|	STRUCT_Aim_H_H	|4							
High-back magnet	|STRUCT_Aim_H_B								
Front-front magnet|	STRUCT_Aim_AV_AV								
Back-back Magnet	|STRUCT_Aim_AV_AR								
Engine section									
Engine									
Stepper motor 1 (M1)|	PUISS_Mot_Extr	|1		|	|	| |	|		Moteur pas à pas Joy-it SM42HT38-1684A NEMA-17-01 0.4 Nm 1.68 A Diamètre de l'arbre: 5 mm 1 pc(s) |	https://www.conrad.fr/p/moteur-pas-a-pas-joy-it-nema-17-01-04-nm-168-a-diametre-de-larbre-5-mm-1-pcs-1597325	31,99
Stepper motor 2 (M2)	|PUISS_Mot_Cam	|1		|	|	| |	|		Joy-it Moteur pas à pas NEMA17-06 0.59 Nm 2 A 2 A Diamètre de l'arbre: 5 mm|	https://www.conrad.fr/p/joy-it-moteur-pas-a-pas-nema17-06-059-nm-2-a-2-a-diametre-de-larbre-5-mm-2355876	21,49
Extruder	|PUISS_Extr	|1			|	 |	| |	|	Extrudeur aluminium MK8 direct drive montage droit ou gauche |imprimante-3d-service.com
Nozzle	|PUISS_Buse|	1	|ABS|	Impression 3D	|Zortrax M200 plus|	impression haute qualité, épaisseur la plus finne possible, sortie de fil vers en haute			
Bearing	|Puiss_RaB_Extr	|1		| | | | |			625ZZ		
Cam	|PUISS_Cam|	1|	Aluminium|	Tournage					
Guide									
Front guide stop	|PUISS_Guid_But_AV|	2	|ABS|	Impression 3D	|Zortrax M200 				
Back guide stop	|PUISS_Guid_But_AR								
Front guide support	|PUISS_Guid_Sup_AV|	2							
Back guide support	|PUISS_Guid_Sup_AR								
Front guide rod	|PUISS_Guid_Tige_AV	|2	|Aluminium	|Scie à métaux					
Back guide rod	|PUISS_Guid_Tige_AR								
Ball bearing	|PUISS_Guid_RaB|	1	| | | | |				608ZZ		
Back spring guide|	PUISS_Guid_Ress_AR|	2	|Acier						
Front spring guide	|PUISS_Guid_Ress_AV								
Blades									
Moving blade	|PUISS_L_Mob	|2|	Acier	| | | | 				Lame de dénudage pour machine à dénuder à fil SWT508 | AliExpress	
Stationary blade|	PUISS_L_Immob								
Blade holder	|PUISS_L_P-L|	1	|ABS	|Impression 3D|	Zortrax M200 				
Blade support spring	|PUISS_L_Ress|	1	|Acier						
Electronics									
Supports									
Test plate|	ELEC_Pl-Essai|	1							
Left arduino holder	|ELEC_P-Ard_G|	2	|ABS	|Impression 3D	|Zortrax M200 				
Right arduino holder|	ELEC_P-Ard_D								
Driver holder	|ELEC_P-Driv	|1							
Top potentiometer holder	|ELEC_P-Pot_H	|2							
Bottom potentiometer holder|	ELEC_P-Pot_B								
Accessories									
Top potentiometer button|	ELEC_Bout-Pot_H	|2|	ABS	|Impression 3D	|Zortrax M200 				
Bottom potentiometer button	|ELEC_Bout-Pot_B								
Green push button	|ELEC_Bout_V|	1							
Push button yellow	|ELEC_Bout_J	|1							
Push button red	|ELEC_Bout_R|	1							
Green push button holder	|ELEC_Supp-Bout_V	|3							
Yellow push button holder	|ELEC_Supp-Bout_J								
Red push button holder	|ELEC_Supp-Bout_R								
Air diverter for drivers	|ELEC_Dir-air|	1	|ABS|	Impression 3D	|Zortrax M200 				
Components									
Driver 1 (D1)	|ELEC_Driv_Extr	|2	| | | | |				TB6612FNG Dual Motor Driver Carrier	|https://www.pololu.com/product/713|	9,95
Driver 2 (D2)	|ELEC_Driv_Cam								
Driver 1 radiator	|ELEC_Rad_Driv_Extr|	2		|	| | | |		 Résistance thermique:123°C/W; Boîtiers refroidis:SOIC-8, SOIC-14, SSOP-16, TSSOP-14, TSSOP-16; Largeur externe - Métrique:6.3mm; Hauteur externe - Métrique:4.8mm; Longueur externe -| 	https://fr.farnell.com/webapp/wcs/stores/servlet/CompareProductsDisplay?catalogId=15001&langId=-2&storeId=10160&catentryId=64708491&pageType=PDP	|0,618
Driver 2 radiator	|ELEC_Rad_Driv_Cam								
Capacitor (C)|	ELEC_Cond|	1		|	| | | |		Capacitor 47μF, 16V c.c.|	https://fr.rs-online.com/web/p/condensateurs-electrolytiques/7110927?cm_mmc=FR-PLA-DS3A-_-google-_-CSS_FR_FR_Passifs_Whoop-_-(FR:Whoop!)+Condensateurs+%C3%A9lectrolytiques-_-7110927&matchtype=&pla-339621668050&gclid=Cj0KCQjwxIOXBhCrARIsAL1QFCaT7Q_rE7X_4SQt8N8Zu6aHp6PKWwv3yTqLVZFDtoSgLZNFndHlv44aApaUEALw_wcB&gclsrc=aw.ds	|0,078
Pushbutton 1 (B1)	|ELEC_Bout_V	|1|	| | | |				Bouton-poussoir, NO, Montage panneau|	https://fr.rs-online.com/web/p/boutons-poussoirs/8151834?aud-871567053779%3Apla-365975203081&cm_mmc=FR-PLA-DS3A-_-google-_-CFS_FR_FR_Schneider_Whoop-_-(FR%3AWhoop!)%20Interrupteurs%20(2)-_-8151834&gclid=Cj0KCQjwxIOXBhCrARIsAL1QFCZbOdo6Ri0mEeT1leJcbMdhEjlsmj2F4bzqcQj8dS_wv5ovp86AldUaAt9hEALw_wcB&gclsrc=aw.ds&matchtype=	|16,9
Pushbutton 2 (B2)	|ELEC_Bout_J|	1	|		| | | | | |				16,9
Pushbutton 3 (B3)	|ELEC_Bout_R|	1	|		| | | | | |								16,9
Potentiometer 1 (P1)	|ELEC_Pot_H|	2		|	| | | |				Potentiometer: Resistance 10kohm, 1 turn, Linear, 500mW, resistance tolerance ± 20%	|https://fr.farnell.com/tt-electronics-bi-technologies/p231-fc20br10k/potentiometre-rotatif-10k-20mm/dp/2771755?st=potentiometre%20rotatif	|1,68
Potentiometer 2 (P2)	|ELEC_Pot_B								
Green LED 1 (L1)|	ELEC_LED_1	|4			|	| | | |			LED Vert, Traversant, 5 mm (T-1 3/4), 2 V	|https://fr.rs-online.com/web/p/leds/7088022p?cm_mmc=FR-PLA-DS3A-_-google-_-CSS_FR_FR_Afficheurs_et_optoelectronique_Whoop-_-(FR:Whoop!)+LEDs-_-7088022P&matchtype=&pla-834413916684&gclid=Cj0KCQjwxIOXBhCrARIsAL1QFCYk1e3LMUt7p1XBNJRN2BUuUm2WMwk3iOHTFCnizzsr4hlkoqhmzT8aAi9eEALw_wcB&gclsrc=aw.ds	|0,268
Green LED 2 (L2)|	ELEC_LED_2								
Green LED 3 (L3)|	ELEC_LED_3								
Green LED 4 (L4)|	ELEC_LED_4								
Red LED 5 (L5)|	ELEC_LED_5|	1			|	| | | |			LED Rouge, Traversant, 5 mm (T-1 3/4), 2,6 V	|https://fr.rs-online.com/web/p/leds/1278393?cm_mmc=FR-PLA-DS3A-_-google-_-CSS_FR_FR_Afficheurs_et_optoelectronique_Whoop-_-(FR:Whoop!)+LEDs-_-1278393&matchtype=&pla-302722872933&gclid=Cj0KCQjwxIOXBhCrARIsAL1QFCYVfGLEzypoiNEvZWrra4NUpec1AlHI-cAAueNsmEW-s_PTFDmVd0UaAoqTEALw_wcB&gclsrc=aw.ds	|0,088
Resistance 1 (R1)|	ELEC_Resist_Bout_V	|8	|	| | | |					Résistance Film carbone 100Ω ±5%, 0.25W	|https://fr.rs-online.com/web/p/resistances-traversantes/7077587	|0,278
Resistance 2 (R2)	|ELEC_Resist_Bout_J								
Resistance 3 (R3)|	ELEC_Resist_Bout_R								
Resistance 4 (R4)|	ELEC_Resist_LED_1								
Resistance 5 (R5)	|ELEC_Resist_LED_2								
Resistance 6 (R6)	|ELEC_Resist_LED_3								
Resistance 7 (R7)|	ELEC_Resist_LED_4								
Resistance 8 (R8)|	ELEC_Resist_LED_5	
5V power supply	|ELEC_Alim5V	|1	|	| | | |					Alimentation AC/DC, ITE, 1 sortie, 2.75 W, 5 V, 550 mA	|https://fr.farnell.com/brainboxes/pw-600/power-supply-5v-1a-es-357/dp/2096366?st=alimentation%205v	|27,77
12V power supply|	ELEC_Alim12V	|1		|	| | | |				Adaptateur AC/DC 12V c.c., 2A, 24W, , Régulée	|https://fr.rs-online.com/web/p/adaptateurs-ac-dc/1753324?cm_mmc=FR-PLA-DS3A-_-google-_-CSS_FR_FR_Alimentations_et_transformateurs_Whoop-_-(FR:Whoop!)+Adaptateurs+AC/DC-_-1753324&matchtype=&pla-370976687757&gclid=Cj0KCQjwxIOXBhCrARIsAL1QFCbjgBdOY3BMhupPiywYVdsT5aeT05L4zefR6RXDtFUW6gS1CuGbczEaAmj8EALw_wcB&gclsrc=aw.ds	|16,26
5V coaxial cable end	|ELEC_Embout_5V	|2	|	| | | |					Prise d'alimentation CC, 5A, Montage sur CI, 12 V c.c.	|https://fr.rs-online.com/web/p/connecteurs-d-alimentation-dc/8051696|	2,359
12V coaxial cable end	|ELEC_Embout_12V								
Ventilator 1|	ELEC_Ventilo_Mot|	2				|	| | | |			Ventilateur axial RS PRO 5 V c.c., 11.9m³/h, 40 x 40 x 10mm, 1.92W|	https://fr.rs-online.com/web/p/ventilateurs-axiaux/7897858?cm_mmc=FR-PLA-DS3A-_-google-_-CSS_FR_FR_Chauffage_%26_ventilation_et_air_conditionne_Whoop-_-(FR:Whoop!)+Ventilateurs+axiaux+(2)-_-7897858&matchtype=&pla-475514636566&gclid=Cj0KCQjwxIOXBhCrARIsAL1QFCZHMrid9mmDNu3gS1Z1DK1VgvmU1g3jfntRcnVzLYc1X8ZK7yz8A9QaAoOXEALw_wcB&gclsrc=aw.ds	|7,08
Ventilator 2|	ELEC_Ventilo_Driv								
Arduino card|	ELEC_Ard	|1			|	| | | |				UNO Rév. 3 Arduino|	https://fr.rs-online.com/web/p/arduino/7154081?cm_mmc=FR-PLA-DS3A-_-google-_-CSS_FR_FR_Raspberry_Pi_%26_Arduino_%26_Outils_de_developpement_Whoop-_-(FR:Whoop!)+Arduino-_-7154081&matchtype=&aud-827186183686:pla-339391921421&gclid=Cj0KCQjwxIOXBhCrARIsAL1QFCZg_iLNqiF-tBPj6V5rdmA0EW2CjRNORrWGV6KyqY_00fqD72AHXBQaArdnEALw_wcB&gclsrc=aw.ds	|28,1
Other									
Wire	|ELEC_Fils|	x							
Heat shrinkable tubing	|ELEC_Gaines|	x							
Wire end cap male	|ELEC_Embout_fil_M	|x							
Female wire end	|ELEC_Embout_fil_F|	x							
Soldering									
