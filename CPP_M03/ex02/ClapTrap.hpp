/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emuller <emuller@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 13:22:43 by emuller           #+#    #+#             */
/*   Updated: 2023/10/23 13:44:52 by emuller          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#ifndef CLAPTRAP_H
# define CLAPTRAP_H

class ClapTrap {
    
  private:
    std::string _name;
    int         _hit_points;
    int         _energy_points;
    int         _attack_damage;
    
  public:
    ClapTrap(std::string name, int hit_point, int energy_point, int attack_damage);
    ClapTrap( ClapTrap const & copy );
    ClapTrap& operator=(ClapTrap const & rhs);
    ~ClapTrap();
    
    std::string get_name( void ) const;
    int         get_hit_points( void ) const;
    int         get_energy_points( void ) const;
    int         get_attack_damage( void ) const;
    void        set_energy_points( int i );
    
    void        attack(const std::string& target);
    void        takeDamage(unsigned int amount);
    void        beRepaired(unsigned int amount);
};

#endif
