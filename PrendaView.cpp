#include "PrendaView.hpp"
#include <iostream>

#ifdef _WIN32
    #include <windows.h>
    #define CLEAR_COMMAND "cls"
#elif defined(__APPLE__) || defined(__MACH__) || defined(__linux__)
    #include <unistd.h>
    #include <termios.h>
    #define CLEAR_COMMAND "clear"
#endif

PrendaView::PrendaView(PrendaControl& controller) : controlador(controller) {}

void PrendaView::Pagina_Principal()
{
    std::cout << "\x1B[H";          // Codigo para colocar el cursor en el canto superior izquierdo
	std::cout << " " << std::endl;
	std::cout << " " << std::endl;
	std::cout << "\x1B[38;5;227m   _______  __   __  _______  ______    _______  _______  _______   _______  _______  __   __  _______  ___  ___     " << std::endl;
	std::cout << "\x1B[38;5;227m  |       ||  |_|  ||       ||    _ |  |       ||       ||   _   | |       ||       ||  |_|  ||       ||   ||   |  " << std::endl;
	std::cout << "\x1B[38;5;227m  |    ___||       ||    _  ||   | ||  |    ___||  _____||  |_|  | |_     _||    ___||       ||_     _||   ||   |      " << std::endl;
	std::cout << "\x1B[38;5;227m  |   |___ |       ||   |_| ||   |_||_ |   |___ | |_____ |       |   |   |  |   |___ |       |  |   |  |   ||   |" << std::endl;
	std::cout << "\x1B[38;5;227m  |    ___||       ||    ___||    __  ||    ___||_____  ||       |   |   |  |    ___| |     |   |   |  |   ||   |___ " << std::endl;
	std::cout << "\x1B[38;5;227m  |   |___ | ||_|| ||   |    |   |  | ||   |___  _____| ||   _   |   |   |  |   |___ |   _   |  |   |  |   ||       |" << std::endl;
	std::cout << "\x1B[38;5;227m  |_______||_|   |_||___|    |___|  |_||_______||_______||__| |__|   |___|  |_______||__| |__|  |___|  |___||_______|" << std::endl;
	std::cout << " \x1B[m" << std::endl;
}

int PrendaView::Elegir_tipo_prenda()
{
	std::cout << " " << std::endl;          
	std::cout << "\x1B[38;5;222m             ************************************************** " << std::endl;
	std::cout << "\x1B[38;5;222m             |                                                | " << std::endl;
	std::cout << "\x1B[38;5;222m             |" << "                      PRENDA                    " << "|" << std::endl;
	std::cout << "\x1B[38;5;222m             |" << "   1 PARA INGRESAR INFORMACION DE PELUCHE       " << "|" << std::endl;
	std::cout << "\x1B[38;5;222m             |" << "   2 PARA INGRESAR INFORMACION DE ACCESORIO     " << "|"  << std::endl;
	std::cout << "\x1B[38;5;222m             |                                                | \x1B[m" << std::endl;
	std::cout << "\x1B[38;5;222m             ************************************************** \x1B[m" << std::endl;
	
	int eleccion {0};
	std::cout << "	Que tipo de prenda desea registrar? ";
	std::cin >> eleccion;
	
	return eleccion;
}



void PrendaView::Titulo_prenda()
{
	//std::cout << " " << std::endl;
	//std::cout << " " << std::endl;
	std::cout << "\x1B[38;5;211m   _______  ______    _______  __    _  ______   _______  _______ " << std::endl;
	std::cout << "\x1B[38;5;211m  |       ||    _ |  |       ||  |  | ||      | |   _   ||       |" << std::endl;
	std::cout << "\x1B[38;5;211m  |    _  ||   | ||  |    ___||   |_| ||  _    ||  |_|  ||  _____|" << std::endl;
	std::cout << "\x1B[38;5;211m  |   |_| ||   |_||_ |   |___ |       || | |   ||       || |_____ " << std::endl;
	std::cout << "\x1B[38;5;211m  |    ___||    __  ||    ___||  _    || |_|   ||       ||_____  |" << std::endl;
	std::cout << "\x1B[38;5;211m  |   |    |   |  | ||   |___ | | |   ||       ||   _   | _____| |" << std::endl;
	std::cout << "\x1B[38;5;211m  |___|    |___|  |_||_______||_|  |__||______| |__| |__||_______|" << std::endl;
	std::cout << " " << std::endl;
	std::cout << " \x1B[m" << std::endl;
}

//********************************************** MENSAJES **********************************************************

void PrendaView::Error_precio_unitario()
{
	std::cout<< " ERROR AL LLENAR EL PRECIO UNITARIO" <<std::endl;
}

