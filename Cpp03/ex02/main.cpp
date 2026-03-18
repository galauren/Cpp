#include "FragTrap.hpp"

int main()
{
    std::cout << "=== FragTrap Tests ===" << std::endl;
    
    // Test constructor chaining
    {
        std::cout << "\\n--- Constructor/Destructor Chaining ---" << std::endl;
        FragTrap frag("FRAG-42");
    }
    
    // Test with default name
    {
        std::cout << "\\n--- Default Name Test ---" << std::endl;
        FragTrap frag_default;
    }
    
    // Test special ability and basic methods
    {
        std::cout << "\\n--- Methods Test ---" << std::endl;
        FragTrap frag("Badass");
        frag.highFivesGuys();
        frag.attack("enemy");
        frag.takeDamage(50);
        frag.beRepaired(30);
        frag.highFivesGuys();
    }
    
    std::cout << "\\nAll tests completed!" << std::endl;
    return 0;
}
