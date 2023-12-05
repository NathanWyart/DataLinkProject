#pragma once

ref class CLPerson abstract {

protected:
	int id;
	System::String^ name;
	System::String^ firstname;
	System::String^ birth_date;

public:
	//***setup les infos***
	virtual void setname(System::String^ name);
	virtual void setfirstname(System::String^ firstname);
	virtual void setbirth_date(System::String^ birth_date);

	//***Récupérer les infos***
	virtual int getid();
	virtual System::String^ getname();
	virtual System::String^ getfirstname();
	virtual System::String^ getbirth_date();

	//virtual System::String^ Create() = 0;   pas sur §§§§§§§§§§§§§§§§§§§§
};