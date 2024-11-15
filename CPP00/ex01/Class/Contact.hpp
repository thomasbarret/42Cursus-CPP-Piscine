/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbarret <tbarret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 12:47:34 by tbarret           #+#    #+#             */
/*   Updated: 2024/06/03 15:12:26 by tbarret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <string>

class Contact
{
private:
    std::string _firstName;
    std::string _lastName;
    std::string _nickname;
    std::string _phoneNumber;
    std::string _darkestSecret;
	
public:
    Contact(const std::string fName = "", const std::string lName = "", const std::string nName = "", const std::string phone = "", const std::string secret = "");
    void displayLine(int index) const;
    void displayDetails() const;
    bool isEmpty() const;
	~Contact();
};

