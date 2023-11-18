/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emuller <emuller@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 12:04:28 by emuller           #+#    #+#             */
/*   Updated: 2023/11/18 16:37:14 by emuller          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm", 25, 5) , _target("default_target"){}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubberyCreationForm", 25, 5) , _target(target){}

ShrubberyCreationForm::~ShrubberyCreationForm(){}

ShrubberyCreationForm::ShrubberyCreationForm( ShrubberyCreationForm const & copy ) : AForm(copy)
{
    this->_target = copy._target;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(ShrubberyCreationForm const & rhs)
{
    this->_target = rhs._target;
    return (*this);
}

void    ShrubberyCreationForm::execute(Bureaucrat const & executor) const 
{
    if (getStatus() == 0)
        throw (std::logic_error( getName() + " is not signed."));
    if (executor.getGrade() >= getGradeToExecute())
        throw (std::logic_error( executor.getName() + " cannot execute " + getName() + ": because his grade is too low."));
    std::string tree = "                                              .\n\
                                    .         ;\n\
        .              .              ;%     ;;\n\
            ,           ,                :;%  %;\n\
            :         ;                   :;%;'     .,\n\
    ,.        %;     %;            ;        %;'    ,;\n\
    ;       ;%;  %%;        ,     %;    ;%;    ,%'\n\
    %;       %;%;      ,  ;       %;  ;%;   ,%;'\n\
        ;%;      %;        ;%;        % ;%;  ,%;'\n\
        `%;.     ;%;     %;'         `;%%;.%;'\n\
        `:;%.    ;%%. %@;        %; ;@%;%'\n\
            `:%;.  :;bd%;          %;@%;'\n\
            `@%:.  :;%.         ;@@%;'\n\
                `@%.  `;@%.      ;@@%;\n\
                `@%%. `@%%    ;@@%;\n\
                    ;@%. :@%%  %@@%;\n\
                    %@bd%%%bd%%:;\n\
                        #@%%%%%:;;\n\
                        %@@%%%::;\n\
                        %@@@%(o);  . '\n\
                        %@@@o%;:(.,'\n\
                    `.. %@@@o%::;\n\
                        `)@@@o%::;\n\
                        %@@(o)::;\n\
                        .%@@@@%::;\n\
                        ;%@@@@%::;.\n\
                    ;%@@@@%%:;;;.\n\
                ...;%@@@@@%%:;;;;,..";
    std::ofstream ofs;
    std::string filename = this->_target + "_shrubbery";
    ofs.open(filename.c_str());
    if(ofs.fail())
    {
        std::cerr << "Error : Unable to open file" << std::endl;
        return;
    }
    ofs << tree << std::endl;
    ofs.close();
}