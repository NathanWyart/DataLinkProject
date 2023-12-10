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
	/// Description résumée de UpdateStaff
	/// </summary>
	public ref class UpdateStaff : public System::Windows::Forms::Form
	{
	public:
		UpdateStaff(void)
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
		~UpdateStaff()
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
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ tbIdStaff;



	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ label4;








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
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->tbIdStaff = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 25.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(470, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(540, 77);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Update Staff";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label1->Click += gcnew System::EventHandler(this, &UpdateStaff::label1_Click);
			// 
			// LastNameSuperior
			// 
			this->LastNameSuperior->AutoSize = true;
			this->LastNameSuperior->Font = (gcnew System::Drawing::Font(L"Century Gothic", 18, System::Drawing::FontStyle::Bold));
			this->LastNameSuperior->Location = System::Drawing::Point(10, 484);
			this->LastNameSuperior->Name = L"LastNameSuperior";
			this->LastNameSuperior->Size = System::Drawing::Size(289, 37);
			this->LastNameSuperior->TabIndex = 1;
			this->LastNameSuperior->Text = L"Last name superior";
			this->LastNameSuperior->Click += gcnew System::EventHandler(this, &UpdateStaff::label2_Click);
			// 
			// tbLNS
			// 
			this->tbLNS->Location = System::Drawing::Point(316, 427);
			this->tbLNS->Name = L"tbLNS";
			this->tbLNS->Size = System::Drawing::Size(379, 38);
			this->tbLNS->TabIndex = 2;
			// 
			// FirstNameSuperior
			// 
			this->FirstNameSuperior->AutoSize = true;
			this->FirstNameSuperior->Font = (gcnew System::Drawing::Font(L"Century Gothic", 18, System::Drawing::FontStyle::Bold));
			this->FirstNameSuperior->Location = System::Drawing::Point(12, 428);
			this->FirstNameSuperior->Name = L"FirstNameSuperior";
			this->FirstNameSuperior->Size = System::Drawing::Size(287, 37);
			this->FirstNameSuperior->TabIndex = 3;
			this->FirstNameSuperior->Text = L"First name superior";
			// 
			// tbFNS
			// 
			this->tbFNS->Location = System::Drawing::Point(316, 483);
			this->tbFNS->Name = L"tbFNS";
			this->tbFNS->Size = System::Drawing::Size(379, 38);
			this->tbFNS->TabIndex = 4;
			// 
			// btnOK
			// 
			this->btnOK->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->btnOK->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnOK->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnOK->Font = (gcnew System::Drawing::Font(L"Century Gothic", 16.2F, System::Drawing::FontStyle::Bold));
			this->btnOK->Location = System::Drawing::Point(585, 547);
			this->btnOK->Name = L"btnOK";
			this->btnOK->Size = System::Drawing::Size(172, 47);
			this->btnOK->TabIndex = 5;
			this->btnOK->Text = L"Confirm";
			this->btnOK->UseVisualStyleBackColor = false;
			this->btnOK->Click += gcnew System::EventHandler(this, &UpdateStaff::btnOK_Click);
			// 
			// btnCancel
			// 
			this->btnCancel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->btnCancel->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnCancel->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnCancel->Font = (gcnew System::Drawing::Font(L"Century Gothic", 16.2F, System::Drawing::FontStyle::Bold));
			this->btnCancel->Location = System::Drawing::Point(789, 547);
			this->btnCancel->Name = L"btnCancel";
			this->btnCancel->Size = System::Drawing::Size(172, 46);
			this->btnCancel->TabIndex = 6;
			this->btnCancel->Text = L"Cancel";
			this->btnCancel->UseVisualStyleBackColor = false;
			this->btnCancel->Click += gcnew System::EventHandler(this, &UpdateStaff::button2_Click);
			// 
			// DateHired
			// 
			this->DateHired->AutoSize = true;
			this->DateHired->BackColor = System::Drawing::Color::Transparent;
			this->DateHired->Font = (gcnew System::Drawing::Font(L"Century Gothic", 18, System::Drawing::FontStyle::Bold));
			this->DateHired->Location = System::Drawing::Point(10, 363);
			this->DateHired->Name = L"DateHired";
			this->DateHired->Size = System::Drawing::Size(170, 37);
			this->DateHired->TabIndex = 7;
			this->DateHired->Text = L"Date Hired";
			// 
			// FirstName
			// 
			this->FirstName->AutoSize = true;
			this->FirstName->Font = (gcnew System::Drawing::Font(L"Century Gothic", 18, System::Drawing::FontStyle::Bold));
			this->FirstName->Location = System::Drawing::Point(12, 247);
			this->FirstName->Name = L"FirstName";
			this->FirstName->Size = System::Drawing::Size(163, 37);
			this->FirstName->TabIndex = 9;
			this->FirstName->Text = L"First name";
			this->FirstName->Click += gcnew System::EventHandler(this, &UpdateStaff::label5_Click);
			// 
			// LastName
			// 
			this->LastName->AutoSize = true;
			this->LastName->Font = (gcnew System::Drawing::Font(L"Century Gothic", 18, System::Drawing::FontStyle::Bold));
			this->LastName->Location = System::Drawing::Point(10, 302);
			this->LastName->Name = L"LastName";
			this->LastName->Size = System::Drawing::Size(165, 37);
			this->LastName->TabIndex = 10;
			this->LastName->Text = L"Last name";
			// 
			// tbFN
			// 
			this->tbFN->Location = System::Drawing::Point(316, 249);
			this->tbFN->Name = L"tbFN";
			this->tbFN->Size = System::Drawing::Size(379, 38);
			this->tbFN->TabIndex = 11;
			// 
			// tbLN
			// 
			this->tbLN->Location = System::Drawing::Point(316, 304);
			this->tbLN->Name = L"tbLN";
			this->tbLN->Size = System::Drawing::Size(379, 38);
			this->tbLN->TabIndex = 12;
			// 
			// PostalCode
			// 
			this->PostalCode->AutoSize = true;
			this->PostalCode->Font = (gcnew System::Drawing::Font(L"Century Gothic", 18, System::Drawing::FontStyle::Bold));
			this->PostalCode->Location = System::Drawing::Point(769, 253);
			this->PostalCode->Name = L"PostalCode";
			this->PostalCode->Size = System::Drawing::Size(187, 37);
			this->PostalCode->TabIndex = 13;
			this->PostalCode->Text = L"Postal code";
			// 
			// CityName
			// 
			this->CityName->AutoSize = true;
			this->CityName->Font = (gcnew System::Drawing::Font(L"Century Gothic", 18, System::Drawing::FontStyle::Bold));
			this->CityName->Location = System::Drawing::Point(769, 195);
			this->CityName->Name = L"CityName";
			this->CityName->Size = System::Drawing::Size(166, 37);
			this->CityName->TabIndex = 14;
			this->CityName->Text = L"City name";
			this->CityName->Click += gcnew System::EventHandler(this, &UpdateStaff::label8_Click);
			// 
			// StreetName
			// 
			this->StreetName->AutoSize = true;
			this->StreetName->Font = (gcnew System::Drawing::Font(L"Century Gothic", 18, System::Drawing::FontStyle::Bold));
			this->StreetName->Location = System::Drawing::Point(769, 310);
			this->StreetName->Name = L"StreetName";
			this->StreetName->Size = System::Drawing::Size(192, 37);
			this->StreetName->TabIndex = 15;
			this->StreetName->Text = L"Street name";
			// 
			// StreetNumber
			// 
			this->StreetNumber->AutoSize = true;
			this->StreetNumber->Font = (gcnew System::Drawing::Font(L"Century Gothic", 18, System::Drawing::FontStyle::Bold));
			this->StreetNumber->Location = System::Drawing::Point(769, 364);
			this->StreetNumber->Name = L"StreetNumber";
			this->StreetNumber->Size = System::Drawing::Size(220, 37);
			this->StreetNumber->TabIndex = 16;
			this->StreetNumber->Text = L"Street number";
			// 
			// tbCN
			// 
			this->tbCN->Location = System::Drawing::Point(995, 193);
			this->tbCN->Name = L"tbCN";
			this->tbCN->Size = System::Drawing::Size(379, 38);
			this->tbCN->TabIndex = 17;
			// 
			// tbPC
			// 
			this->tbPC->Location = System::Drawing::Point(995, 251);
			this->tbPC->Name = L"tbPC";
			this->tbPC->Size = System::Drawing::Size(379, 38);
			this->tbPC->TabIndex = 18;
			// 
			// tbSN
			// 
			this->tbSN->Location = System::Drawing::Point(995, 310);
			this->tbSN->Name = L"tbSN";
			this->tbSN->Size = System::Drawing::Size(379, 38);
			this->tbSN->TabIndex = 19;
			// 
			// tbSNumber
			// 
			this->tbSNumber->Location = System::Drawing::Point(995, 366);
			this->tbSNumber->Name = L"tbSNumber";
			this->tbSNumber->Size = System::Drawing::Size(379, 38);
			this->tbSNumber->TabIndex = 20;
			// 
			// DateHiredPicker
			// 
			this->DateHiredPicker->Location = System::Drawing::Point(316, 362);
			this->DateHiredPicker->Name = L"DateHiredPicker";
			this->DateHiredPicker->Size = System::Drawing::Size(379, 38);
			this->DateHiredPicker->TabIndex = 23;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 18, System::Drawing::FontStyle::Bold));
			this->label2->Location = System::Drawing::Point(10, 193);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(114, 37);
			this->label2->TabIndex = 24;
			this->label2->Text = L"Id Staff";
			this->label2->Click += gcnew System::EventHandler(this, &UpdateStaff::label2_Click_1);
			// 
			// tbIdStaff
			// 
			this->tbIdStaff->Location = System::Drawing::Point(316, 195);
			this->tbIdStaff->Name = L"tbIdStaff";
			this->tbIdStaff->Size = System::Drawing::Size(379, 38);
			this->tbIdStaff->TabIndex = 25;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 18, System::Drawing::FontStyle::Bold));
			this->label3->Location = System::Drawing::Point(988, 122);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(203, 37);
			this->label3->TabIndex = 26;
			this->label3->Text = L"Address Staff";
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Transparent;
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1422, 94);
			this->panel1->TabIndex = 27;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Century Gothic", 18, System::Drawing::FontStyle::Bold));
			this->label4->Location = System::Drawing::Point(198, 122);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(307, 37);
			this->label4->TabIndex = 28;
			this->label4->Text = L"General Information";
			// 
			// UpdateStaff
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(16, 31);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::LightSteelBlue;
			this->ClientSize = System::Drawing::Size(1422, 624);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->tbIdStaff);
			this->Controls->Add(this->label2);
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
			this->Controls->Add(this->panel1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Margin = System::Windows::Forms::Padding(6);
			this->Name = L"UpdateStaff";
			this->Text = L"UpdateStaff";
			this->Load += gcnew System::EventHandler(this, &UpdateStaff::UpdateStaff_Load);
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
				staff->setfirst_name_sup(this->tbLNS->Text);
				staff->setlast_name_sup(this->tbFNS->Text);

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




				// Récupérer l'ID du personnel
				int personId;


				if (Int32::TryParse(this->tbIdStaff->Text, personId)) {

					// Récupérer les ID de CITY et ADDRESS liés à cette personne depuis la table STAFF
					String^ getCityAndAddressIdsQuery =
						"SELECT STAFF.ID_ADDRESS, ADDRESS.ID_CITY FROM STAFF INNER JOIN ADDRESS ON STAFF.ID_ADDRESS = ADDRESS.ID_ADDRESS WHERE STAFF.ID_PERSON = @ID_PERSON;";

					SqlCommand^ commandGetCityAndAddressIds = gcnew SqlCommand(getCityAndAddressIdsQuery, % sqlConn, sqlTran);
					commandGetCityAndAddressIds->Parameters->AddWithValue("@ID_PERSON", personId);

					SqlDataReader^ reader = commandGetCityAndAddressIds->ExecuteReader();
					int addressId, cityId;

					if (reader->Read()) {
						addressId = Convert::ToInt32(reader["ID_ADDRESS"]);
						cityId = Convert::ToInt32(reader["ID_CITY"]);
					}
					else {

						MessageBox::Show("ID_PERSON not found in the STAFF table or no associated ADDRESS_ID.", "Error", MessageBoxButtons::OK);
						return;
					}

					reader->Close();

					// Table "PERSON"
					String^ updatePersonQuery =
						"UPDATE PERSON SET FIRST_NAME = @FIRST_NAME, LAST_NAME = @LAST_NAME WHERE ID_PERSON = @ID_PERSON;";

					SqlCommand^ commandUpdatePerson = gcnew SqlCommand(updatePersonQuery, % sqlConn, sqlTran);
					commandUpdatePerson->Parameters->AddWithValue("@FIRST_NAME", this->tbFN->Text);
					commandUpdatePerson->Parameters->AddWithValue("@LAST_NAME", this->tbLN->Text);
					commandUpdatePerson->Parameters->AddWithValue("@ID_PERSON", personId);
					commandUpdatePerson->ExecuteNonQuery();

					// table "STAFF"
					String^ updateStaffQuery =
						"UPDATE STAFF SET DATE_HIRED = @DATE_HIRED, FIRST_NAME_SUP = @FIRST_NAME_SUP, LAST_NAME_SUP = @LAST_NAME_SUP WHERE ID_PERSON = @ID_PERSON;";

					SqlCommand^ commandUpdateStaff = gcnew SqlCommand(updateStaffQuery, % sqlConn, sqlTran);
					commandUpdateStaff->Parameters->AddWithValue("@DATE_HIRED", this->DateHiredPicker->Value.ToString("yyyy-MM-dd"));
					commandUpdateStaff->Parameters->AddWithValue("@FIRST_NAME_SUP", this->tbLNS->Text);
					commandUpdateStaff->Parameters->AddWithValue("@LAST_NAME_SUP", this->tbFNS->Text);
					commandUpdateStaff->Parameters->AddWithValue("@ID_PERSON", personId);
					commandUpdateStaff->ExecuteNonQuery();



					// Table "ADDRESS"
					String^ updateAddressQuery =
						"UPDATE ADDRESS SET STREET_NAME = @STREET_NAME, STREET_NUMBER = @STREET_NUMBER WHERE ID_ADDRESS = @ID_ADDRESS;";

					SqlCommand^ commandUpdateAddress = gcnew SqlCommand(updateAddressQuery, % sqlConn, sqlTran);
					commandUpdateAddress->Parameters->AddWithValue("@STREET_NAME", this->tbSN->Text);
					commandUpdateAddress->Parameters->AddWithValue("@STREET_NUMBER", Convert::ToInt32(this->tbSNumber->Text));
					commandUpdateAddress->Parameters->AddWithValue("@ID_ADDRESS", addressId);
					commandUpdateAddress->ExecuteNonQuery();

					// Table "CITY"
					String^ updateCityQuery =
						"UPDATE CITY SET POSTAL_CODE = @POSTAL_CODE, CITY_NAME = @CITY_NAME WHERE ID_CITY = @ID_CITY;";


					SqlCommand^ commandUpdateCity = gcnew SqlCommand(updateCityQuery, % sqlConn, sqlTran);
					commandUpdateCity->Parameters->AddWithValue("@POSTAL_CODE", postal_value);
					commandUpdateCity->Parameters->AddWithValue("@CITY_NAME", this->tbCN->Text);
					commandUpdateCity->Parameters->AddWithValue("@ID_CITY", cityId);
					commandUpdateCity->ExecuteNonQuery();

					// Valider la transaction
					sqlTran->Commit();

					MessageBox::Show("Successful data update !", "Success", MessageBoxButtons::OK);
				}
			}
			catch (Exception^ ex) {
				sqlTran->Rollback();
				MessageBox::Show("Failed to update new staff : " + ex->Message, "Update failure", MessageBoxButtons::OK);
			}

		}
		catch (Exception^ ex) {
			MessageBox::Show("Failed to connect to the database : " + ex->Message, "Database connection failure", MessageBoxButtons::OK);

		}


	}

	private: System::Void label8_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void UpdateStaff_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void linkLabel1_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {

	}
	private: System::Void label2_Click_1(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}
