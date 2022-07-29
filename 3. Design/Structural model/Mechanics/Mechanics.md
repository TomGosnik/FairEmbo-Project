## **How to document a structural model of mechanical products?** 

 ### **1. Architectural structure**

- **Definition:** *The architectural structure is a physical or logical layout of the components of a system design and their internal and external connections.*

<p align="center">
  <img src="https://user-images.githubusercontent.com/109949167/181609976-df1aec48-4e1c-4851-8722-7dd79cdbb186.png" />
</p>

<p align="center">
  <img src="https://user-images.githubusercontent.com/109949167/181522655-e4687a23-6942-4f80-8b57-2730ff4d2ba8.png" />
</p>

 ```
1. What minimum documentation should the architectural structure provide?
  - A model specifying the kind of components and their sub-components in the format of a tree  or a graph

2. How to implement the architectural model?
  - Use modeling language for representation, such as 
    - SysML (Block Definition, Activity, or Internal Block diagram)
    - UML
  - Use open-source software for modeling the tree or graph representation, such as
    - Papyrus
    - Modelio
    - Capella 

   ``` 
 </details>
 
 <details>
  <summary>Click to the examples!</summary>
 
*The links below show some kinds of the architectural structure of open-source projects*

#### *Example 1: architectural structure of* [MPS ventilator](https://www.monolithicpower.com/en/mps-open-source-ventilator)

 ![Image of architecture of MPS ventilator](https://github.com/OPEN-NEXT/WP2.3-Guideline-and-templatefor-documentation-of-OSH-design-reuse/blob/main/Sources/Images/Architecture%20of%20mechanical%20structural%20model.jpg)

<a href="https://app.diagrams.net/#Hamerezoji1362%2Fdrawio-github%2Fmaster%2FArchitecture%20of%20mechanical%20structural%20model.drawio" target="_blank">Edit As New</a> | <a href="https://app.diagrams.net/#Hamerezoji1362%2Fdrawio-github%2Fmaster%2FArchitecture%20of%20mechanical%20structural%20model.png" target="_blank">Edit in diagrams.net</a>


#### *Example 2: Architectural structure of* [Makair ventilator](https://github.com/makers-for-life/makair) 

 ![Image of Architectural structure of Makair ventilator](https://github.com/OPEN-NEXT/WP2.3-Guideline-and-templatefor-documentation-of-OSH-design-reuse/blob/main/Sources/Images/Architectural%20structure%20of%20makair%20ventilator.jpg)

<a href="https://app.diagrams.net/#Hamerezoji1362%2Fdrawio-github%2Fmaster%2FArchitectural%20structure%20of%20makair%20ventilator.drawio" target="_blank">Edit As New</a> | <a href="https://app.diagrams.net/#Hamerezoji1362%2Fdrawio-github%2Fmaster%2FArchitectural%20structure%20of%20makair%20ventilator.png">Edit in diagrams.net</a>

#### *Example 3: architectural structure of* [GlasVent emergency ventilator in format of block diagram](https://onlinelibrary.wiley.com/doi/10.1002/gch2.202000046)
</details>

### Template of architectural structure
 
  #### Architectural structure documentation
  1. A model specifying components
 
 ![Image of template for architectural structure](https://github.com/OPEN-NEXT/WP2.3-Guideline-and-templatefor-documentation-of-OSH-design-reuse/blob/main/Sources/Images/Architectural%20structure%20for%20template.jpg)
 
  *You can use the link below as a template to define the architectural structure of your project/product.*
 
 <a href="https://app.diagrams.net/#Hamerezoji1362%2Fdrawio-github%2Fmaster%2FArchitectural%20model%20of%20mechanical%20structure%20for%20template.drawio" target="_blank">Edit As New</a> | <a href="https://app.diagrams.net/#Hamerezoji1362%2Fdrawio-github%2Fmaster%2F%20Architectural%20model%20of%20mechanical%20structure%20for%20template.png" target="_blank">Edit in diagrams.net</a>

 2. Name of the modeling language
     * UML
     * ...
 3. Name of Software
     * Online app diagram
     * ...

 
### **Modelling a design in an editable file format**
<details>
  <summary>Click to see the guideline!</summary>
 
- **Definition:** *An editable file format is a standard way that information is encoded for storage and allows the makers to study, modify the geometry of a model and reuse it.* 

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
 
  #### Documentation of material characteristics
  1. Name of characteristic
     * Properties
     * Unit of property
     * ...
 

