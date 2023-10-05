# include "Zombie.hpp"

// int main()
// {
//     Zombie  zozo("zo");
//     zozo.announce();
    
//     Zombie  *z("yo");
//     z->newZombie("foo");

//     Zombie  zoo("test");
//     zoo.randomChump("grr");

//     return 0;
// }

int main(void)
{

	Zombie *Zombie_on_heap;

	Zombie_on_heap = NULL;
	Zombie_on_heap = Zombie_on_heap->newZombie("John Doe");
	Zombie_on_heap->announce();
	Zombie_on_heap->randomChump("Chuck Norris");
	Zombie_on_heap->randomChump("Chuck Kekss");
	delete Zombie_on_heap;
	return (0);
}