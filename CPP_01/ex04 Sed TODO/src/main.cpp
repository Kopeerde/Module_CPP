
#include "../headers/sed.hpp"

void line_replacer()
{

}

void line_checker(std::string line, char *search, char *replace)
{
	int i = 0; // Current index
	int j = 0; // Previous index
}

int main(int argc, char **argv)
{
	/*
	 * argv[0] = program name
	 * argv[1] = file to open
	 * argv[2] = looking for
	 * argv[3] = replace with
	 */
	if (argc == 4)
	{
		std::string s = argv[2]; // Verification que ce que l'on remplace ne soit pas le charactere null
		if (s.empty())
			return 0;

		std::string line; // Stockage de la ligne lue

		s = argv[1]; // Stockage du nom pour le nouveau fichier
		s += ".replace";

		std::ifstream src_file(argv[1]); // Ouverture des fichiers sources et destinations
		std::ofstream dst_file(s.c_str());

		while (getline(src_file, line)) // Lecture des lignes et reecritures si necessaire
		{
			line_checker(line, argv[2], argv[3]);
			dst_file << line << "\n";
		}

		src_file.close(); // Fermeture des fichiers sources et de destinations
		dst_file.close();
	}
	return 0;
}