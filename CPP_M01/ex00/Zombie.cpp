# include "Zombie.hpp"

Zombie::Zombie( std::string name )
{
	this->_name = name;
	std::cout << "Zombie " << this->_name << " created" << std::endl;
    return;
}

Zombie::~Zombie()
{
	std::cout << "Zombie " << this->_name << " destroyed" << std::endl;
    return;
}

void    Zombie::announce( void ) const
{
    std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
    return;
}