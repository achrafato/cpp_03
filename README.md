# CPP Module 03 - Inheritance

Introduction to inheritance and class hierarchies in C++, demonstrated through a series of robot classes.

## 📚 Class Hierarchy

```
                ClapTrap
                    │
                    │
                ScavTrap
                    │
                    │
                FragTrap
                    │
                    │
              DiamondTrap
```

## 📁 Exercises

### Ex00: ClapTrap - Base Class
Basic robot with fundamental attributes.
```
Files:
├── ClapTrap.cpp
├── ClapTrap.hpp
└── main.cpp
```

### Ex01: ScavTrap - First Derived Class
Extends ClapTrap with additional features.
```
Files:
├── ClapTrap.cpp/hpp
├── ScavTrap.cpp
├── ScavTrap.hpp
└── main.cpp
```

### Ex02: FragTrap - Second Derived Class
Another ClapTrap extension with different abilities.
```
Files:
├── ClapTrap.cpp/hpp
├── ScavTrap.cpp/hpp
├── FragTrap.cpp
├── FragTrap.hpp
└── main.cpp
```

### Ex03: DiamondTrap - Multiple Inheritance
Combines features from both ScavTrap and FragTrap.
```
Files:
├── ClapTrap.cpp/hpp
├── ScavTrap.cpp/hpp
├── FragTrap.cpp/hpp
├── DiamondTrap.cpp
├── DiamondTrap.hpp
└── main.cpp
```

## 🤖 Class Features

### ClapTrap
```cpp
class ClapTrap {
protected:
    std::string Name;
    unsigned int HitPoints;
    unsigned int EnergyPoints;
    unsigned int AttackDamage;

public:
    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
};
```

### ScavTrap
```cpp
class ScavTrap : public ClapTrap {
public:
    void guardGate();
    // Overridden attack function
};
```

### FragTrap
```cpp
class FragTrap : public ClapTrap {
public:
    void highFivesGuys();
    // Different initial values
};
```

### DiamondTrap
```cpp
class DiamondTrap : public ScavTrap, public FragTrap {
private:
    std::string Name;

public:
    void whoAmI();
    // Combines features from both parents
};
```

## 🎯 Learning Objectives

1. Inheritance Basics
   - Public inheritance
   - Protected members
   - Method overriding

2. Multiple Inheritance
   - Diamond problem
   - Virtual inheritance
   - Name conflicts

3. Constructor/Destructor Chains
   - Parent initialization
   - Member initialization
   - Destruction order

## 🛠️ Implementation Requirements

- All classes in Orthodox Canonical Form
- Proper inheritance hierarchy
- Virtual destructors where needed
- Memory leak prevention
- Appropriate access specifiers

## 🧪 Testing Guidelines

### Ex00: ClapTrap
```cpp
// Test basic functionality
ClapTrap robot("Robot");
robot.attack("Target");
robot.takeDamage(5);
robot.beRepaired(3);
```

### Ex01: ScavTrap
```cpp
// Test inheritance and new features
ScavTrap guard("Guard");
guard.guardGate();
guard.attack("Enemy");  // Should use ScavTrap version
```

### Ex02: FragTrap
```cpp
// Test different initial values
FragTrap warrior("Warrior");
warrior.highFivesGuys();
warrior.attack("Target");
```

### Ex03: DiamondTrap
```cpp
// Test multiple inheritance
DiamondTrap hybrid("Hybrid");
hybrid.whoAmI();
hybrid.guardGate();
hybrid.highFivesGuys();
```

## ⚠️ Common Issues to Watch

1. Diamond Problem
   - Virtual inheritance
   - Member ambiguity
   - Constructor order

2. Memory Management
   - Virtual destructors
   - Proper cleanup
   - Resource handling

3. Function Overriding
   - Virtual functions
   - Scope resolution
   - Base class access

## 📝 Style Requirements

- Clear class hierarchies
- Consistent naming
- Proper documentation
- Header guards
- Access specifier organization
- Clean inheritance syntax

## 🔍 Debugging Tips

1. Constructor/Destructor Order
   - Print messages in constructors/destructors
   - Verify inheritance chain
   - Check initialization order

2. Member Access
   - Verify protected vs private
   - Check inheritance access levels
   - Test member visibility

3. Virtual Function Behavior
   - Test overridden functions
   - Verify correct version called
   - Check virtual table

## 📜 License

This project is part of the 42 curriculum and is provided as-is.
