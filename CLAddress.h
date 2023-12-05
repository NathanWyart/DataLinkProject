#pragma once

ref class CLAddress {
private:
	int id_address;
	System::String^ country;
	System::String^ city;
	System::String^ street;
	System::String^ street_number;
	System::String^ postal;
public:

	//***setup de l'adresse***
	virtual void setIdAddress(int);
	virtual void setcountry(System::String^ country);
	virtual void setcity(System::String^ city);
	virtual void setstreet(System::String^ street);
	virtual void setstreet_number(System::String^ street_number);
	virtual void setpostal(System::String^ postal);

	//***Récup. l'adresse***
	virtual int getIdAddress();
	virtual System::String^ getcountry();
	virtual System::String^ getcity();
	virtual System::String^ getstreet();
	virtual System::String^ getstreet_number();
	virtual System::String^ getpostal();

	//***Undéfinit***
	virtual static System::String^ avalue = "undefined";
};