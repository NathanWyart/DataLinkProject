#pragma once
#include "pch.h"
#include "CLStaff.h"
#include "CLAddress.h"
#include "CLPerson.h"


namespace CppCLRWinFormsProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Description résumée de InsertStaff
	/// </summary>
	public ref class InsertStaff : public System::Windows::Forms::Form
	{
	public:
		InsertStaff(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//

		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~InsertStaff()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ LastNameSuperior;

	private: System::Windows::Forms::TextBox^ tbLNS;
	private: System::Windows::Forms::Label^ FirstNameSuperior;


	private: System::Windows::Forms::TextBox^ tbFNS;

	private: System::Windows::Forms::Button^ btnOK;
	private: System::Windows::Forms::Button^ btnCancel;
	private: System::Windows::Forms::Label^ DateHired;


	private: System::Windows::Forms::Label^ FirstName;
	private: System::Windows::Forms::Label^ LastName;


	private: System::Windows::Forms::TextBox^ tbFN;
	private: System::Windows::Forms::TextBox^ tbLN;
	private: System::Windows::Forms::Label^ PostalCode;

	private: System::Windows::Forms::Label^ CityName;
	private: System::Windows::Forms::Label^ StreetName;
	private: System::Windows::Forms::Label^ StreetNumber;




	private: System::Windows::Forms::TextBox^ tbCN;
	private: System::Windows::Forms::TextBox^ tbPC;
	private: System::Windows::Forms::TextBox^ tbSN;
	private: System::Windows::Forms::TextBox^ tbSNumber;


	private: System::Windows::Forms::DateTimePicker^ DateHiredPicker;








	protected:

	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->LastNameSuperior = (gcnew System::Windows::Forms::Label());
			this->tbLNS = (gcnew System::Windows::Forms::TextBox());
			this->FirstNameSuperior = (gcnew System::Windows::Forms::Label());
			this->tbFNS = (gcnew System::Windows::Forms::TextBox());
			this->btnOK = (gcnew System::Windows::Forms::Button());
			this->btnCancel = (gcnew System::Windows::Forms::Button());
			this->DateHired = (gcnew System::Windows::Forms::Label());
			this->FirstName = (gcnew System::Windows::Forms::Label());
			this->LastName = (gcnew System::Windows::Forms::Label());
			this->tbFN = (gcnew System::Windows::Forms::TextBox());
			this->tbLN = (gcnew System::Windows::Forms::TextBox());
			this->PostalCode = (gcnew System::Windows::Forms::Label());
			this->CityName = (gcnew System::Windows::Forms::Label());
			this->StreetName = (gcnew System::Windows::Forms::Label());
			this->StreetNumber = (gcnew System::Windows::Forms::Label());
			this->tbCN = (gcnew System::Windows::Forms::TextBox());
			this->tbPC = (gcnew System::Windows::Forms::TextBox());
			this->tbSN = (gcnew System::Windows::Forms::TextBox());
			this->tbSNumber = (gcnew System::Windows::Forms::TextBox());
			this->DateHiredPicker = (gcnew System::Windows::Forms::DateTimePicker());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(502, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(540, 77);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Register Staff";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label1->Click += gcnew System::EventHandler(this, &InsertStaff::label1_Click);
			// 
			// LastNameSuperior
			// 
			this->LastNameSuperior->AutoSize = true;
			this->LastNameSuperior->Location = System::Drawing::Point(12, 301);
			this->LastNameSuperior->Name = L"LastNameSuperior";
			this->LastNameSuperior->Size = System::Drawing::Size(256, 32);
			this->LastNameSuperior->TabIndex = 1;
			this->LastNameSuperior->Text = L"Last name superior";
			this->LastNameSuperior->Click += gcnew System::EventHandler(this, &InsertStaff::label2_Click);
			// 
			// tbLNS
			// 
			this->tbLNS->Location = System::Drawing::Point(318, 301);
			this->tbLNS->Name = L"tbLNS";
			this->tbLNS->Size = System::Drawing::Size(379, 38);
			this->tbLNS->TabIndex = 2;
			// 
			// FirstNameSuperior
			// 
			this->FirstNameSuperior->AutoSize = true;
			this->FirstNameSuperior->Location = System::Drawing::Point(12, 350);
			this->FirstNameSuperior->Name = L"FirstNameSuperior";
			this->FirstNameSuperior->Size = System::Drawing::Size(257, 32);
			this->FirstNameSuperior->TabIndex = 3;
			this->FirstNameSuperior->Text = L"First name superior";
			// 
			// tbFNS
			// 
			this->tbFNS->Location = System::Drawing::Point(318, 350);
			this->tbFNS->Name = L"tbFNS";
			this->tbFNS->Size = System::Drawing::Size(379, 38);
			this->tbFNS->TabIndex = 4;
			// 
			// btnOK
			// 
			this->btnOK->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->btnOK->Location = System::Drawing::Point(587, 468);
			this->btnOK->Name = L"btnOK";
			this->btnOK->Size = System::Drawing::Size(172, 47);
			this->btnOK->TabIndex = 5;
			this->btnOK->Text = L"OK";
			this->btnOK->UseVisualStyleBackColor = false;
			this->btnOK->Click += gcnew System::EventHandler(this, &InsertStaff::btnOK_Click);
			// 
			// btnCancel
			// 
			this->btnCancel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->btnCancel->Location = System::Drawing::Point(794, 468);
			this->btnCancel->Name = L"btnCancel";
			this->btnCancel->Size = System::Drawing::Size(172, 46);
			this->btnCancel->TabIndex = 6;
			this->btnCancel->Text = L"Cancel";
			this->btnCancel->UseVisualStyleBackColor = false;
			this->btnCancel->Click += gcnew System::EventHandler(this, &InsertStaff::button2_Click);
			// 
			// DateHired
			// 
			this->DateHired->AutoSize = true;
			this->DateHired->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->DateHired->Location = System::Drawing::Point(12, 151);
			this->DateHired->Name = L"DateHired";
			this->DateHired->Size = System::Drawing::Size(149, 32);
			this->DateHired->TabIndex = 7;
			this->DateHired->Text = L"Date Hired";
			// 
			// FirstName
			// 
			this->FirstName->AutoSize = true;
			this->FirstName->Location = System::Drawing::Point(12, 251);
			this->FirstName->Name = L"FirstName";
			this->FirstName->Size = System::Drawing::Size(147, 32);
			this->FirstName->TabIndex = 9;
			this->FirstName->Text = L"First name";
			this->FirstName->Click += gcnew System::EventHandler(this, &InsertStaff::label5_Click);
			// 
			// LastName
			// 
			this->LastName->AutoSize = true;
			this->LastName->Location = System::Drawing::Point(15, 203);
			this->LastName->Name = L"LastName";
			this->LastName->Size = System::Drawing::Size(146, 32);
			this->LastName->TabIndex = 10;
			this->LastName->Text = L"Last name";
			// 
			// tbFN
			// 
			this->tbFN->Location = System::Drawing::Point(318, 248);
			this->tbFN->Name = L"tbFN";
			this->tbFN->Size = System::Drawing::Size(379, 38);
			this->tbFN->TabIndex = 11;
			// 
			// tbLN
			// 
			this->tbLN->Location = System::Drawing::Point(318, 200);
			this->tbLN->Name = L"tbLN";
			this->tbLN->Size = System::Drawing::Size(379, 38);
			this->tbLN->TabIndex = 12;
			// 
			// PostalCode
			// 
			this->PostalCode->AutoSize = true;
			this->PostalCode->Location = System::Drawing::Point(788, 200);
			this->PostalCode->Name = L"PostalCode";
			this->PostalCode->Size = System::Drawing::Size(163, 32);
			this->PostalCode->TabIndex = 13;
			this->PostalCode->Text = L"Postal code";
			// 
			// CityName
			// 
			this->CityName->AutoSize = true;
			this->CityName->Location = System::Drawing::Point(788, 151);
			this->CityName->Name = L"CityName";
			this->CityName->Size = System::Drawing::Size(141, 32);
			this->CityName->TabIndex = 14;
			this->CityName->Text = L"City name";
			this->CityName->Click += gcnew System::EventHandler(this, &InsertStaff::label8_Click);
			// 
			// StreetName
			// 
			this->StreetName->AutoSize = true;
			this->StreetName->Location = System::Drawing::Point(788, 248);
			this->StreetName->Name = L"StreetName";
			this->StreetName->Size = System::Drawing::Size(168, 32);
			this->StreetName->TabIndex = 15;
			this->StreetName->Text = L"Street name";
			// 
			// StreetNumber
			// 
			this->StreetNumber->AutoSize = true;
			this->StreetNumber->Location = System::Drawing::Point(788, 301);
			this->StreetNumber->Name = L"StreetNumber";
			this->StreetNumber->Size = System::Drawing::Size(193, 32);
			this->StreetNumber->TabIndex = 16;
			this->StreetNumber->Text = L"Street number";
			// 
			// tbCN
			// 
			this->tbCN->Location = System::Drawing::Point(997, 145);
			this->tbCN->Name = L"tbCN";
			this->tbCN->Size = System::Drawing::Size(379, 38);
			this->tbCN->TabIndex = 17;
			// 
			// tbPC
			// 
			this->tbPC->Location = System::Drawing::Point(997, 197);
			this->tbPC->Name = L"tbPC";
			this->tbPC->Size = System::Drawing::Size(379, 38);
			this->tbPC->TabIndex = 18;
			// 
			// tbSN
			// 
			this->tbSN->Location = System::Drawing::Point(997, 242);
			this->tbSN->Name = L"tbSN";
			this->tbSN->Size = System::Drawing::Size(379, 38);
			this->tbSN->TabIndex = 19;
			// 
			// tbSNumber
			// 
			this->tbSNumber->Location = System::Drawing::Point(997, 295);
			this->tbSNumber->Name = L"tbSNumber";
			this->tbSNumber->Size = System::Drawing::Size(379, 38);
			this->tbSNumber->TabIndex = 20;
			// 
			// DateHiredPicker
			// 
			this->DateHiredPicker->Location = System::Drawing::Point(318, 142);
			this->DateHiredPicker->Name = L"DateHiredPicker";
			this->DateHiredPicker->Size = System::Drawing::Size(379, 38);
			this->DateHiredPicker->TabIndex = 23;
			// 
			// InsertStaff
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(16, 31);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->ClientSize = System::Drawing::Size(1422, 624);
			this->Controls->Add(this->DateHiredPicker);
			this->Controls->Add(this->tbSNumber);
			this->Controls->Add(this->tbSN);
			this->Controls->Add(this->tbPC);
			this->Controls->Add(this->tbCN);
			this->Controls->Add(this->StreetNumber);
			this->Controls->Add(this->StreetName);
			this->Controls->Add(this->CityName);
			this->Controls->Add(this->PostalCode);
			this->Controls->Add(this->tbLN);
			this->Controls->Add(this->tbFN);
			this->Controls->Add(this->LastName);
			this->Controls->Add(this->FirstName);
			this->Controls->Add(this->DateHired);
			this->Controls->Add(this->btnCancel);
			this->Controls->Add(this->btnOK);
			this->Controls->Add(this->tbFNS);
			this->Controls->Add(this->FirstNameSuperior);
			this->Controls->Add(this->tbLNS);
			this->Controls->Add(this->LastNameSuperior);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Margin = System::Windows::Forms::Padding(6);
			this->Name = L"InsertStaff";
			this->Text = L"InsertStaff";
			this->Load += gcnew System::EventHandler(this, &InsertStaff::InsertStaff_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
	}



	private: System::Void btnOK_Click(System::Object^ sender, System::EventArgs^ e) {


		if (DateHiredPicker->Text->Length == 0 || tbFN->Text->Length == 0 || tbLN->Text->Length == 0 || tbFNS->Text->Length == 0 ||
			tbLNS->Text->Length == 0 || tbCN->Text->Length == 0 || tbPC->Text->Length == 0 || tbSN->Text->Length == 0 ||
			tbSNumber->Text->Length == 0) {

			MessageBox::Show("Please enter all the fields", "On or more empty fields",
				MessageBoxButtons::OK);
			return;
		}



		try {

			String^ connString = "Data Source = localhost\\ ; Initial Catalog=datalink; Integrated Security=True";
			SqlConnection sqlConn(connString);
			sqlConn.Open();

			SqlTransaction^ sqlTran = sqlConn.BeginTransaction();

			try {
				// CLasse "Person"
				CLPerson^ person = gcnew CLPerson;
				person->setname(this->tbLN->Text);
				person->setfirstname(this->tbFN->Text);

				// CLasse "Staff"
				CLStaff^ staff = gcnew CLStaff;
				staff->sethire_date(this->DateHiredPicker->Value.ToString("yyyy-MM-dd"));
				staff->setfirst_name_sup(this->tbFNS->Text);
				staff->setlast_name_sup(this->tbLNS->Text);

				// CLasse "Address"
				CLAddress^ address_staff = gcnew CLAddress;
				address_staff->setcity(this->tbCN->Text);

				int postal_value;
				if (Int32::TryParse(this->tbPC->Text, postal_value)) {
					address_staff->setpostal(postal_value);

				};
				address_staff->setstreet(this->tbSN->Text);

				int street_number_value;
				if (Int32::TryParse(this->tbSNumber->Text, street_number_value)) {
					address_staff->setstreet_number(street_number_value);
				};



				staff->setstaff_address(address_staff);



				// Table "City"
				String^ cityQuery =
					"INSERT INTO CITY (POSTAL_CODE, CITY_NAME) VALUES (@POSTAL_CODE, @CITY_NAME); "
					"SELECT SCOPE_IDENTITY();";

				SqlCommand^ commandCity = gcnew SqlCommand(cityQuery, % sqlConn, sqlTran);
				commandCity->Parameters->AddWithValue("@POSTAL_CODE", address_staff->getpostal());
				commandCity->Parameters->AddWithValue("@CITY_NAME", address_staff->getcity());

				int cityId = Convert::ToInt32(commandCity->ExecuteScalar());

				// Table "Address"
				String^ addressQuery =
					"INSERT INTO ADDRESS (STREET_NAME, STREET_NUMBER, ID_CITY) VALUES (@STREET_NAME, @STREET_NUMBER, @ID_CITY); "
					"SELECT SCOPE_IDENTITY();";

				SqlCommand^ commandAddress = gcnew SqlCommand(addressQuery, % sqlConn, sqlTran);
				commandAddress->Parameters->AddWithValue("@STREET_NAME", address_staff->getstreet());
				commandAddress->Parameters->AddWithValue("@STREET_NUMBER", address_staff->getstreet_number());
				commandAddress->Parameters->AddWithValue("@ID_CITY", cityId);

				int addressId = Convert::ToInt32(commandAddress->ExecuteScalar());


				// Table "Person"
				String^ personQuery =
					"INSERT INTO PERSON (FIRST_NAME, LAST_NAME) VALUES (@FIRST_NAME, @LAST_NAME); "
					"SELECT SCOPE_IDENTITY();";

				SqlCommand^ commandPerson = gcnew SqlCommand(personQuery, % sqlConn, sqlTran);
				commandPerson->Parameters->AddWithValue("@FIRST_NAME", person->getfirstname());
				commandPerson->Parameters->AddWithValue("@LAST_NAME", person->getname());

				int personId = Convert::ToInt32(commandPerson->ExecuteScalar());


				// Table "Staff"
				String^ staffQuery =
					"INSERT INTO STAFF (DATE_HIRED, FIRST_NAME_SUP, LAST_NAME_SUP, ID_ADDRESS, ID_PERSON) VALUES (@DATE_HIRED, @FIRST_NAME_SUP, @LAST_NAME_SUP, @ID_ADDRESS, @ID_PERSON);";

				SqlCommand^ commandStaff = gcnew SqlCommand(staffQuery, % sqlConn, sqlTran);
				commandStaff->Parameters->AddWithValue("@DATE_HIRED", staff->gethire_date());
				commandStaff->Parameters->AddWithValue("@FIRST_NAME_SUP", staff->getfirst_name_sup());
				commandStaff->Parameters->AddWithValue("@LAST_NAME_SUP", staff->getlast_name_sup());
				commandStaff->Parameters->AddWithValue("@ID_ADDRESS", addressId);
				commandStaff->Parameters->AddWithValue("@ID_PERSON", personId);


				commandStaff->ExecuteNonQuery();
				sqlTran->Commit();

				MessageBox::Show("Transfert de données réussi !", "Succès", MessageBoxButtons::OK);
			}

			catch (Exception^ ex) {
				sqlTran->Rollback();
				MessageBox::Show("Failed to register new staff: " + ex->Message, "Register failure", MessageBoxButtons::OK);
			}

		}
		catch (Exception^ ex) {
			MessageBox::Show("Failed to connect to the database: " + ex->Message, "Database connection failure", MessageBoxButtons::OK);

		}


	}

	private: System::Void label8_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void InsertStaff_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void linkLabel1_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {

	}
	};
}
