#include "pch.h"
#include "CLStaff.h"


//*************Setup infos staff******************
void CLStaff::setId_Staff(int Id_Staff) {
	this->Id_Staff = Id_Staff;
}

void CLStaff::setstaff_address(CLAddress^ staff_address) {
	this->staff_address = staff_address;
}

void CLStaff::sethire_date(System::String^ hire_date) {
	this->hire_date = hire_date;
}

void CLStaff::setsuperior(System::String^ superior) {
	this->superior = superior;
}


//**********Récupération infos staff************
int CLStaff::getId_Staff() {
	return this->Id_Staff;
}

CLAddress^ CLStaff::getstaff_address(CLAddress^ staff_address) {
	return this->staff_address;
}

System::String^ CLStaff::gethire_date() {
	return hire_date;
}

System::String^ CLStaff::getfirst_name_sup() {
	return first_name_sup;
};

System::String^ CLStaff::getlast_name_sup() {
	return last_name_sup;
};
