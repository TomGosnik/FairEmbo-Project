## **How to document a structural model of mechanical products?** 

 ### **1. Architectural structure**

- **Definition:** *The architectural structure is a physical or logical layout of the components of a system design and their internal and external connections.*
 <p align="center">
  <img src="https://user-images.githubusercontent.com/109949167/181609976-df1aec48-4e1c-4851-8722-7dd79cdbb186.png" />



### Template of architectural structure
 
 - **Explanation:** *The Template contains 2 main flow streams : 1. Power supply(represented in red), 2. Suture Wire (represented in green)
 
 </p>
<p align="center">
  <img src="https://user-images.githubusercontent.com/109949167/181522655-e4687a23-6942-4f80-8b57-2730ff4d2ba8.png" />
</p>

 
  
 
### **2.Editable CAD files**
 *Fairembo was designed in Freecad (version 0.19) and contained 2 type of formats : '.FCStd' and '.STEP', allowing you to have full access to view, copy, edit, and export all of the source 3D CAD models for free from any computer which has installed Freecad* 
 
 ```
To reuse a design model, it should provide information consist of:

 1. Preferable 3D/2D file format
   - Editable file formats that could be:
     - Native formats such as .FCStd format of FreeCAD 
     - Neutral formats such as STEP files
 2. Preferable open-source software 
   - OpensCAD
   - Inkscape
   - FreeCAD
  ```
</details>

<details>
  <summary>Click to see the examples!</summary>
 
#### *Example of editable file formats:* 

*1. [Farmbot, Native CAD files](https://genesis.farm.bot/v1.5/Extras/cad)*

*2. [MIT Emergency Ventilator, Neutral CAD files](https://e-vent.mit.edu/resources/downloads/)*

*3. Types of CAD format of [transmagic](https://transmagic.com/cad-formats/)*
</details>

### Template of file format

 #### Documentation a design in an editable file format
  1. 3D/2D file format
     * Native formats
     * Neutral formats
  2. Name of software
     * FreeCAD
     * ...

 
### **3. Characteristics of the materials**
<details>
  <summary>Click to see the guideline!</summary>
 
- **Definition:** *The characteristics of the materials are those that identify the reactions of materials reactions to heat, electricity, light, force, etc.* 

  - *Selection of materials  based on factors including properties for [behavioral](https://github.com/OPEN-NEXT/wp2.3_template/tree/main/Documentation/3.%20Design/Behavioral%20model) analysis, [environmental impact](https://github.com/OPEN-NEXT/wp2.3_Guideline-for-documentation-of-OSH-design-reuse/tree/main/Documentation/8.%20Disposal), [manufacturing](https://github.com/OPEN-NEXT/wp2.3_template/tree/main/Documentation/4.%20Manufacturing) processes in design reuse.* 

```
  The material characteristics of mechanical parts consist of: 
  
  1- Identifying the kind of characteristics and their properties: 
  
    - Mechanical characteristics like hardness, elasticity, plasticity, toughness, etc. 
    - Manufacturing properties like castability, machinability rating, etc.
    - Thermal characteristics like melting point, thermal conductivity, etc.
    - Electrical characteristics like electrical resistivity and conductibility, etc.
    - Chemical properties like corrosion resistance, surface tension, etc.
     
  ```
  </details>
  
  <details>
  <summary>Click to see the examples!</summary>
 
  #### *Example of material characteristics*:
  
*Figure below shows some physical properties of superalloy base elements.*

![Image of material characteristics](https://github.com/OPEN-NEXT/WP2.3-Guideline-and-templatefor-documentation-of-OSH-design-reuse/blob/main/Sources/Images/material%20characteristics%20example.jpg)

> Source: Kutz, M. ed., 2002. Handbook of materials selection. John Wiley & Sons.
  </details>
  
### Template of material Characteristics
 
 Name of material |	Density (kg/m3) |	Compressive Strength (MPa) |	Elastic Modulus (GPa)|	Thermal Conductivity (W/m-K) | life span (years) |	Advantage | Disadvantage |	link of reference 
|:---:|:---:|:---:|:---:|:---:|:---:|:---:|:---:| :---:|
medium density fibreboard(MDF) | 720 - 760 | 10 | 4.0 | 0.3 | more than 10 | inexpensive, recyclable, solid, easy to manufacture (laser cutting, paint...) | heavy, absorb water faster than wood | https://www.makeitfrom.com/material-properties/Medium-Density-Fiberboard-MDF/, https://www.researchgate.net/figure/Physical-and-mechanical-properties-of-MDF-panels-containing-burned-wood_tbl3_257485673, https://civiltoday.com/civil-engineering-materials/timber/163-advantages-and-disadvantages-of-mdf

  #### Documentation of material characteristics
  1. Name of characteristic
     * Properties
     * Unit of property
     * ...
 

