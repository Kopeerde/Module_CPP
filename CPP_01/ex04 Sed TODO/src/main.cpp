
#include "../headers/sed.hpp"



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
		std::string s = argv[2];
		if (s.compare("\0"))
			return 0;
		s = argv[1];
		s += ".replace";
		std::ifstream src_file(argv[1]);
		std::fstream dst_file("test");

		dst_file << src_file.rdbuf();
	}
	return 0;
}