#ifndef CONTACT_HPP
# define CONTACT_HPP

//# include <iostream>
//# include <iomanip>
# include <string>

class Contact {
public:
    std::string firstName, lastName, nickname, phoneNumber, darkestSecret;

    void setFirstName(const std::string &fn);
    void setLastName(const std::string &ln);
    void setNickname(const std::string &nn);
    void setPhoneNumber(const std::string &pn);
    void setDarkestSecret(const std::string &ds);

    // getter 함수도 const로 선언
    std::string getFirstName() const { return firstName; }
    std::string getLastName() const { return lastName; }
    std::string getNickname() const { return nickname; }
    std::string getPhoneNumber() const { return phoneNumber; }
    std::string getDarkestSecret() const { return darkestSecret; }
};

 #endif
