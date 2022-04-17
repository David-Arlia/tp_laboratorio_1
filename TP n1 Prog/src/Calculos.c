float DescuentoDebitoAerolineas(float preciosAerolineas)
{
	float tarjetaDebito;
	tarjetaDebito = preciosAerolineas - preciosAerolineas * .1;
	return tarjetaDebito;
}

float DescuentoDebitoLatam(float preciosLatam)
{
	float tarjetaDebito;
	tarjetaDebito = preciosLatam - preciosLatam * .1;
	return tarjetaDebito;
}

float InteresCreditoAerolineas(float preciosAerolineas)
{
	float tarjetaCredito;
	tarjetaCredito = preciosAerolineas + preciosAerolineas * .25;
	return tarjetaCredito;
}

float InteresCreditoLatam(float preciosLatam)
{
	float tarjetaCredito;
	tarjetaCredito = preciosLatam + preciosLatam * .25;
	return tarjetaCredito;
}

float PrecioBitcoinAerolineas(float preciosAerolineas)
{
	float BTC = 4606954.55;
	float cambioBitcoin;
	cambioBitcoin = preciosAerolineas / BTC;
	return cambioBitcoin;
}

float PrecioBitcoinLatam(float preciosLatam)
{
	float BTC = 4606954.55;
	float cambioBitcoin;
	cambioBitcoin = preciosLatam / BTC;
	return cambioBitcoin;
}

float PrecioKmAerolineas(float preciosAerolineas, float kilometrosIngresados)
{
	float precioUnitario;
	precioUnitario = preciosAerolineas / kilometrosIngresados;
	return precioUnitario;
}

float PrecioKmLatam(float preciosLatam, float kilometrosIngresados)
{
	float precioUnitario;
	precioUnitario = preciosLatam / kilometrosIngresados;
	return precioUnitario;
}

float DiferenciaPrecios(float preciosAerolineas, float preciosLatam)
{
	float diferencia;
	diferencia = preciosLatam - preciosAerolineas;
	if(diferencia < 0){
		diferencia = diferencia * (-1);
	}
	else{

	}
	return diferencia;
}

