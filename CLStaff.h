#pragma once
#include "CLPerson.h"
#include "CLAddress.h"

ref class CLStaff : public CLPerson {

private:
	int Id_Staff;
	CLAddress^ staff_address;
	System::String^ hire_date;
	System::String^ superior;
public:

	//*******Setup les infos Staff**************
	void setId_Staff(int);
	void setstaff_address(CLAddress^ staff_address);
	void sethire_date(System::String^ hire_date);
	void setsuperior(System::String^ superior);


	//*********Récuperer les infos Staff*************
	int getId_Staff();
	CLAddress^ getstaff_address(CLAddress^ staff_address);
	System::String^ gethire_date(System::String^ hire_date);
	System::String^ getsuperior(System::String^ superior);
};