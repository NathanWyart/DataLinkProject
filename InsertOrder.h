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
	private: System::Windows::Forms::TextBox^ tbRef;



	private: System::Windows::Forms::Label^ a;
	private: System::Windows::Forms::TextBox^ tbMP;











	private: System::Windows::Forms::Button^ btnOK;
	private: System::Windows::Forms::Button^ btnCancel;
	private: System::Windows::Forms::Label^ DeliveryDate;











	private: System::Windows::Forms::Label^ PD;








	private: System::Windows::Forms::Label^ CustomerID;
	private: System::Windows::Forms::Label^ SocietyID;
	private: System::Windows::Forms::TextBox^ tbIdClient;
	private: System::Windows::Forms::TextBox^ tbIdSociety;
	private: System::Windows::Forms::DateTimePicker^ dtpDelivery;


















	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ PB;
	private: System::Windows::Forms::TextBox^ tbBP;




	private: System::Windows::Forms::Label^ EmissionDate;
	private: System::Windows::Forms::DateTimePicker^ dtpSend;


	private: System::Windows::Forms::DateTimePicker^ dtpPaiementDate;
private: System::Windows::Forms::Label^ label4;
private: System::Windows::Forms::Panel^ panel2;









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
			this->tbRef = (gcnew System::Windows::Forms::TextBox());
			this->a = (gcnew System::Windows::Forms::Label());
			this->tbMP = (gcnew System::Windows::Forms::TextBox());
			this->btnOK = (gcnew System::Windows::Forms::Button());
			this->btnCancel = (gcnew System::Windows::Forms::Button());
			this->DeliveryDate = (gcnew System::Windows::Forms::Label());
			this->PD = (gcnew System::Windows::Forms::Label());
			this->CustomerID = (gcnew System::Windows::Forms::Label());
			this->SocietyID = (gcnew System::Windows::Forms::Label());
			this->tbIdClient = (gcnew System::Windows::Forms::TextBox());
			this->tbIdSociety = (gcnew System::Windows::Forms::TextBox());
			this->dtpDelivery = (gcnew System::Windows::Forms::DateTimePicker());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->PB = (gcnew System::Windows::Forms::Label());
			this->tbBP = (gcnew System::Windows::Forms::TextBox());
			this->EmissionDate = (gcnew System::Windows::Forms::Label());
			this->dtpSend = (gcnew System::Windows::Forms::DateTimePicker());
			this->dtpPaiementDate = (gcnew System::Windows::Forms::DateTimePicker());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 25.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(445, 6);
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
			this->PM->Location = System::Drawing::Point(722, 175);
			this->PM->Name = L"PM";
			this->PM->Size = System::Drawing::Size(246, 34);
			this->PM->TabIndex = 1;
			this->PM->Text = L"Payment Method";
			this->PM->Click += gcnew System::EventHandler(this, &InsertOrder::label2_Click);
			// 
			// tbRef
			// 
			this->tbRef->Location = System::Drawing::Point(273, 176);
			this->tbRef->Name = L"tbRef";
			this->tbRef->Size = System::Drawing::Size(379, 38);
			this->tbRef->TabIndex = 2;
			// 
			// a
			// 
			this->a->AutoSize = true;
			this->a->Font = (gcnew System::Drawing::Font(L"Century Gothic", 16.2F, System::Drawing::FontStyle::Bold));
			this->a->Location = System::Drawing::Point(14, 175);
			this->a->Name = L"a";
			this->a->Size = System::Drawing::Size(145, 34);
			this->a->TabIndex = 3;
			this->a->Text = L"Order REF";
			// 
			// tbMP
			// 
			this->tbMP->Location = System::Drawing::Point(981, 172);
			this->tbMP->Name = L"tbMP";
			this->tbMP->Size = System::Drawing::Size(410, 38);
			this->tbMP->TabIndex = 4;
			// 
			// btnOK
			// 
			this->btnOK->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->btnOK->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnOK->FlatAppearance->BorderSize = 0;
			this->btnOK->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnOK->Font = (gcnew System::Drawing::Font(L"Century Gothic", 16.2F, System::Drawing::FontStyle::Bold));
			this->btnOK->Location = System::Drawing::Point(497, 565);
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
			this->btnCancel->Location = System::Drawing::Point(750, 566);
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
			this->DeliveryDate->Location = System::Drawing::Point(25, 472);
			this->DeliveryDate->Name = L"DeliveryDate";
			this->DeliveryDate->Size = System::Drawing::Size(198, 34);
			this->DeliveryDate->TabIndex = 7;
			this->DeliveryDate->Text = L"Delivery Date";
			// 
			// PD
			// 
			this->PD->AutoSize = true;
			this->PD->Font = (gcnew System::Drawing::Font(L"Century Gothic", 16.2F, System::Drawing::FontStyle::Bold));
			this->PD->Location = System::Drawing::Point(722, 236);
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
			this->CustomerID->Location = System::Drawing::Point(14, 236);
			this->CustomerID->Name = L"CustomerID";
			this->CustomerID->Size = System::Drawing::Size(181, 34);
			this->CustomerID->TabIndex = 15;
			this->CustomerID->Text = L"Customer ID";
			// 
			// SocietyID
			// 
			this->SocietyID->AutoSize = true;
			this->SocietyID->Font = (gcnew System::Drawing::Font(L"Century Gothic", 16.2F, System::Drawing::FontStyle::Bold));
			this->SocietyID->Location = System::Drawing::Point(14, 297);
			this->SocietyID->Name = L"SocietyID";
			this->SocietyID->Size = System::Drawing::Size(151, 34);
			this->SocietyID->TabIndex = 16;
			this->SocietyID->Text = L"Society ID";
			// 
			// tbIdClient
			// 
			this->tbIdClient->Location = System::Drawing::Point(273, 236);
			this->tbIdClient->Name = L"tbIdClient";
			this->tbIdClient->Size = System::Drawing::Size(379, 38);
			this->tbIdClient->TabIndex = 19;
			// 
			// tbIdSociety
			// 
			this->tbIdSociety->Location = System::Drawing::Point(273, 293);
			this->tbIdSociety->Name = L"tbIdSociety";
			this->tbIdSociety->Size = System::Drawing::Size(379, 38);
			this->tbIdSociety->TabIndex = 20;
			// 
			// dtpDelivery
			// 
			this->dtpDelivery->Location = System::Drawing::Point(238, 471);
			this->dtpDelivery->Name = L"dtpDelivery";
			this->dtpDelivery->Size = System::Drawing::Size(413, 38);
			this->dtpDelivery->TabIndex = 23;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(643, 404);
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
			this->PB->Location = System::Drawing::Point(722, 296);
			this->PB->Name = L"PB";
			this->PB->Size = System::Drawing::Size(254, 34);
			this->PB->TabIndex = 30;
			this->PB->Text = L"Payment Balance";
			// 
			// tbBP
			// 
			this->tbBP->Location = System::Drawing::Point(981, 294);
			this->tbBP->Name = L"tbBP";
			this->tbBP->Size = System::Drawing::Size(410, 38);
			this->tbBP->TabIndex = 31;
			// 
			// EmissionDate
			// 
			this->EmissionDate->AutoSize = true;
			this->EmissionDate->BackColor = System::Drawing::Color::Transparent;
			this->EmissionDate->Font = (gcnew System::Drawing::Font(L"Century Gothic", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->EmissionDate->Location = System::Drawing::Point(744, 472);
			this->EmissionDate->Name = L"EmissionDate";
			this->EmissionDate->Size = System::Drawing::Size(201, 34);
			this->EmissionDate->TabIndex = 32;
			this->EmissionDate->Text = L"Emission Date";
			// 
			// dtpSend
			// 
			this->dtpSend->Location = System::Drawing::Point(963, 471);
			this->dtpSend->Name = L"dtpSend";
			this->dtpSend->Size = System::Drawing::Size(413, 38);
			this->dtpSend->TabIndex = 33;
			// 
			// dtpPaiementDate
			// 
			this->dtpPaiementDate->Location = System::Drawing::Point(981, 233);
			this->dtpPaiementDate->Name = L"dtpPaiementDate";
			this->dtpPaiementDate->Size = System::Drawing::Size(410, 38);
			this->dtpPaiementDate->TabIndex = 34;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Century Gothic", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(832, 101);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(317, 37);
			this->label4->TabIndex = 35;
			this->label4->Text = L"Payment Information";
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::Black;
			this->panel2->Location = System::Drawing::Point(-66, 370);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(1636, 10);
			this->panel2->TabIndex = 36;
			// 
			// InsertOrder
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(16, 31);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::LightSteelBlue;
			this->ClientSize = System::Drawing::Size(1422, 624);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->dtpPaiementDate);
			this->Controls->Add(this->dtpSend);
			this->Controls->Add(this->EmissionDate);
			this->Controls->Add(this->tbBP);
			this->Controls->Add(this->PB);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->dtpDelivery);
			this->Controls->Add(this->tbIdSociety);
			this->Controls->Add(this->tbIdClient);
			this->Controls->Add(this->SocietyID);
			this->Controls->Add(this->CustomerID);
			this->Controls->Add(this->PD);
			this->Controls->Add(this->DeliveryDate);
			this->Controls->Add(this->btnCancel);
			this->Controls->Add(this->btnOK);
			this->Controls->Add(this->tbMP);
			this->Controls->Add(this->a);
			this->Controls->Add(this->tbRef);
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
		if (tbRef->Text->Length == 0 || tbIdClient->Text->Length == 0 || tbBP->Text->Length == 0 || tbMP->Text->Length == 0 ||
			dtpDelivery->Text->Length == 0 || dtpSend->Text->Length == 0 || dtpPaiementDate->Text->Length == 0 || tbIdSociety->Text->Length == 0) {

			MessageBox::Show("Please enter all the fields", "One or more empty fields", MessageBoxButtons::OK);
			return;
		}

		try {
			String^ connString = "Data Source = localhost\\ ; Initial Catalog=datalink; Integrated Security=True";
			SqlConnection sqlConn(connString);
			sqlConn.Open();

			SqlTransaction^ sqlTran = sqlConn.BeginTransaction();

			int clientId;
			if (Int32::TryParse(this->tbIdClient->Text, clientId)) {
				int societyId;
				if (Int32::TryParse(this->tbIdSociety->Text, societyId)) {
					// Utilisez des paramètres pour éviter les attaques par injection SQL
					String^ orderQuery =
						"INSERT INTO ORDERS (REF_ORDER, DATE_DELIVERY, DATE_EMISSION, ID_CLIENT, ID_SOCIETY) "
						"VALUES (@REF_ORDER, @DATE_DELIVERY, @DATE_EMISSION, @ID_CLIENT, @ID_SOCIETY);";

					SqlCommand^ commandOrder = gcnew SqlCommand(orderQuery, % sqlConn, sqlTran);
					commandOrder->Parameters->AddWithValue("@REF_ORDER", tbRef->Text);
					commandOrder->Parameters->AddWithValue("@DATE_DELIVERY", dtpDelivery->Value.ToString("yyyy-MM-dd"));
					commandOrder->Parameters->AddWithValue("@DATE_EMISSION", dtpSend->Value.ToString("yyyy-MM-dd"));
					commandOrder->Parameters->AddWithValue("@ID_CLIENT", clientId);
					commandOrder->Parameters->AddWithValue("@ID_SOCIETY", societyId);


					commandOrder->ExecuteNonQuery();

					// Insérer dans la table PAYMENT
					String^ paymentQuery =
						"INSERT INTO PAYMENT (PAYMENT_METHOD, DATE_PAYMENT, BALANCE_PAYMENT, REF_ORDER) "
						"VALUES (@PAYMENT_METHOD, @DATE_PAYMENT, @BALANCE_PAYMENT, @REF_ORDER);";

					SqlCommand^ commandPayment = gcnew SqlCommand(paymentQuery, % sqlConn, sqlTran);
					commandPayment->Parameters->AddWithValue("@PAYMENT_METHOD", tbMP->Text); 
					commandPayment->Parameters->AddWithValue("@DATE_PAYMENT", dtpPaiementDate->Value.ToString("yyyy-MM-dd"));
					commandPayment->Parameters->AddWithValue("@BALANCE_PAYMENT", Convert::ToInt32(tbBP->Text));
					commandPayment->Parameters->AddWithValue("@REF_ORDER", tbRef->Text);

					commandPayment->ExecuteNonQuery();
					sqlTran->Commit();

					MessageBox::Show("Transfert de données réussi !", "Succès", MessageBoxButtons::OK);
				}
				else {
					MessageBox::Show("Invalid Society ID format.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				}
			}
			else {
				MessageBox::Show("Invalid Client ID format.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}

		}
		catch (Exception^ ex) {


			MessageBox::Show("Failed to register new order: " + ex->Message, "Register failure", MessageBoxButtons::OK);
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
