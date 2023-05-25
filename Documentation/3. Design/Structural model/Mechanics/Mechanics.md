# How to document a structural model of mechanical products? 

 ## 1. Architectural structure

- **Definition:** *The architectural structure is a physical or logical layout of the components of a system design and their internal and external connections.*

 ### Architectural tree
 
<p align="center">
  <img src="https://github.com/TomGosnik/FairEmbo-Project/blob/main/Source/Pictures/Design_Structural%20model_Mechanics_Architectural%20tree.png" />
</p>
 
   ### Architectural graph
 

 - **Explanation:** The Template contains 2 main flow streams : 1. Power supply(represented in red), 2. Suture Wire (represented in green)
 

<p align="center">
  <img src="https://github.com/TomGosnik/FairEmbo-Project/blob/main/Source/Pictures/Design_Structural%20model_Mechanics_Architectural%20graph.png" />
</p>

 
  
 
## 2. Editable CAD files
 *Fairembo was designed in SolidWorks (version 2021) and Freecad (version 0.19), allowing you to have full access to view, copy, edit, and export all of the source 3D CAD models for free from any computer which has installed Freecad and SolidWorks* 

  ### Template of file format

  1. 3D/2D file format
     * '.FCStd' is the original Freecad file format, allowing you to change the dimensions of the component as you want
     * '.STEP' is a neutral format which is for representative use such as Stepper Motor, Arduino card.
     * '.Dxf' is a 2D file format which allow you to use it in laser cutting
     * '.Stl' is a 3D file format which mostly used in 3D printing
  2. Name of CAD software

 Name of software | Version used | Download link 
|:---:|:---:|:---:|
SolidWorks | 2021 | https://www.solidworks.com/sw/support/downloads.htm 
FreeCAD| 0.19 | https://www.freecadweb.org/downloads.php
OnShape | 2021 |https://cad.onshape.com/documents/1c97d2eae284a43686a399bf/w/0fb098345c6d2285c3f1eb61/e/92be17f8a49da64bbd5fd24f
 
## 3. Characteristics of the materials
  
   ### Table of material Characteristics
 
 Name of material |	Density (g/cm3) |	Compressive Strength (MPa) |	Elastic Modulus (GPa) | Max Operating Temp (°C) | life span (years) | Price(european region) |	 Advantage |  Disadvantage |	link of reference 
|:---:|:---:|:---:|:---:|:---:|:---:|:---:|:---:|:---:|:---:|
Medium density fibreboard(MDF) | 0.75 | 10 | 4.0 | up to 130 | more than 10 | 7€ per m2 for thickness of 3mm | inexpensive, easy to recycle, solid, easy to manufacture (laser cutting, paint...) | heavy, absorb water faster than wood | [Medium Density Fiberboard](https://www.makeitfrom.com/material-properties/Medium-Density-Fiberboard-MDF/), [Physical and mechanical properties of MDF panels containing burned wood](https://www.researchgate.net/figure/Physical-and-mechanical-properties-of-MDF-panels-containing-burned-wood_tbl3_257485673), [Maximum core temperature (MCT) for MDF mats at various MCs](https://www.researchgate.net/figure/Maximum-core-temperature-MCT-for-MDF-mats-at-various-MCs_fig4_237372503), [Advantages & Disadvantages of MDF - Fiber Board](https://civiltoday.com/civil-engineering-materials/timber/163-advantages-and-disadvantages-of-mdf), [Price for MDF in France](https://www.smbois.com/panneaux-bois/panneaux-mdf/mdf.html)
Plexiglass (PMMA) | 1.18 | 75,84 to 131 | - | 65 to 93 | 30 and even more | 25€ to 140€ per m2 for thickness from 1mm to 15mm | inexpensive, easy to manufacture (laser cutting, folding...), light | not resistant to heat | [Technical Data Sheet Plexiglass (PMMA)](https://laminatedplastics.com/plexiglass.pdf), [PLEXIGLAS®: A VALUABLE MATERIAL EVEN AFTER USE](https://www.plexiglas.de/en/sustainability/easy-to-recycle), [Acrylic advantages and disadvantages](https://plasticsheetsshop.co.uk/acrylic-advantages-and-disadvantages/#:~:text=Advantage%3A%20Plexiglass%20is%20hardwearing%20Acrylic%20sheet%20is%20very,same%20levels%20of%20thermal%20efficiency%20as%20standard%20glass), [plexiglas shop](https://www.plexiglas-shop.com/)
Aluminum | 2.6898 | - | 68.3 | - | 40 to 80 | 2.1€ to 3.5€ per Kg | lighter than other metal, easy to manufacture( lathe, milling..) | - | [Aluminium: Specifications, Properties, Classifications and Classes](https://www.azom.com/article.aspx?ArticleID=2863), [THE LIFESPAN AND RECYCLABILITY OF ALUMINIUM AND STAINLESS STEEL](https://www.metalswarehouse.co.uk/lifespan-recyclability-aluminium-steel/), [Aluminium Price Today](https://markets.businessinsider.com/commodities/aluminum-price/euro#:~:text=1%20Ton%20%3D%201%2C000%20Kilograms.%20%0AAluminium%20Price%20,%20%20%20Per%201%20Kilogram.%202.34%20EUR).
Acrylonitrile butadiene styrene (ABS) | 0.9 to 1.53 | 65 | 2.28 | −20 to 80 | 50 to 80 | 25$ per Kg | resistant to physical impact, easy to use for 3D print | inappropriate for high-temperature condition, high smoke generation when it burns| [ABS's properties from wiki](https://en.wikipedia.org/wiki/Acrylonitrile_butadiene_styrene), [Typical Compressive Yield Strength and Compressive Modulus of Polymers](https://matweb.com/reference/compressivestrength.aspx), [What is the average life expectancy of ABS pipe?](https://www.howtolookatahouse.com/Blog/Entries/2018/7/what-is-the-average-life-expectancy-of-abs-pipe-1.html#:~:text=The%20expected%20lifespan%20of%20ABS%20%28Acrylonitrile%20Butadiene%20Styrene%29,is%20expected%20to%20be%20similar%20to%20PVC%20pipe), [ABS plastic properties](https://adrecoplastics.co.uk/abs-plastic-properties/#:~:text=ABS%20has%20a%20low%20melting%20point%2C%20which%20enables,to%20withstand%20heavy%20use%20and%20adverse%20environmental%20conditions), [How Much Does 3D Printing Filament Cost](https://3dinsider.com/3d-printing-filament-cost/#:~:text=Regular%20PLA%20and%20ABS%20filament%20for%203D%20printing,amount.%20Not%20all%203D%20printing%20materials%20are%20equal).

 

