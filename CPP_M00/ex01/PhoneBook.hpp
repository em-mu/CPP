/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emuller <emuller@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 15:43:12 by emuller           #+#    #+#             */
/*   Updated: 2023/10/01 16:17:51 by emuller          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONE_BOOK_H
# define PHONE_BOOK_H
# include "Contact.hpp"

class  PhoneBook{
  
  private: 
    Contact _mycontacts[8];
    int     _count;
    
  public:
    PhoneBook(void);
    ~PhoneBook(void);
    //accesseurs
    int     get_count(void) const;
    void    set_count(int count);
    void    add_contact(void);
    void    search_contact(void);
};

#endif