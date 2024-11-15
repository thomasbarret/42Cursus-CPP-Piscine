/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbarret <tbarret@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 10:17:32 by tbarret           #+#    #+#             */
/*   Updated: 2024/06/05 17:40:48 by tbarret          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iomanip>
#include <iostream>
#include <fstream>
#include <string>
#include <cstring>

int main(int argc, char **argv) {
	if (argc == 4) {
		std::string filePath = argv[1];
		std::string s1 = argv[2];
		std::string s2 = argv[3];

		if (!s1[0]) {
			std::cout << "Error: s1 is empty" << std::endl;
			return (1);
		}
		std::ifstream inputFile(filePath.c_str());
		if (!inputFile.is_open()) {
			std::cout << "Error: file not found" << std::endl;
			return (1);
		}
		std::string outputFileName = std::string(filePath.c_str()) + ".replace";
		std::ofstream outputFile(outputFileName.c_str());
		if (!outputFile.is_open()) {
			std::cout << "Error: could not create output file" << std::endl;
			return (1);
		}
		std::string line;
		while (std::getline(inputFile, line)) {
			size_t pos = 0;
			while ((pos = line.find(s1, pos)) != std::string::npos) {
				line = line.substr(0, pos) + s2 + line.substr(pos + strlen(s1.c_str()));
				pos += strlen(s2.c_str());
			}
			outputFile << line << std::endl;
		}
	} else {
		std::cout << "Usage: " << argv[0] <<" [file] [s1] [s2]" << std::endl;
	}
	return (0);
}