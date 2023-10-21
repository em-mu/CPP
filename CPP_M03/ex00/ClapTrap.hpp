/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emuller <emuller@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 13:22:43 by emuller           #+#    #+#             */
/*   Updated: 2023/10/19 14:14:55 by emuller          ###   ########.fr       */
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
    ClapTrap();
    ClapTrap(std::string name);
    ~ClapTrap();
    
    std::string get_name( void ) const;
    int         get_hit_points( void ) const;
    int         get_energy_points( void ) const;
    int         get_attack_damage( void ) const;
    
    void        attack(const std::string& target);
    void        takeDamage(unsigned int amount);
    void        beRepaired(unsigned int amount);
};

#endif
