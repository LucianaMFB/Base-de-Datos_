#include "cPrenda.hpp"
#include "cPeluche.hpp"
#include "cAccesorio.hpp"
#include "cFecha.hpp"
#include "PrendaControl.hpp"

PrendaControl::PrendaControl(cPrenda& modelo1, cFecha& modelo2, cPeluche& modelo3, cAccesorio& modelo4)
    : modelo_prenda(modelo1), modelo_fecha(modelo2), modelo_peluche(modelo3), modelo_accesorio(modelo4){ }

//------------------------------ SET EN PRENDA (EN PELUCHE) ---------------------------------------------------	
	
bool PrendaControl::set_precio_unitario_peluche(float numero)
{
	return modelo_peluche.llenado_precio_unitario(numero);
}

bool PrendaControl::set_peso_peluche(float numero)
{
	return modelo_peluche.llenado_peso(numero);
}

bool PrendaControl::set_medida_peluche(char * medida,int size)
{
	return modelo_peluche.llenado_medida(medida, size);
}

bool PrendaControl::set_color_peluche(char *name, int size)
{
	return modelo_peluche.llenado_color(name, size);
}

bool PrendaControl::set_talla_peluche(char *code, int size)
{
	return modelo_peluche.llenado_talla(code, size);
}

//----------------------------------- GET EN PRENDA (EN PELUCHE) ----------------------------------------------------

float PrendaControl::obtener_precio_unitario_peluche()
{
	return modelo_peluche.getPrecio_unitario();
}

float PrendaControl::obtener_peso_peluche()
{
	return modelo_peluche.getPeso();
}

const char* PrendaControl::obtener_medida_peluche()
{
	return modelo_peluche.getMedida();
}

const char* PrendaControl::obtener_color_peluche()
{
	return modelo_peluche.getColor();
}

const char* PrendaControl::obtener_talla_peluche()
{
	return modelo_peluche.getTalla();
}

//------------------------------ SET EN PRENDA (EN ACCESORIO) ---------------------------------------------------	
	
bool PrendaControl::set_precio_unitario_accesorio(float numero)
{
	return modelo_accesorio.llenado_precio_unitario(numero);
}

bool PrendaControl::set_peso_accesorio(float numero)
{
	return modelo_accesorio.llenado_peso(numero);
}

bool PrendaControl::set_medida_accesorio(char * medida,int size)
{
	return modelo_accesorio.llenado_medida(medida, size);
}

bool PrendaControl::set_color_accesorio(char *name, int size)
{
	return modelo_accesorio.llenado_color(name, size);
}

bool PrendaControl::set_talla_accesorio(char *code, int size)
{
	return modelo_accesorio.llenado_talla(code, size);
}

//----------------------------------- GET EN PRENDA (EN ACCESORIO) ----------------------------------------------------

float PrendaControl::obtener_precio_unitario_accesorio()
{
	return modelo_accesorio.getPrecio_unitario();
}

float PrendaControl::obtener_peso_accesorio()
{
	return modelo_accesorio.getPeso();
}

const char* PrendaControl::obtener_medida_accesorio()
{
	return modelo_accesorio.getMedida();
}

const char* PrendaControl::obtener_color_accesorio()
{
	return modelo_accesorio.getColor();
}

const char* PrendaControl::obtener_talla_accesorio()
{
	return modelo_accesorio.getTalla();
}

//------------------------------------------ SET DE PELUCHE  ---------------------------------------------------	

bool PrendaControl::set_unidad_relleno(char * cadena, int size)
{
	return modelo_peluche.llenado_unidad_relleno(cadena, size);
}

bool PrendaControl::set_precio_relleno(float numero)
{
	modelo_peluche.llenado_precio_relleno(numero);
	return modelo_peluche.llenado_precio_final();
}

bool PrendaControl::set_peso_relleno(float numero)
{
	modelo_peluche.llenado_peso_relleno(numero);
	return modelo_peluche.llenado_peso_final();
}

//------------------------------------------ GET DE PELUCHE  ---------------------------------------------------

const char* PrendaControl::obtener_unidad_relleno()
{
	return modelo_peluche.getUnidad_relleno();
}

float PrendaControl::obtener_precio_relleno()
{
	return modelo_peluche.getPrecio_final();
}

float PrendaControl::obtener_peso_relleno()
{
	return modelo_peluche.getPeso_final();
}


//------------------------------------------ SET DE ACCESORIO  ---------------------------------------------------	

bool PrendaControl::set_material_base(char* cadena, int size)
{
	return modelo_accesorio.llenado_material_base(cadena, size);
}

bool PrendaControl::set_utilidad(char* cadena, int size)
{
	return modelo_accesorio.llenado_utilidad(cadena, size);
}

bool PrendaControl::set_precio_base(float numero)
{
	modelo_accesorio.llenado_precio_base(numero);
	return modelo_accesorio.llenado_precio_final();
}


//------------------------------------------ GET DE ACCESORIO  ---------------------------------------------------

const char* PrendaControl::obtener_material_base()
{
	return modelo_accesorio.getMaterial_base();
}

const char* PrendaControl::obtener_utilidad()
{
	return modelo_accesorio.getUtilidad();
}

float PrendaControl::obtener_precio_base()
{
	return modelo_accesorio.getPrecio_final();
}












































