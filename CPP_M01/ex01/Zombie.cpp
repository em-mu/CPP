#include "Zombie.hpp"


Zombie::Zombie( void )
{
	std::cout << "Zombie created" << std::endl;
    return;
}

Zombie::~Zombie()
{
	std::cout << "Zombie destroyed" << std::endl;
    return;
}

void    Zombie::announce( void ) const
{
    std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
    return;
}

void Zombie::set_name( std::string name )
{
	this->_name = name;
}