
#include "../headers/sed.hpp"

void line_checker(std::string *line, char *search, char *replace)
{
	int j = 0;

	while (j != -1)
	{
		j = line->find(search, j, strlen(search));
		if (j != -1)
		{
			line->erase(j, strlen(search));
			line->insert(j, replace);
			j += strlen(search);
		}
	}
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
		if (argv[2][0] == '\0') // On verifie que l'on ne souhaite pas remplacer le charactere null.
			return 0;

		std::string s = argv[2]; // Verification que ce que l'on remplace ne soit pas le charactere null
		if (s.empty())
			return 0;

		std::string line; // Stockage de la ligne lue

		s = argv[1]; // Stockage du nom pour le nouveau fichier
		s += ".replace";

		std::ifstream src_file(argv[1]); // Ouverture des fichiers sources et destinations
		if (src_file.fail() || src_file.bad())
		{
			std::cout << "Une erreure s'est produite lors de l'ouverture du fichier." << std::endl;
			return 0;
		}
		std::ofstream dst_file(s.c_str());
		if (dst_file.fail() || dst_file.bad())
		{
			src_file.close();
			std::cout << "Une erreure s'est produite lors de la creation du fichier de reception." << std::endl;
			return 0;
		}

		while (getline(src_file, line)) // Lecture des lignes et reecritures si necessaire
		{
			line_checker(&line, argv[2], argv[3]);
			dst_file << line << "\n";
		}

		src_file.close(); // Fermeture des fichiers sources et de destinations
		dst_file.close();
	}
	else
		std::cout << "Erreur lors du lancement, veuillez entrer : ./sed <fichier> <str_a_chercher> <std_de_remplacement>" << std::endl;

	return 0;
}