#include "Zombie.hpp"

int main(void)
{
	Zombie *horde;
	horde = zombieHorde(5, "member");
	delete[] horde;

    horde = zombieHorde(0, "Emma");

    horde = zombieHorde(1, "Emma");
    delete[] horde;
    
	return (0);
}
