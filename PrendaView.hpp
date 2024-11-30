#ifndef PRENDAVIEW_HPP
#define PRENDAVIEW_HPP 

#include "PrendaControl.hpp"

class PrendaControl;

class PrendaView 
{
	private:
	PrendaControl& controlador;
	
	public:
	PrendaView(PrendaControl& controller);
	void Pagina_Principal();
	int Elegir_tipo_prenda();
	void Titulo_prenda();
	
	void Error_precio_unitario();
	void Error_peso();
	void Error_medida();
	void Error_color();
	void Error_talla();
	void Error_unidad_relleno();
	void Error_peso_relleno();
	void Error_precio_relleno();
	void Error_material_base();
	void Error_utilidad();
	void Error_precio_base();
	
	
	
	
	void Operacion_exitosa_peluche();
	void Operacion_exitosa_accesorio();
	
	void Pedir_precio_unitario(int eleccion);
	void Pedir_peso(int eleccion);
	void Pedir_medida(int eleccion);
	void Pedir_color(int eleccion);
	void Pedir_talla(int eleccion);
	bool Confirmar_datos_peluche();
	bool Confirmar_datos_accesorio();
	void Parte_visual();
	void Pedir_datos_prenda(int eleccion);
	
	void Pedir_unidad_relleno();
	void Pedir_precio_relleno();
	void Pedir_peso_relleno();
	void Pedir_datos_peluche();
	
	void Pedir_material_base();
	void Pedir_utilidad();
	void Pedir_precio_base();
	void Pedir_datos_accesorio();
	
	void Mostrar_datos_peluche();
	void Mostrar_datos_accesorio();
	
	
	
};

#endif











































