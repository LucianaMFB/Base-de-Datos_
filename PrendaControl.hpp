#ifndef PRENDACONTROL_HPP
#define PRENDACONTROL_HPP  

#include "cPrenda.hpp"
#include "cPeluche.hpp"
#include "cAccesorio.hpp"

class PrendaControl
{
	private:
	cPrenda& modelo_prenda;
	cFecha& modelo_fecha;
	cPeluche& modelo_peluche;
	cAccesorio& modelo_accesorio;
	
	public:
	PrendaControl(cPrenda& modelo1, cFecha& modelo2, cPeluche& modelo3, cAccesorio& modelo4);
	
	bool set_precio_unitario_peluche(float numero);
	bool set_peso_peluche(float numero);
	bool set_medida_peluche(char * medida,int size);
	bool set_color_peluche(char *name, int size);
	bool set_talla_peluche(char *code, int size);
	
	float obtener_precio_unitario_peluche();
	float obtener_peso_peluche();
	const char* obtener_medida_peluche();
	const char* obtener_color_peluche();
	const char* obtener_talla_peluche();
	
	bool set_precio_unitario_accesorio(float numero);
	bool set_peso_accesorio(float numero);
	bool set_medida_accesorio(char * medida,int size);
	bool set_color_accesorio(char *name, int size);
	bool set_talla_accesorio(char *code, int size);
	
	float obtener_precio_unitario_accesorio();
	float obtener_peso_accesorio();
	const char* obtener_medida_accesorio();
	const char* obtener_color_accesorio();
	const char* obtener_talla_accesorio();
	
	bool set_unidad_relleno(char * cadena, int size);
	bool set_precio_relleno(float numero);
	bool set_peso_relleno(float numero);
	
	const char* obtener_unidad_relleno();
	float obtener_precio_relleno();
	float obtener_peso_relleno();
	
	bool set_material_base(char* cadena, int size);
	bool set_utilidad(char* cadena, int size);
	bool set_precio_base(float numero);
	
	const char* obtener_material_base();
	const char* obtener_utilidad();
	float obtener_precio_base();
	
	
};

#endif
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	

	
	
	
	
