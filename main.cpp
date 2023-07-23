#include<iostream>
#include <string>
#include <chrono>
#include <thread>
using namespace std;

void findCharacter(char c,int a);

int main()
{
	int a = 0;
	string sentence;

	cout << "Enter a sentence to print:";
	getline(std::cin, sentence);
	std::cout << "\033[H\033[J";                       // clear the screen in most terminals
	for (char c : sentence) {
		findCharacter(c,a);
		if (c == ' ') 
		     a += 10;
		else
			a += 8;
	}

	// Move cursor to the beginning of the previous lines
	//std::cout << "\r\033[5A";

	// Delay for demonstration purposes
	//std::this_thread::sleep_for(std::chrono::seconds(1));

	return 0;
}

void findCharacter(char c,int a) {
	switch (c)
	{
	case 'a':
	case 'A':
		// Move cursor to the beginning of the previous lines
		std::cout << "\r\033[6A";
		std::cout << "\r\033[" << a << "C" << "  ##  " << std::endl;
		std::cout << "\r\033[" << a << "C" << "##  ##" << std::endl;
		std::cout << "\r\033[" << a << "C" << "######" << std::endl;
		std::cout << "\r\033[" << a << "C" << "##  ##" << std::endl;
		std::cout << "\r\033[" << a << "C" << "##  ##" << std::endl;
		break;
	case 'B':
	case 'b':
		// Move cursor to the beginning of the previous lines
		std::cout << "\r\033[6A";
		std::cout << "\r\033[" << a << "C" << "##### " << std::endl;
		std::cout << "\r\033[" << a << "C" << "##  ##" << std::endl;
		std::cout << "\r\033[" << a << "C" << "#####" << std::endl;
		std::cout << "\r\033[" << a << "C" << "##  ##" << std::endl;
		std::cout << "\r\033[" << a << "C" << "##### " << std::endl;
		break;
	case 'C':
	case 'c':
		// Move cursor to the beginning of the previous lines
		std::cout << "\r\033[6A";
		std::cout << "\r\033[" << a << "C" << " #####" << std::endl;
		std::cout << "\r\033[" << a << "C" << "##    " << std::endl;
		std::cout << "\r\033[" << a << "C" << "##    " << std::endl;
		std::cout << "\r\033[" << a << "C" << "##    " << std::endl;
		std::cout << "\r\033[" << a << "C" << " #####" << std::endl;
		break;
	case 'D':
	case 'd':
		// Move cursor to the beginning of the previous lines
		std::cout << "\r\033[6A";
		std::cout << "\r\033[" << a << "C" << "##### " << std::endl;
		std::cout << "\r\033[" << a << "C" << "##  ##" << std::endl;
		std::cout << "\r\033[" << a << "C" << "##  ##" << std::endl;
		std::cout << "\r\033[" << a << "C" << "##  ##" << std::endl;
		std::cout << "\r\033[" << a << "C" << "##### " << std::endl;
		break;
	case 'E':
	case 'e':
		// Move cursor to the beginning of the previous lines
		std::cout << "\r\033[6A";
		std::cout << "\r\033[" << a << "C" << "######" << std::endl;
		std::cout << "\r\033[" << a << "C" << "##    " << std::endl;
		std::cout << "\r\033[" << a << "C" << "##### " << std::endl;
		std::cout << "\r\033[" << a << "C" << "##    " << std::endl;
		std::cout << "\r\033[" << a << "C" << "######" << std::endl;
		break;
	case 'F':
	case 'f':
		// Move cursor to the beginning of the previous lines
		std::cout << "\r\033[6A";
		std::cout << "\r\033[" << a << "C" << "######" << std::endl;
		std::cout << "\r\033[" << a << "C" << "##    " << std::endl;
		std::cout << "\r\033[" << a << "C" << "##### " << std::endl;
		std::cout << "\r\033[" << a << "C" << "##    " << std::endl;
		std::cout << "\r\033[" << a << "C" << "##    " << std::endl;
		break;
	case 'G':
	case 'g':
		// Move cursor to the beginning of the previous lines
		std::cout << "\r\033[6A";
		std::cout << "\r\033[" << a << "C" << " #####" << std::endl;
		std::cout << "\r\033[" << a << "C" << "##    " << std::endl;
		std::cout << "\r\033[" << a << "C" << "##  ##" << std::endl;
		std::cout << "\r\033[" << a << "C" << "##  ##" << std::endl;
		std::cout << "\r\033[" << a << "C" << " ### #" << std::endl;
		break;
	case 'H':
	case 'h':
		// Move cursor to the beginning of the previous lines
		std::cout << "\r\033[6A";
		std::cout << "\r\033[" << a << "C" << "##  ##" << std::endl;
		std::cout << "\r\033[" << a << "C" << "##  ##" << std::endl;
		std::cout << "\r\033[" << a << "C" << "######" << std::endl;
		std::cout << "\r\033[" << a << "C" << "##  ##" << std::endl;
		std::cout << "\r\033[" << a << "C" << "##  ##" << std::endl;
		break;
	case 'I':
	case 'i':
		// Move cursor to the beginning of the previous lines
		std::cout << "\r\033[6A";
		std::cout << "\r\033[" << a << "C" << "######" << std::endl;
		std::cout << "\r\033[" << a << "C" << "  ##  " << std::endl;
		std::cout << "\r\033[" << a << "C" << "  ##  " << std::endl;
		std::cout << "\r\033[" << a << "C" << "  ##  " << std::endl;
		std::cout << "\r\033[" << a << "C" << "######" << std::endl;
		break;
	case 'J':
	case 'j':
		// Move cursor to the beginning of the previous lines
		std::cout << "\r\033[6A";
		std::cout << "\r\033[" << a << "C" << "######" << std::endl;
		std::cout << "\r\033[" << a << "C" << "  ##  " << std::endl;
		std::cout << "\r\033[" << a << "C" << "  ##  " << std::endl;
		std::cout << "\r\033[" << a << "C" << "  ##  " << std::endl;
		std::cout << "\r\033[" << a << "C" << "####  " << std::endl;
		break;
	case 'K':
	case 'k':
		// Move cursor to the beginning of the previous lines
		std::cout << "\r\033[6A";
		std::cout << "\r\033[" << a << "C" << "##  ##" << std::endl;
		std::cout << "\r\033[" << a << "C" << "## ## " << std::endl;
		std::cout << "\r\033[" << a << "C" << "###   " << std::endl;
		std::cout << "\r\033[" << a << "C" << "## ## " << std::endl;
		std::cout << "\r\033[" << a << "C" << "##  ##" << std::endl;
		break;
	case 'L':
	case 'l':
		// Move cursor to the beginning of the previous lines
		std::cout << "\r\033[6A";
		std::cout << "\r\033[" << a << "C" << "##    " << std::endl;
		std::cout << "\r\033[" << a << "C" << "##    " << std::endl;
		std::cout << "\r\033[" << a << "C" << "##    " << std::endl;
		std::cout << "\r\033[" << a << "C" << "##    " << std::endl;
		std::cout << "\r\033[" << a << "C" << "######" << std::endl;
		break;
	case 'M':
	case 'm':
		// Move cursor to the beginning of the previous lines
		std::cout << "\r\033[6A";
		std::cout << "\r\033[" << a << "C" << "##  ##" << std::endl;
		std::cout << "\r\033[" << a << "C" << "# ## #" << std::endl;
		std::cout << "\r\033[" << a << "C" << "##  ##" << std::endl;
		std::cout << "\r\033[" << a << "C" << "##  ##" << std::endl;
		std::cout << "\r\033[" << a << "C" << "##  ##" << std::endl;
		break;
	case 'N':
	case 'n':
		// Move cursor to the beginning of the previous lines
		std::cout << "\r\033[6A";
		std::cout << "\r\033[" << a << "C" << "##  ##" << std::endl;
		std::cout << "\r\033[" << a << "C" << "### ##" << std::endl;
		std::cout << "\r\033[" << a << "C" << "## ###" << std::endl;
		std::cout << "\r\033[" << a << "C" << "##  ##" << std::endl;
		std::cout << "\r\033[" << a << "C" << "##  ##" << std::endl;
		break;
	case 'O':
	case 'o':
		// Move cursor to the beginning of the previous lines
		std::cout << "\r\033[6A";
		std::cout << "\r\033[" << a << "C" << " #### " << std::endl;
		std::cout << "\r\033[" << a << "C" << "##  ##" << std::endl;
		std::cout << "\r\033[" << a << "C" << "##  ##" << std::endl;
		std::cout << "\r\033[" << a << "C" << "##  ##" << std::endl;
		std::cout << "\r\033[" << a << "C" << " #### " << std::endl;
		break;
	case 'P':
	case 'p':
		// Move cursor to the beginning of the previous lines
		std::cout << "\r\033[6A";
		std::cout << "\r\033[" << a << "C" << "######" << std::endl;
		std::cout << "\r\033[" << a << "C" << "##  ##" << std::endl;
		std::cout << "\r\033[" << a << "C" << "######" << std::endl;
		std::cout << "\r\033[" << a << "C" << "##    " << std::endl;
		std::cout << "\r\033[" << a << "C" << "##    " << std::endl;
		break;
	case 'Q':
	case 'q':
		// Move cursor to the beginning of the previous lines
		std::cout << "\r\033[6A";
		std::cout << "\r\033[" << a << "C" << " ###  " << std::endl;
		std::cout << "\r\033[" << a << "C" << "## ## " << std::endl;
		std::cout << "\r\033[" << a << "C" << "## ## " << std::endl;
		std::cout << "\r\033[" << a << "C" << "## ## " << std::endl;
		std::cout << "\r\033[" << a << "C" << " #####" << std::endl;
		break;
	case 'R':
	case 'r':
		// Move cursor to the beginning of the previous lines
		std::cout << "\r\033[6A";
		std::cout << "\r\033[" << a << "C" << "##### " << std::endl;
		std::cout << "\r\033[" << a << "C" << "##  ##" << std::endl;
		std::cout << "\r\033[" << a << "C" << "####  " << std::endl;
		std::cout << "\r\033[" << a << "C" << "## ## " << std::endl;
		std::cout << "\r\033[" << a << "C" << "##  ##" << std::endl;
		break;
	case 'S':
	case 's':
		// Move cursor to the beginning of the previous lines
		std::cout << "\r\033[6A";
		std::cout << "\r\033[" << a << "C" << " #####" << std::endl;
		std::cout << "\r\033[" << a << "C" << "##    " << std::endl;
		std::cout << "\r\033[" << a << "C" << "  ### " << std::endl;
		std::cout << "\r\033[" << a << "C" << "    ##" << std::endl;
		std::cout << "\r\033[" << a << "C" << "##### " << std::endl;
		break;
	case 'T':
	case 't':
		// Move cursor to the beginning of the previous lines
		std::cout << "\r\033[6A";
		std::cout << "\r\033[" << a << "C" << "######" << std::endl;
		std::cout << "\r\033[" << a << "C" << "  ##  " << std::endl;
		std::cout << "\r\033[" << a << "C" << "  ##  " << std::endl;
		std::cout << "\r\033[" << a << "C" << "  ##  " << std::endl;
		std::cout << "\r\033[" << a << "C" << "  ##  " << std::endl;
		break;
	case 'U':
	case 'u':
		// Move cursor to the beginning of the previous lines
		std::cout << "\r\033[6A";
		std::cout << "\r\033[" << a << "C" << "##  ##" << std::endl;
		std::cout << "\r\033[" << a << "C" << "##  ## " << std::endl;
		std::cout << "\r\033[" << a << "C" << "##  ##" << std::endl;
		std::cout << "\r\033[" << a << "C" << "##  ##" << std::endl;
		std::cout << "\r\033[" << a << "C" << "######" << std::endl;
		break;
	case 'V':
	case 'v':
		// Move cursor to the beginning of the previous lines
		std::cout << "\r\033[6A";
		std::cout << "\r\033[" << a << "C" << "##  ##" << std::endl;
		std::cout << "\r\033[" << a << "C" << "##  ##" << std::endl;
		std::cout << "\r\033[" << a << "C" << "##  ##" << std::endl;
		std::cout << "\r\033[" << a << "C" << " #### " << std::endl;
		std::cout << "\r\033[" << a << "C" << "  ##  " << std::endl;
		break;
	case 'W':
	case 'w':
		// Move cursor to the beginning of the previous lines
		std::cout << "\r\033[6A";
		std::cout << "\r\033[" << a << "C" << "#    #" << std::endl;
		std::cout << "\r\033[" << a << "C" << "#    #" << std::endl;
		std::cout << "\r\033[" << a << "C" << "# ## #" << std::endl;
		std::cout << "\r\033[" << a << "C" << "# ## #" << std::endl;
		std::cout << "\r\033[" << a << "C" << "##  ##" << std::endl;
		break; 
	case 'X':
	case 'x':
			// Move cursor to the beginning of the previous lines
		std::cout << "\r\033[6A";
		std::cout << "\r\033[" << a << "C" << "##  ##" << std::endl;
		std::cout << "\r\033[" << a << "C" << " #  # " << std::endl;
		std::cout << "\r\033[" << a << "C" << "  ##  " << std::endl;
		std::cout << "\r\033[" << a << "C" << " #  # " << std::endl;
		std::cout << "\r\033[" << a << "C" << "##  ##" << std::endl;
		break;
	case 'Y':
	case 'y':
		// Move cursor to the beginning of the previous lines
		std::cout << "\r\033[6A";
		std::cout << "\r\033[" << a << "C" << "##  ##" << std::endl;
		std::cout << "\r\033[" << a << "C" << "##  ##" << std::endl;
		std::cout << "\r\033[" << a << "C" << "######" << std::endl;
		std::cout << "\r\033[" << a << "C" << "    ##" << std::endl;
		std::cout << "\r\033[" << a << "C" << "######" << std::endl;
		break;
	case 'Z':
	case 'z':
		// Move cursor to the beginning of the previous lines
		std::cout << "\r\033[6A";
		std::cout << "\r\033[" << a << "C" << "######" << std::endl;
		std::cout << "\r\033[" << a << "C" << "   ## " << std::endl;
		std::cout << "\r\033[" << a << "C" << "  ##  " << std::endl;
		std::cout << "\r\033[" << a << "C" << " ##   " << std::endl;
		std::cout << "\r\033[" << a << "C" << "######" << std::endl;
		break;
	default:
		cout << "Nothing";
	
	}
}