void PrendaView::Error_peso()
{
	std::cout<< " ERROR AL LLENAR EL PESO" <<std::endl;
}

void PrendaView::Error_medida()
{
	std::cout<< " ERROR AL LLENAR LA MEDIDA" <<std::endl;
}

void PrendaView::Error_color()
{
	std::cout<< " ERROR AL LLENAR EL COLOR" <<std::endl;
}

void PrendaView::Error_talla()
{
	std::cout<< " ERROR AL LLENAR LA TALLA" <<std::endl;
}

void PrendaView::Error_unidad_relleno()
{
	std::cout<< " ERROR AL LLENAR LA UNIDAD DE RELLENO" <<std::endl;
}

void PrendaView::Error_peso_relleno()
{
	std::cout<< " ERROR AL LLENAR EL PRECIO DEL RELLENO" <<std::endl;
}

void PrendaView::Error_precio_relleno()
{
	std::cout<< " ERROR AL LLENAR EL PRECIO DEL RELLENO" <<std::endl;
}

void PrendaView::Error_material_base()
{
	std::cout<< " ERROR AL LLENAR EL MATERIAL BASE" <<std::endl;
}

void PrendaView::Error_utilidad()
{
	std::cout<< " ERROR AL LLENAR LA UTILIDAD" <<std::endl;
}

void PrendaView::Error_precio_base()
{
	std::cout<< " ERROR AL LLENAR EL PRECIO DEL ACCESORIO" <<std::endl;
}

void PrendaView::Operacion_exitosa_peluche()
{
	std::cout << " " << std::endl;
	std::cout << "	!! SE GUARDO CON EXITO LA PRENDA DE TIPO PELUCHE !!" <<std::endl;
}

void PrendaView::Operacion_exitosa_accesorio()
{
	std::cout << " " << std::endl;
	std::cout << "	!! SE GUARDO CON EXITO LA PRENDA DE TIPO ACCESORIO !!" <<std::endl;
}

//****************************************** LLENADO DE DATOS EN PELUCHE ********************************************************

void PrendaView::Pedir_precio_unitario(int eleccion) 								//GENERAL
{
	float temp{0};
	
	if (eleccion == 1)
	{
		std::cout << " " << std::endl; 
		std::cout << "\x1B[38;5;211m    *" <<"   PRECIO UNITARIO DEL PELUCHE: \x1B[m" ;
		std::cin >> temp;
		
		if ((controlador.set_precio_unitario_peluche(temp))!= true)
		{
			Error_precio_unitario();
		}
	}
	
	else
	{
		std::cout << " " << std::endl; 
		std::cout << "\x1B[38;5;125m    *" <<"   PRECIO UNITARIO DEL ACCESORIO: \x1B[m" ;
		std::cin >> temp;
		
		if ((controlador.set_precio_unitario_accesorio(temp))!= true)
		{
			Error_precio_unitario();
		}
	}
}

void PrendaView::Pedir_peso(int eleccion) 											//GENERAL
{
	float temp{0};
	
	if (eleccion == 1)
	{
		std::cout << "\x1B[38;5;211m    *" <<"   PESO DEL PELUCHE: \x1B[m" ;
		std::cin >> temp;
		
		if ((controlador.set_peso_peluche(temp))!= true)
		{
			Error_peso();
		}
	}
	
	else
	{
		std::cout << "\x1B[38;5;125m    *" <<"   PESO DEL ACCESORIO: \x1B[m" ;
		std::cin >> temp;
		
		if ((controlador.set_peso_accesorio(temp))!= true)
		{
			Error_peso();
		}
	}
}

void PrendaView::Pedir_medida(int eleccion)											//GENERAL
{
	char temp[30] {"-"};
	int num{0};
	int tam_med {1};
	
	if (eleccion == 1)
	{
		std::cout << "\x1B[38;5;211m    *" <<"   MEDIDA DEL PELUCHE: \x1B[m" ;
		std::cin >> temp;
		
		if ((controlador.set_medida_peluche(temp, tam_med))!= true)
		{
			Error_medida();
		}
	}
	
	else 
	{
		std::cout << "\x1B[38;5;125m    *" <<"   MEDIDA DEL ACCESORIO: \x1B[m" ;
		std::cin >> temp;
		
		if ((controlador.set_medida_accesorio(temp, tam_med))!= true)
		{
			Error_medida();
		}
	}
}


