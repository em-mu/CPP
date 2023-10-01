/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emuller <emuller@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/30 15:43:28 by emuller           #+#    #+#             */
/*   Updated: 2023/10/01 17:10:58 by emuller          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
# define CONTACT_H

# include <iostream>
#include <string>
#include <iomanip>

class Contact {
    
    private:
        int             _index;
        std::string		_first_name;
        std::string		_last_name;
        std::string		_nickname;
        std::string		_phone_number;
        std::string		_darkest_secret;
        
    public:
        Contact(void);
        ~Contact(void);
        void        set_new_contact(int i);
        void        display_header(void) const;
        void        display_contact(void) const;
        int         get_index(void) const;
        std::string get_first_name(void) const;
        std::string get_last_name(void) const;
        std::string get_nickname(void) const;
        std::string get_phone_number(void) const;
};

#endif