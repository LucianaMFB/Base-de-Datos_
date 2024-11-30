// Hello World program 
// ANSI Codes
// https://gist.github.com/fnky/458719343aabd01cfb17a3a4f7296797

#include <iostream>
#include "cPrenda.hpp"
#include "cPeluche.hpp"
#include "cAccesorio.hpp"
#include "PrendaControl.hpp"
#include "PrendaView.hpp"
#include "cFecha.hpp"

#ifdef _WIN32
    #include <windows.h>
    #define CLEAR_COMMAND "cls"
#elif defined(__APPLE__) || defined(__MACH__) || defined(__linux__)
    #include <unistd.h>
    #include <termios.h>
    #define CLEAR_COMMAND "clear"
#endif


int main() 
{   
	std::system(CLEAR_COMMAND);
	
	cPrenda prenda1;
	cPeluche peluche1;
	cFecha fecha1;
	cAccesorio accesorio1;
	
	PrendaControl controlador_prenda(prenda1, fecha1, peluche1, accesorio1);
	PrendaView vista_prenda(controlador_prenda);
	
	
	vista_prenda.Parte_visual();;
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
