void PrendaView::Pedir_color(int eleccion)											//GENERAL
{
	char temp[30] {"-"};
	int num{0};
	int tam_col {1};
	
	if (eleccion == 1)
	{
		std::cout << "\x1B[38;5;211m    *" <<"   COLOR DEL PELUCHE: \x1B[m" ;
		std::cin >> temp;
		
		if ((controlador.set_color_peluche(temp, tam_col))!= true)
		{
			Error_color();
		}
	}
	
	else 
	{
		std::cout << "\x1B[38;5;125m    *" <<"   COLOR DEL ACCESORIO: \x1B[m" ;
		std::cin >> temp;
		
		if ((controlador.set_color_accesorio(temp, tam_col))!= true)
		{
			Error_color();
		}
	}
}

void PrendaView::Pedir_talla(int eleccion)											//GENERAL
{
	char temp[30] {"-"};
	int num{0};
	int tam_tall {1};
	
	if (eleccion == 1)
	{
		std::cout << "\x1B[38;5;211m    *" <<"   TALLA DEL PELUCHE: \x1B[m" ;
		std::cin >> temp;
		
		if ((controlador.set_talla_peluche(temp, tam_tall))!= true)
		{
			Error_talla();
		}
	}
	
	else
	{
		std::cout << "\x1B[38;5;125m    *" <<"   TALLA DEL ACCESORIO: \x1B[m" ;
		std::cin >> temp;
		
		if ((controlador.set_talla_accesorio(temp, tam_tall))!= true)
		{
			Error_talla();
		}
	}
}

void PrendaView::Pedir_datos_prenda(int eleccion)
{
	Pedir_precio_unitario(eleccion);
	Pedir_peso(eleccion);
	Pedir_medida(eleccion);
	Pedir_color(eleccion);
	Pedir_talla(eleccion);
}

bool PrendaView::Confirmar_datos_peluche()
{
	std::cout << " " << std::endl;
	std::cout << "	Se guardo un peluche con PRECIO TOTAL: " << controlador.obtener_precio_relleno() 
			<< " - PESO TOTAL: " << controlador.obtener_peso_relleno()
			<< " - MEDIDA: " << controlador.obtener_medida_peluche()
			<< " - COLOR: " << controlador.obtener_color_peluche()
			<< " - TALLA: " << controlador.obtener_talla_peluche()
			<< " - UNIDAD DE RELLENO: " << controlador.obtener_unidad_relleno() << std::endl;
	
	char comando {'-'};
	
	std::cout << " " << std::endl;
	std::cout << " " << std::endl;
	std::cout << "	Hubo algun error que desee modificar? (y/n) ";
	std::cin >> comando;
	
	if ((comando=='Y') || (comando=='y'))
	{
		return true;
	}
	
	else 
	{
		return false;
	}
}

bool PrendaView::Confirmar_datos_accesorio()
{
	std::cout << " " << std::endl;
	std::cout << "	Se guardo un accesorio con PRECIO TOTAL: " << controlador.obtener_precio_base() 
			<< " - PESO TOTAL: " << controlador.obtener_peso_accesorio()
			<< " - MEDIDA: " << controlador.obtener_medida_accesorio()
			<< " - COLOR: " << controlador.obtener_color_accesorio()
			<< " - TALLA: " << controlador.obtener_talla_accesorio()
			<< " - MATERIAL BASE: " << controlador.obtener_material_base()
			<< " - UTILIDAD: " << controlador.obtener_utilidad() << std::endl;
	
	char comando {'-'};
	
	std::cout << " " << std::endl;
	std::cout << " " << std::endl;
	std::cout << "	Hubo algun error que desee modificar? (y/n) ";
	std::cin >> comando;
	
	if ((comando=='Y') || (comando=='y'))
	{
		return true;
	}
	
	else 
	{
		return false;
	}
}

void PrendaView::Parte_visual()
{
	Pagina_Principal();
	Titulo_prenda();
	int eleccion = Elegir_tipo_prenda();
	std::system(CLEAR_COMMAND);
	
	Pedir_datos_prenda(eleccion);
	
	if (eleccion == 1)
	{
		Pedir_datos_peluche();
		if (Confirmar_datos_peluche()== true)
		{
			Pedir_datos_prenda(eleccion);
			Pedir_datos_peluche();
		}
		
		Mostrar_datos_peluche();
	}
	
	else
	{
		Pedir_datos_accesorio();
		if (Confirmar_datos_accesorio()== true)
		{
			Pedir_datos_prenda(eleccion);
			Pedir_datos_accesorio();
		}
		Mostrar_datos_accesorio();
	}
	
	
}

//**************************************************************************************************************************

void PrendaView::Pedir_unidad_relleno()											//PELUCHE
{
	char temp[30] {"-"};
	int num{0};
	int tam_rell {1};
	
	
	std::cout << "\x1B[38;5;211m    *" <<"   UNIDAD DE RELLENO: \x1B[m" ;
	std::cin >> temp;
	
	if ((controlador.set_unidad_relleno(temp, tam_rell))!= true)
	{
		Error_unidad_relleno();
	}
}

