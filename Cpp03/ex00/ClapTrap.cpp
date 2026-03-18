#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
    :   name_("ClapTrap")
    ,   hit_points_(10)
    ,   energy_points_(10)
    ,   attack_damage_(0)
{
    std::cout << "ClapTrap default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string const & name)
    :   name_(name)
    ,   hit_points_(10)
    ,   energy_points_(10)
    ,   attack_damage_(0)
{
    std::cout << "ClapTrap " << name_ << " constructor called" << std::endl;
}

ClapTrap::~ClapTrap() {
    std::cout << "ClapTrap " << name_ << " destructor called" << std::endl;
}

void ClapTrap::attack(const std::string& target) {
    if (hit_points_ > 0 && energy_points_ > 0) {
        std::cout << "ClapTrap " << name_ << " attacks " << target
                  << ", causing " << attack_damage_ << " points of damage!" << std::endl;
        --energy_points_;
    } else {
        std::cout << "ClapTrap " << name_ << " cannot attack: no HP or EP!" << std::endl;
    }
}

void ClapTrap::takeDamage(unsigned int amount) {
    if (hit_points_ > 0) {
        if (amount > hit_points_) {
            hit_points_ = 0;
        } else {
            hit_points_ -= amount;
        }
        std::cout << "ClapTrap " << name_ << " takes " << amount 
                  << " points of damage!" << std::endl;
    }
}

void ClapTrap::beRepaired(unsigned int amount) {
    if (hit_points_ > 0 && energy_points_ > 0) {
        hit_points_ += amount;
        --energy_points_;
        std::cout << "ClapTrap " << name_ << " repairs itself, regaining " << amount 
                  << " hit points!" << std::endl;
    }
}

