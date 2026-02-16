# CPP Module 03 - Inheritance & Diamond Problem

This module introduces the concept of **Inheritance** in C++. The goal is to learn how to design hierarchical class structures, reuse code efficiently, and navigate the complexities of multiple inheritance and virtual base classes.



## 🧠 Key Learning Objectives

* **🟢 Basic Inheritance**: Understanding how to extend a base class to create specialized derived classes.
* **🔵 Member Initialization**: Mastering the order of constructor and destructor calls in an inheritance chain.
* **🟡 Protected Attributes**: Learning the difference between `private` and `protected` access specifiers.
* **🔴 The Diamond Problem**: Resolving ambiguity and duplicate base subobjects in multiple inheritance using `virtual` inheritance.





## 📂 Exercise Breakdown

### 🟢 Ex00: Aaaaand... OPEN!
* **Goal**: Implement a basic class `ClapTrap` with attributes (Hit points, Energy points, Attack damage).
* **Concepts**:
    * Encapsulation of data.
    * Basic member functions for combat logic (attack, takeDamage, beRepaired).
    * Resource management (Energy points as a limiting factor).

### 🔵 Ex01: Serena, my love!
* **Goal**: Create a derived class `ScavTrap` that inherits from `ClapTrap`.
* **Concepts**:
    * **Constructor Chaining**: Understanding that a `ClapTrap` must exist before a `ScavTrap` can be built.
    * **Method Overriding**: Providing a more specialized `attack` method for the derived class.
    * **Protected Access**: Accessing base class attributes from a child class.



### 🟡 Ex02: Repetitive Work
* **Goal**: Implement another derived class `FragTrap` with different stats and unique abilities.
* **Concepts**:
    * **Code Reuse**: Leveraging the base class to avoid redundant logic.
    * **Class Differentiation**: Designing multiple children with distinct personalities and values from the same parent.

### 🔴 Ex03: Now it’s weird!
* **Goal**: Create a `DiamondTrap` that inherits from both `ScavTrap` and `FragTrap`.
* **Concepts**:
    * **Multiple Inheritance**: Inheriting attributes and behaviors from two different parents.
    * **The Diamond Problem**: Solving the issue where `DiamondTrap` would otherwise contain two copies of `ClapTrap`.
    * **Virtual Inheritance**: Using the `virtual` keyword in inheritance to ensure only one "ancestor" subobject exists.





## 🚀 Technical Requirements
* **Standard**: C++ 98.
* **Compiler**: `c++` with `-Wall -Wextra -Werror` flags.
* **Safety**: Ensuring that all allocated memory is properly managed and that the class hierarchy follows the **Orthodox Canonical Form**.


