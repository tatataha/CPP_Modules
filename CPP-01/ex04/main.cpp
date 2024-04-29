/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhcelik <muhcelik@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 02:20:50 by muhcelik          #+#    #+#             */
/*   Updated: 2024/04/04 14:32:05 by muhcelik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

#include <iostream>
#include <fstream>
#include <string>

// find ve erase işlemlerini birleştirerek replace işlemi gerçekleştiren fonksiyon
void ft_replace(std::string& str, const std::string& oldStr, const std::string& newStr) {
    size_t pos = 0;
    while ((pos = str.find(oldStr, pos)) != std::string::npos) {
        str.erase(pos, oldStr.length());
        str.insert(pos, newStr);
        pos += newStr.length();
    }
}

int main(int ac, char **arg) {
    if (ac != 4){
		std::cout << "./program <fileName> <search> <replace>" << std::endl;
		return (1);
    }

    std::string s1 = arg[2];
    std::string s2 = arg[3];
    std::ifstream input;
    std::ofstream output;
    std::string buffer;
    std::string inputFile = arg[1];

    input.open(inputFile.c_str());
    if (!input.is_open()) {
        std::cerr << "File cant open!" << std::endl;
        return 1;
    }

    output.open((inputFile + ".replace").c_str());
    if (!output.is_open()) {
        std::cerr << "New file cant create!" << std::endl;
        return 1;
    }

    while (std::getline(input, buffer)) {
        ft_replace(buffer, s1, s2);
        output << buffer << std::endl;
    }

    output.close();
    input.close();

    return 0;
}
