/* NOTE: CC = ColorCorrector */
/* Original idea and original Python module by bellrise */
/* C++ remake by Lotus */

#include <iostream>
#include <string>

using std::cout; 
using std::endl; 
using std::cin; 
using std::string;


namespace cc
{
	//______BASE______________
	#define RESET   "\033[0m"
	#define BLACK   "\033[30m"      
	#define RED     "\033[31m"      
	#define GREEN   "\033[32m"    
	#define YELLOW  "\033[33m"    
	#define BLUE    "\033[34m"   
	#define MAGENTA "\033[35m"    
	#define CYAN    "\033[36m"    
	#define WHITE   "\033[37m"     

	//______BOLD_BASE_____________________
	#define BOLDBLACK   "\033[1m\033[30m"     
	#define BOLDRED     "\033[1m\033[31m"     
	#define BOLDGREEN   "\033[1m\033[32m"     
	#define BOLDYELLOW  "\033[1m\033[33m"  
	#define BOLDBLUE    "\033[1m\033[34m"  
	#define BOLDMAGENTA "\033[1m\033[35m"
	#define BOLDCYAN    "\033[1m\033[36m"     
	#define BOLDWHITE   "\033[1m\033[37m"   

	
	//___LOG_OUTPUT_______________________________________________________________________________
	void log(const char* msg)
	{
		cout << " -" << BOLDWHITE << msg << RESET << endl;
	}

	void log(string msg)
	{
		cout << " -" << BOLDWHITE << msg << RESET << endl;
	}

	void log(bool msg)
	{
		cout << " -" << std::boolalpha << BOLDWHITE << msg << RESET << std::noboolalpha << endl;
	}

	void log(char msg)
	{
		cout << " -" << BOLDWHITE << msg << RESET << endl;
	}

	void log(int msg)
	{
		cout << " -" << BOLDWHITE << msg << RESET << endl;
	}


	//___ERROR_OUTPUT____________________________________
	void err(string msg)
	{
		cout << " !-" << RED << msg << RESET << endl;
	}

	void err(const char* msg)
	{
		cout << " !-" << RED << msg << RESET << endl;
	}

	void err(bool msg)
	{
		cout << " !-" << RED << msg << RESET << endl;
	}
	
	void err(string msg)
	{
		cout << " !-" << RED << msg << RESET << endl;
	}

	void err(string msg)
	{
		cout << " !-" << RED << msg << RESET << endl;
	}
}

int main()
{
	cc::log("W");
}

