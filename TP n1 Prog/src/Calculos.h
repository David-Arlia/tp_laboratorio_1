#ifndef CALCULOS_H_
#define CALCULOS_H_

float DescuentoDebitoAerolineas(float preciosAerolineas);
float DescuentoDebitoLatam(float preciosLatam);
float InteresCreditoAerolineas(float preciosAerolineas);
float InteresCreditoLatam(float preciosLatam);
float PrecioBitcoinAerolineas(float preciosAerolineas);
float PrecioBitcoinLatam(float preciosLatam);
float PrecioKmAerolineas(float preciosAerolineas, float kilometrosIngresados);
float PrecioKmLatam(float preciosLatam, float kilometrosIngresados);
float DiferenciaPrecios(float preciosAerolineas, float preciosLatam);

#endif /* CALCULOS_H_ */
