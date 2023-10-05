# include "Zombie.hpp"

int	main(void)
{
    Zombie  zozo("zo"); // Zo is on the heap
    zozo.announce();

	Zombie *zombie = newZombie("Zombie"); // foo is allocated on the stack with new
    zombie->announce();
	delete zombie;

	randomChump("ZoZo"); // ZoZo is on the heap

	return 0;
}