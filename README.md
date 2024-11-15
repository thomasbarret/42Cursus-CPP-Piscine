# 42Cursus - CPP Piscine

This repository contains solutions for the **CPP Piscine** at **42 School**, a comprehensive set of projects designed to teach and strengthen C++ programming skills. Each module focuses on a specific aspect of C++ development, ranging from basic syntax and object-oriented programming to advanced topics like templates and memory management.

---

## Repository Structure

```plaintext
.
├── CPP00
├── CPP01
├── CPP02
├── CPP03
├── CPP04
├── CPP05
├── CPP06
└── CPP08
```

Each directory corresponds to a module, further divided into exercises (`ex00`, `ex01`, etc.) with dedicated files and classes.

---

## Module Breakdown

### **CPP00** - Introduction to C++  
Focuses on basic syntax, compilation with `Makefile`, and handling input/output streams. Key exercises include:  
- `megaphone.cpp`: Implementing a simple program to manipulate strings.  
- Creating a basic **PhoneBook** class.

---

### **CPP01** - Memory and Pointers  
Explores dynamic memory allocation, pointers, and constructors/destructors. Highlights include:  
- **Zombie Horde**: Managing arrays of objects.  
- Understanding and implementing the **Weapon** class for object references.

---

### **CPP02** - Overloading and Fixed Point Numbers  
Delves into operator overloading and precision handling:  
- Implementing a **Fixed Point Arithmetic** class.  
- Overloading operators for mathematical computations.

---

### **CPP03** - Inheritance and Polymorphism  
Introduces object-oriented programming concepts:  
- **ClapTrap** and its derived classes (**ScavTrap**, **FragTrap**, **DiamondTrap**).  
- Demonstrating inheritance and polymorphic behaviors.

---

### **CPP04** - Abstract Classes and Interfaces  
Covers abstract classes and polymorphism in detail:  
- **Animal Hierarchy**: Using pure virtual functions.  
- **Materia System**: Creating and managing game-like objects.

---

### **CPP05** - Exception Handling  
Focuses on exceptions and how they are managed in C++:  
- The **Bureaucrat** and **Form** hierarchy for real-life simulation.  
- Custom exception handling mechanisms.

---

### **CPP06** - Casting  
Covers casting and its various types in C++:  
- Scalar conversions between types.  
- Serialization and deserialization of objects.

---

### **CPP08** - Templates and Containers  
Explores templates and the Standard Template Library (STL):  
- Implementing generic algorithms with templates (`easyfind`).  
- Building specialized containers such as **Span** and **MutantStack**.

---

## How to Use

### Prerequisites
- A C++98 compiler (e.g., `g++` or `clang++`).  
- Make sure `Makefile` is installed.

### Compilation
Each exercise includes a `Makefile`. To compile, navigate to the desired exercise directory and run:  
```bash
make
```

### Execution
Run the compiled binary:  
```bash
./<binary_name>
```

### Clean Up
Remove object files and binaries with:  
```bash
make clean
make fclean
```