void PrendaView::Pedir_precio_relleno()											//PELUCHE
{
	float temp{0};
	
	
	std::cout << "\x1B[38;5;211m    *" <<"   PRECIO DEL RELLENO: \x1B[m" ;
	std::cin >> temp;
	
	if ((controlador.set_precio_relleno(temp))!= true)
	{
		Error_precio_relleno();
	}
}

void PrendaView::Pedir_peso_relleno()											//PELUCHE
{
	float temp{0};
	
	
	std::cout << "\x1B[38;5;211m    *" <<"   PESO DEL RELLENO: \x1B[m" ;
	std::cin >> temp;
	
	if ((controlador.set_peso_relleno(temp))!= true)
	{
		Error_peso_relleno();
	}
}

void PrendaView::Pedir_datos_peluche()
{
	Pedir_unidad_relleno();
	Pedir_precio_relleno();
	Pedir_peso_relleno();
	Operacion_exitosa_peluche();
	
}

//*********************************************************************************************************************

void PrendaView::Pedir_material_base()											//ACCESORIO
{
	char temp[30] {"-"};
	int num{0};
	int tam_mat {1};
	
	
	std::cout << "\x1B[38;5;211m    *" <<"   MATERIAL BASE: \x1B[m" ;
	std::cin >> temp;
	
	if ((controlador.set_material_base(temp, tam_mat))!= true)
	{
		Error_material_base();
	}
}

void PrendaView::Pedir_utilidad()												//ACCESORIO
{
	char temp[30] {"-"};
	int num{0};
	int tam_ut {1};
	
	
	std::cout << "\x1B[38;5;211m    *" <<"   UTILIDAD: \x1B[m" ;
	std::cin >> temp;
	
	if ((controlador.set_utilidad(temp, tam_ut))!= true)
	{
		Error_utilidad();
	}
}

void PrendaView::Pedir_precio_base()											//ACCESORIO
{
	float temp{0};
	
	
	std::cout << "\x1B[38;5;211m    *" <<"   PRECIO BASE: \x1B[m" ;
	std::cin >> temp;
	
	if ((controlador.set_precio_base(temp))!= true)
	{
		Error_precio_base();
	}
}

void PrendaView::Pedir_datos_accesorio()
{
	Pedir_material_base();
	Pedir_utilidad();
	Pedir_precio_base();
	Operacion_exitosa_accesorio();
	
}

void PrendaView::Mostrar_datos_peluche()
{
	std::cout << " " << std::endl;
	std::cout << "	-------------------------------------------------------------" << std::endl;
	std::cout << "		PRECIO TOTAL DEL PELUCHE: \t" << controlador.obtener_precio_relleno() << std::endl;
	std::cout << "		PESO TOTAL DEL PELUCHE: \t" << controlador.obtener_peso_relleno() << std::endl;
	std::cout << "		MEDIDA DEL PELUCHE: \t" << controlador.obtener_medida_peluche() << std::endl;
	std::cout << "		COLOR DEL PELUCHE: \t" << controlador.obtener_color_peluche() << std::endl;
	std::cout << "		TALLA DEL PELUCHE: \t" << controlador.obtener_talla_peluche() << std::endl;
	std::cout << "		RELLENO DEL PELUCHE: \t" << controlador.obtener_unidad_relleno() << std::endl;
	std::cout << "	-------------------------------------------------------------" << std::endl;
	std::cout << " " << std::endl;
}

void PrendaView::Mostrar_datos_accesorio()
{
	std::cout << " " << std::endl;
	std::cout << "	-------------------------------------------------------------" << std::endl;
	std::cout << "		PRECIO TOTAL DEL ACCESORIO: \t" << controlador.obtener_precio_base() << std::endl;
	std::cout << "		PESO TOTAL DEL ACCESORIO: \t" << controlador.obtener_peso_accesorio() << std::endl;
	std::cout << "		MEDIDA DEL ACCESORIO: \t" << controlador.obtener_medida_accesorio() << std::endl;
	std::cout << "		COLOR DEL ACCESORIO: \t" << controlador.obtener_color_accesorio() << std::endl;
	std::cout << "		TALLA DEL ACCESORIO: \t" << controlador.obtener_talla_accesorio() << std::endl;
	std::cout << "		MATERIAL DEL ACCESORIO: \t" << controlador.obtener_material_base() << std::endl;
	std::cout << "		UTILIDAD DEL ACCESORIO: \t" << controlador.obtener_utilidad() << std::endl;
	std::cout << "	-------------------------------------------------------------" << std::endl;
	std::cout << " " << std::endl;
}

































