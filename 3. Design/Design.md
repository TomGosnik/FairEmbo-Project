# **Functional model**

*I would like to allow the makers to understand what the product is made for.* 

## **What is a functional model?**
<details>
  <summary>Click to expand!</summary>

* A description of the functions performed by a product.
* An opportunity to break down a product into smaller pieces that can be more easily understood.
* At the highest level of a functional breakdown (black box view), service functions are the effects (intended by its stakeholders) of the interaction of the product with its environment. ([Specification](https://github.com/OPEN-NEXT/wp2.3_template/tree/main/Documentation/2.%20Specification#specification))
* At the intermediate and lowest levels of a functional breakdown (white box view), technical functions are input-output relationships transforming matter, energy or information flows. They are expressing in a non-solution neutral way and observable from inside the product. A set of technical functions is necessary for the realization of a service function.
 </details>
 

## **Why should you define functional model?**
<details>
  <summary>Click to expand!</summary>

* A functional model helps to break down a complicated problem into simple sub-problems.
* A functional model helps to anticipate failures occurring when an intended effect of the product is no longer produced on its environment.
* A function is the main input to derive the functional requirements required to define the conditions of use of the product as well as to provide objective evidences through the validation and verification activities. 
 </details>
  
## **How to document a functional model?**

*The documentation of technical functions, which requires adopting an internal (white box) viewpoint on the product, consists in breaking down the service function into sub-functions. The decomposition process is no more solution neutral as it requires to make a decision at every indenture level. The functional decomposition requires two modelling approaches: function tree and functional graph.*

 ### 1. Functional tree
 
- **Definition:** *The functional tree is a top-down decomposition of function into sub-functions that helps to simplify the problem to solve.*

![image](https://user-images.githubusercontent.com/109949167/180979375-1d7e74d9-3a8c-43c9-a86b-667dbf46c994.png)
 
### **2. Functional graph**
<details>
  <summary>Click to see the guideline!</summary>
 
- **Definition:** *The functional graph is a multi-level logical articulation of technical functions.*

- **Comments:**

  - *Relationships between functions are in/out-going flows of matter, energy, or information.*
  - *Logical AND/OR gates can be used to define concurrent or sequential functions.*
  - *Articulation of technical function can describe as input-output relationships transforming flows by using the functional modeling language in the format of the graph*
  
   ```
  1. What minimum documentation should the functional graph provide?
    - A model specifying a multi-level logic of relationships between technical functions (refer to functional graph of XYZ Cargo-ADD ONS)
  
  2. How to implement the functional tree?
    - Use functional modeling language for representation, such as 
      - UML (Use Case diagram)
      - SysML (Block Definition, Activity, or Internal Block diagram)
      - SADT/IDEF0 
      - Functional flow block diagram
    - Use open-source software for modeling the tree representation, such as
      - Papyrus
      - Modelio
      - Capella   
  ```
</details>
 
<details>
  <summary>Click to see the example!</summary> 
  
#### *Example 1: Functional graph of XYZ Cargo-ADD ONS*:
  
*The image below shows the functional graph of the relationship between technical functions for maintaining food quality by ADD-ONS of XYZ cargo*

  ![Image of functional graph of XYZ cargo-ADD ONS](https://github.com/OPEN-NEXT/WP2.3-Guideline-and-templatefor-documentation-of-OSH-design-reuse/blob/main/Sources/Images/Functional%20graph%20of%20XYZ%20cargo-ADD%20ONS.jpg)

<a href="https://app.diagrams.net/#Hamerezoji1362%2Fdrawio-github%2Fmaster%2FFunctional%20graph.drawio" target="_blank">Edit As New</a> | <a href="https://app.diagrams.net/#Hamerezoji1362%2Fdrawio-github%2Fmaster%2FFunctional%20graph%20of%20XYZ%20cargo%20ADD-ONS.png">Edit in diagrams.net</a>


#### *Example 2*:
  
*The link below shows an example of functional block diagrams of an open-source project*

[Functional diagram of Renesas ventilator](https://www.rs-online.com/designspark/ventilator-design-solution-from-renesas-electronics)
</details>

### Template of functional graph

  1. A model specifying the relationships between technical functions 
 
 ![Image of template of functional graph](https://github.com/OPEN-NEXT/WP2.3-Guideline-and-templatefor-documentation-of-OSH-design-reuse/blob/main/Sources/Images/Functional%20graph%20for%20template.jpg)
 
 *You can use the link below  to define the functional graph of your project/product.*
 
 <a href="https://app.diagrams.net/#Hamerezoji1362%2Fdrawio-github%2Fmaster%2FFunctional%20graph%20for%20template.drawio">Edit As New</a> | <a href="https://app.diagrams.net/#Hamerezoji1362%2Fdrawio-github%2Fmaster%2FFunctional%20graph%20for%20template.png">Edit in diagrams.net</a>
  
 2. Name of modeling language
     * ...
     * ...
  3. Name of Software
     * Online app diagram
     * ...
 




