#pragma once
#include "pch.h"
#include "CLStock.h"
#include "CLAddress.h"
#include "CLPerson.h"
#include "CLSociety.h"
#include "CLOrder.h"
#include "CLStaff.h"

namespace CppCLRWinFormsProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Description résumée de InsertOrder
	/// </summary>
	public ref class InsertOrder : public System::Windows::Forms::Form
	{
	public:
		InsertOrder(void)
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
		~InsertOrder()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ PM;


	private: System::Windows::Forms::TextBox^ tbREF;
	private: System::Windows::Forms::Label^ OrderREF;

	private: System::Windows::Forms::TextBox^ tbPM;








	private: System::Windows::Forms::Button^ btnOK;
	private: System::Windows::Forms::Button^ btnCancel;
	private: System::Windows::Forms::Label^ DeliveryDate;

	private: System::Windows::Forms::Label^ ArticleID;
	private: System::Windows::Forms::Label^ ArticleQuantity;





	private: System::Windows::Forms::TextBox^ tbID;
	private: System::Windows::Forms::TextBox^ tbQ;
	private: System::Windows::Forms::Label^ PD;








	private: System::Windows::Forms::Label^ CustomerID;
	private: System::Windows::Forms::Label^ SocietyID;
	private: System::Windows::Forms::TextBox^ tbPD;











	private: System::Windows::Forms::TextBox^ tbSN;
	private: System::Windows::Forms::TextBox^ tbSNumber;
	private: System::Windows::Forms::DateTimePicker^ DateDeliveryPicker;



	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ PB;

	private: System::Windows::Forms::TextBox^ tbPB;


	private: System::Windows::Forms::Label^ EmissionDate;

	private: System::Windows::Forms::DateTimePicker^ dateEmissionPicker;








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
			this->PM = (gcnew System::Windows::Forms::Label());
			this->tbREF = (gcnew System::Windows::Forms::TextBox());
			this->OrderREF = (gcnew System::Windows::Forms::Label());
			this->tbPM = (gcnew System::Windows::Forms::TextBox());
			this->btnOK = (gcnew System::Windows::Forms::Button());
			this->btnCancel = (gcnew System::Windows::Forms::Button());
			this->DeliveryDate = (gcnew System::Windows::Forms::Label());
			this->ArticleID = (gcnew System::Windows::Forms::Label());
			this->ArticleQuantity = (gcnew System::Windows::Forms::Label());
			this->tbID = (gcnew System::Windows::Forms::TextBox());
			this->tbQ = (gcnew System::Windows::Forms::TextBox());
			this->PD = (gcnew System::Windows::Forms::Label());
			this->CustomerID = (gcnew System::Windows::Forms::Label());
			this->SocietyID = (gcnew System::Windows::Forms::Label());
			this->tbPD = (gcnew System::Windows::Forms::TextBox());
			this->tbSN = (gcnew System::Windows::Forms::TextBox());
			this->tbSNumber = (gcnew System::Windows::Forms::TextBox());
			this->DateDeliveryPicker = (gcnew System::Windows::Forms::DateTimePicker());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->PB = (gcnew System::Windows::Forms::Label());
			this->tbPB = (gcnew System::Windows::Forms::TextBox());
			this->EmissionDate = (gcnew System::Windows::Forms::Label());
			this->dateEmissionPicker = (gcnew System::Windows::Forms::DateTimePicker());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 25.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(494, 6);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(540, 72);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Register Order";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label1->Click += gcnew System::EventHandler(this, &InsertOrder::label1_Click);
			// 
			// PM
			// 
			this->PM->AutoSize = true;
			this->PM->Font = (gcnew System::Drawing::Font(L"Century Gothic", 16.2F, System::Drawing::FontStyle::Bold));
			this->PM->Location = System::Drawing::Point(12, 378);
			this->PM->Name = L"PM";
			this->PM->Size = System::Drawing::Size(246, 34);
			this->PM->TabIndex = 1;
			this->PM->Text = L"Payment Method";
			this->PM->Click += gcnew System::EventHandler(this, &InsertOrder::label2_Click);
			// 
			// tbREF
			// 
			this->tbREF->Location = System::Drawing::Point(273, 176);
			this->tbREF->Name = L"tbREF";
			this->tbREF->Size = System::Drawing::Size(379, 38);
			this->tbREF->TabIndex = 2;
			// 
			// OrderREF
			// 
			this->OrderREF->AutoSize = true;
			this->OrderREF->Font = (gcnew System::Drawing::Font(L"Century Gothic", 16.2F, System::Drawing::FontStyle::Bold));
			this->OrderREF->Location = System::Drawing::Point(14, 175);
			this->OrderREF->Name = L"OrderREF";
			this->OrderREF->Size = System::Drawing::Size(145, 34);
			this->OrderREF->TabIndex = 3;
			this->OrderREF->Text = L"Order REF";
			// 
			// tbPM
			// 
			this->tbPM->Location = System::Drawing::Point(273, 374);
			this->tbPM->Name = L"tbPM";
			this->tbPM->Size = System::Drawing::Size(379, 38);
			this->tbPM->TabIndex = 4;
			// 
			// btnOK
			// 
			this->btnOK->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->btnOK->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnOK->FlatAppearance->BorderSize = 0;
			this->btnOK->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnOK->Font = (gcnew System::Drawing::Font(L"Century Gothic", 16.2F, System::Drawing::FontStyle::Bold));
			this->btnOK->Location = System::Drawing::Point(493, 565);
			this->btnOK->Name = L"btnOK";
			this->btnOK->Size = System::Drawing::Size(172, 47);
			this->btnOK->TabIndex = 5;
			this->btnOK->Text = L"Confirm";
			this->btnOK->UseVisualStyleBackColor = false;
			this->btnOK->Click += gcnew System::EventHandler(this, &InsertOrder::btnOK_Click);
			// 
			// btnCancel
			// 
			this->btnCancel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->btnCancel->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnCancel->FlatAppearance->BorderSize = 0;
			this->btnCancel->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnCancel->Font = (gcnew System::Drawing::Font(L"Century Gothic", 16.2F, System::Drawing::FontStyle::Bold));
			this->btnCancel->Location = System::Drawing::Point(773, 566);
			this->btnCancel->Name = L"btnCancel";
			this->btnCancel->Size = System::Drawing::Size(172, 46);
			this->btnCancel->TabIndex = 6;
			this->btnCancel->Text = L"Cancel";
			this->btnCancel->UseVisualStyleBackColor = false;
			this->btnCancel->Click += gcnew System::EventHandler(this, &InsertOrder::button2_Click);
			// 
			// DeliveryDate
			// 
			this->DeliveryDate->AutoSize = true;
			this->DeliveryDate->BackColor = System::Drawing::Color::Transparent;
			this->DeliveryDate->Font = (gcnew System::Drawing::Font(L"Century Gothic", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->DeliveryDate->Location = System::Drawing::Point(764, 211);
			this->DeliveryDate->Name = L"DeliveryDate";
			this->DeliveryDate->Size = System::Drawing::Size(198, 34);
			this->DeliveryDate->TabIndex = 7;
			this->DeliveryDate->Text = L"Delivery Date";
			// 
			// ArticleID
			// 
			this->ArticleID->AutoSize = true;
			this->ArticleID->Font = (gcnew System::Drawing::Font(L"Century Gothic", 16.2F, System::Drawing::FontStyle::Bold));
			this->ArticleID->Location = System::Drawing::Point(14, 231);
			this->ArticleID->Name = L"ArticleID";
			this->ArticleID->Size = System::Drawing::Size(139, 34);
			this->ArticleID->TabIndex = 9;
			this->ArticleID->Text = L"Article ID";
			this->ArticleID->Click += gcnew System::EventHandler(this, &InsertOrder::label5_Click);
			// 
			// ArticleQuantity
			// 
			this->ArticleQuantity->AutoSize = true;
			this->ArticleQuantity->Font = (gcnew System::Drawing::Font(L"Century Gothic", 16.2F, System::Drawing::FontStyle::Bold));
			this->ArticleQuantity->Location = System::Drawing::Point(14, 288);
			this->ArticleQuantity->Name = L"ArticleQuantity";
			this->ArticleQuantity->Size = System::Drawing::Size(130, 34);
			this->ArticleQuantity->TabIndex = 10;
			this->ArticleQuantity->Text = L"Quantity";
			// 
			// tbID
			// 
			this->tbID->Location = System::Drawing::Point(273, 230);
			this->tbID->Name = L"tbID";
			this->tbID->Size = System::Drawing::Size(379, 38);
			this->tbID->TabIndex = 11;
			// 
			// tbQ
			// 
			this->tbQ->Location = System::Drawing::Point(273, 285);
			this->tbQ->Name = L"tbQ";
			this->tbQ->Size = System::Drawing::Size(379, 38);
			this->tbQ->TabIndex = 12;
			// 
			// PD
			// 
			this->PD->AutoSize = true;
			this->PD->Font = (gcnew System::Drawing::Font(L"Century Gothic", 16.2F, System::Drawing::FontStyle::Bold));
			this->PD->Location = System::Drawing::Point(14, 435);
			this->PD->Name = L"PD";
			this->PD->Size = System::Drawing::Size(206, 34);
			this->PD->TabIndex = 14;
			this->PD->Text = L"Payment Date";
			this->PD->Click += gcnew System::EventHandler(this, &InsertOrder::label8_Click);
			// 
			// CustomerID
			// 
			this->CustomerID->AutoSize = true;
			this->CustomerID->Font = (gcnew System::Drawing::Font(L"Century Gothic", 16.2F, System::Drawing::FontStyle::Bold));
			this->CustomerID->Location = System::Drawing::Point(764, 375);
			this->CustomerID->Name = L"CustomerID";
			this->CustomerID->Size = System::Drawing::Size(181, 34);
			this->CustomerID->TabIndex = 15;
			this->CustomerID->Text = L"Customer ID";
			// 
			// SocietyID
			// 
			this->SocietyID->AutoSize = true;
			this->SocietyID->Font = (gcnew System::Drawing::Font(L"Century Gothic", 16.2F, System::Drawing::FontStyle::Bold));
			this->SocietyID->Location = System::Drawing::Point(767, 431);
			this->SocietyID->Name = L"SocietyID";
			this->SocietyID->Size = System::Drawing::Size(151, 34);
			this->SocietyID->TabIndex = 16;
			this->SocietyID->Text = L"Society ID";
			// 
			// tbPD
			// 
			this->tbPD->Location = System::Drawing::Point(273, 432);
			this->tbPD->Name = L"tbPD";
			this->tbPD->Size = System::Drawing::Size(379, 38);
			this->tbPD->TabIndex = 17;
			// 
			// tbSN
			// 
			this->tbSN->Location = System::Drawing::Point(997, 371);
			this->tbSN->Name = L"tbSN";
			this->tbSN->Size = System::Drawing::Size(379, 38);
			this->tbSN->TabIndex = 19;
			// 
			// tbSNumber
			// 
			this->tbSNumber->Location = System::Drawing::Point(997, 428);
			this->tbSNumber->Name = L"tbSNumber";
			this->tbSNumber->Size = System::Drawing::Size(379, 38);
			this->tbSNumber->TabIndex = 20;
			// 
			// DateDeliveryPicker
			// 
			this->DateDeliveryPicker->Location = System::Drawing::Point(997, 211);
			this->DateDeliveryPicker->Name = L"DateDeliveryPicker";
			this->DateDeliveryPicker->Size = System::Drawing::Size(379, 38);
			this->DateDeliveryPicker->TabIndex = 23;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(1042, 101);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(134, 37);
			this->label3->TabIndex = 27;
			this->label3->Text = L"Address";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(143, 101);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(307, 37);
			this->label2->TabIndex = 28;
			this->label2->Text = L"General Information";
			this->label2->Click += gcnew System::EventHandler(this, &InsertOrder::label2_Click_1);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Transparent;
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1422, 82);
			this->panel1->TabIndex = 29;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &InsertOrder::panel1_Paint);
			// 
			// pictureBox1
			// 
			this->pictureBox1->ImageLocation = L"https://cdn.discordapp.com/attachments/960623857885118474/1183389782043267174/log"
				L"o2.png\?ex=6588289e&is=6575b39e&hm=cb50d5a6c20698a4dc71c533fd57f5dd298b78d4adee25"
				L"e3df2911f505ec7dd0&";
			this->pictureBox1->Location = System::Drawing::Point(3, 1);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(127, 72);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &InsertOrder::pictureBox1_Click);
			// 
			// PB
			// 
			this->PB->AutoSize = true;
			this->PB->Font = (gcnew System::Drawing::Font(L"Century Gothic", 16.2F, System::Drawing::FontStyle::Bold));
			this->PB->Location = System::Drawing::Point(14, 492);
			this->PB->Name = L"PB";
			this->PB->Size = System::Drawing::Size(254, 34);
			this->PB->TabIndex = 30;
			this->PB->Text = L"Payment Balance";
			// 
			// tbPB
			// 
			this->tbPB->Location = System::Drawing::Point(273, 490);
			this->tbPB->Name = L"tbPB";
			this->tbPB->Size = System::Drawing::Size(379, 38);
			this->tbPB->TabIndex = 31;
			// 
			// EmissionDate
			// 
			this->EmissionDate->AutoSize = true;
			this->EmissionDate->BackColor = System::Drawing::Color::Transparent;
			this->EmissionDate->Font = (gcnew System::Drawing::Font(L"Century Gothic", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->EmissionDate->Location = System::Drawing::Point(764, 270);
			this->EmissionDate->Name = L"EmissionDate";
			this->EmissionDate->Size = System::Drawing::Size(201, 34);
			this->EmissionDate->TabIndex = 32;
			this->EmissionDate->Text = L"Emission Date";
			// 
			// dateEmissionPicker
			// 
			this->dateEmissionPicker->Location = System::Drawing::Point(997, 267);
			this->dateEmissionPicker->Name = L"dateEmissionPicker";
			this->dateEmissionPicker->Size = System::Drawing::Size(379, 38);
			this->dateEmissionPicker->TabIndex = 33;
			// 
			// InsertOrder
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(16, 31);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::LightSteelBlue;
			this->ClientSize = System::Drawing::Size(1422, 624);
			this->Controls->Add(this->dateEmissionPicker);
			this->Controls->Add(this->EmissionDate);
			this->Controls->Add(this->tbPB);
			this->Controls->Add(this->PB);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->DateDeliveryPicker);
			this->Controls->Add(this->tbSNumber);
			this->Controls->Add(this->tbSN);
			this->Controls->Add(this->tbPD);
			this->Controls->Add(this->SocietyID);
			this->Controls->Add(this->CustomerID);
			this->Controls->Add(this->PD);
			this->Controls->Add(this->tbQ);
			this->Controls->Add(this->tbID);
			this->Controls->Add(this->ArticleQuantity);
			this->Controls->Add(this->ArticleID);
			this->Controls->Add(this->DeliveryDate);
			this->Controls->Add(this->btnCancel);
			this->Controls->Add(this->btnOK);
			this->Controls->Add(this->tbPM);
			this->Controls->Add(this->OrderREF);
			this->Controls->Add(this->tbREF);
			this->Controls->Add(this->PM);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->panel1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Margin = System::Windows::Forms::Padding(6);
			this->Name = L"InsertOrder";
			this->Text = L"InsertOrder";
			this->Load += gcnew System::EventHandler(this, &InsertOrder::InsertOrder_Load);
			this->panel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
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

	private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	}



	private: System::Void btnOK_Click(System::Object^ sender, System::EventArgs^ e) {


		if (tbREF->Text->Length == 0 || tbID->Text->Length == 0 || tbQ->Text->Length == 0 || tbPM->Text->Length == 0 ||
			tbPD->Text->Length == 0 || tbPB->Text->Length == 0 || DateDeliveryPicker->Text->Length == 0 || dateEmissionPicker->Text->Length == 0 ||
			CustomerID->Text->Length == 0 || SocietyID->Text->Length == 0) {

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
				// CLasse "Order"
				CLOrder^ order = gcnew CLOrder;

				int ref;
				if (Int32::TryParse(this->tbREF->Text, ref)) {
					order->setref(ref);
				}

				// CLasse "Article"
				CLStock^ stock = gcnew CLStock;

				//int id;
				//if (Int32::TryParse(this->tbID->Text, id)) {
					//stock->set
				//}

				String^ getIDsQuery =
					"SELECT o.ID_CLIENT, o.ID_SOCIETY, o.ID_BILL, a.ID_ARTICLE "
					"FROM ORDERS o "
					"INNER JOIN ARTICLE a ON o.ID_ARTICLE = a.ID_ARTICLE "
					"INNER JOIN CLIENT c ON o.ID_CLIENT = c.ID_CLIENT "
					"INNER JOIN SOCIETY s ON o.ID_SOCIETY = s.ID_SOCIETY "
					"INNER JOIN BILL b ON o.ID_BILL = b.ID_BILL "
					"WHERE o.ORDER_ID = @ORDER_ID;";

				SqlCommand^ commandGetIDs = gcnew SqlCommand(getIDsQuery, % sqlConn, sqlTran);
				commandGetIDs->Parameters->AddWithValue("@ORDER_ID", tbREF->Text);

				SqlDataReader^ reader = commandGetIDs->ExecuteReader();
				int clientId, societyId, billId, articleId;

				if (reader->Read()) {
					clientId = Convert::ToInt32(reader["ID_CLIENT"]);
					societyId = Convert::ToInt32(reader["ID_SOCIETY"]);
					billId = Convert::ToInt32(reader["ID_BILL"]);
					articleId = Convert::ToInt32(reader["ID_ARTICLE"]);
				}
				else {
					MessageBox::Show("ORDER_ID not found in the ORDERS table or no associated IDs.", "Error", MessageBoxButtons::OK);
					return;
				}

				//order->setfirstname(this->tbID->Text);

				// CLasse "Staff"
				CLStaff^ staff = gcnew CLStaff;
				//staff->sethire_date(this->DateHiredPicker->Value.ToString("yyyy-MM-dd"));
				//staff->setfirst_name_sup(this->tbLNS->Text);
				//staff->setlast_name_sup(this->tbFNS->Text);

				// CLasse "Address"
				CLAddress^ address_staff = gcnew CLAddress;
				//address_staff->setcity(this->tbCN->Text);

				int postal_value;
				if (Int32::TryParse(this->tbSN->Text, postal_value)) {
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
				//commandPerson->Parameters->AddWithValue("@FIRST_NAME", person->getfirstname());
				//commandPerson->Parameters->AddWithValue("@LAST_NAME", person->getfirstname());

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

				MessageBox::Show("Successful data transfer !", "Succès", MessageBoxButtons::OK);
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
	private: System::Void InsertOrder_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void linkLabel1_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {

	}
	private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}

	private: System::Void label2_Click_1(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}
