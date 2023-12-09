#pragma once

ref class CLAddress {
private:
	int id_address;
	System::String^ country;
	System::String^ city;
	System::String^ street;
	int street_number;
	int postal;
	int id_city;

public:

	//***setup de l'adresse***
	virtual void setIdAddress(int);
	virtual void setcountry(System::String^ country);
	virtual void setcity(System::String^ city);
	virtual void setstreet(System::String^ street);
	virtual void setstreet_number(int);
	virtual void setpostal(int);
	virtual void setIdCity(int);

	//***Récup. l'adresse***
	virtual int getIdAddress();
	virtual System::String^ getcountry();
	virtual System::String^ getcity();
	virtual System::String^ getstreet();
	virtual int getstreet_number();
	virtual int getpostal();
	virtual int getIdCity();

	//***Undéfinit***
	//virtual static System::String^ avalue = "undefined";
};