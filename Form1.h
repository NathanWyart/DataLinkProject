#pragma once
#include "InsertStaff.h"
#include "UpdateStaff.h"

namespace CppCLRWinFormsProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	private :

		DataGridView^ dataGridView;
	public:
		Form1(void)
		{
			InitializeComponent();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Button^ button2;

	private: System::Windows::Forms::Button^ btnclient;
	private: System::Windows::Forms::Button^ btnstats;

	private: System::Windows::Forms::Button^ btnorder;


	private: System::Windows::Forms::Button^ btnstock;

	private: System::Windows::Forms::Button^ btnstaff;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Button^ Management;
	private: System::Windows::Forms::Panel^ pnlBut;
	private: System::Windows::Forms::Panel^ pnlDisplay;

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->pnlBut = (gcnew System::Windows::Forms::Panel());
			this->Management = (gcnew System::Windows::Forms::Button());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->btnstats = (gcnew System::Windows::Forms::Button());
			this->btnorder = (gcnew System::Windows::Forms::Button());
			this->btnstock = (gcnew System::Windows::Forms::Button());
			this->btnstaff = (gcnew System::Windows::Forms::Button());
			this->btnclient = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->pnlDisplay = (gcnew System::Windows::Forms::Panel());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(41)), static_cast<System::Int32>(static_cast<System::Byte>(39)),
				static_cast<System::Int32>(static_cast<System::Byte>(40)));
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel1->Controls->Add(this->pnlBut);
			this->panel1->Controls->Add(this->Management);
			this->panel1->Controls->Add(this->panel4);
			this->panel1->Controls->Add(this->panel3);
			this->panel1->Controls->Add(this->btnstats);
			this->panel1->Controls->Add(this->btnorder);
			this->panel1->Controls->Add(this->btnstock);
			this->panel1->Controls->Add(this->btnstaff);
			this->panel1->Controls->Add(this->btnclient);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(227, 601);
			this->panel1->TabIndex = 0;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Form1::panel1_Paint);
			// 
			// pnlBut
			// 
			this->pnlBut->BackColor = System::Drawing::Color::LightSkyBlue;
			this->pnlBut->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pnlBut->Location = System::Drawing::Point(-1, 120);
			this->pnlBut->Name = L"pnlBut";
			this->pnlBut->Size = System::Drawing::Size(17, 51);
			this->pnlBut->TabIndex = 4;
			// 
			// Management
			// 
			this->Management->FlatAppearance->BorderSize = 0;
			this->Management->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Management->Font = (gcnew System::Drawing::Font(L"Century Gothic", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Management->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->Management->Location = System::Drawing::Point(17, 124);
			this->Management->Name = L"Management";
			this->Management->Size = System::Drawing::Size(203, 44);
			this->Management->TabIndex = 4;
			this->Management->Text = L"Management";
			this->Management->UseVisualStyleBackColor = true;
			this->Management->Click += gcnew System::EventHandler(this, &Form1::Management_Click);
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::White;
			this->panel4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel4->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->panel4->Location = System::Drawing::Point(-1, 108);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(230, 10);
			this->panel4->TabIndex = 5;
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::White;
			this->panel3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel3->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->panel3->Location = System::Drawing::Point(-1, 173);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(227, 10);
			this->panel3->TabIndex = 4;
			// 
			// btnstats
			// 
			this->btnstats->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->btnstats->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnstats->FlatAppearance->BorderSize = 0;
			this->btnstats->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnstats->Font = (gcnew System::Drawing::Font(L"Century Gothic", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnstats->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->btnstats->Location = System::Drawing::Point(-1, 517);
			this->btnstats->Name = L"btnstats";
			this->btnstats->Size = System::Drawing::Size(230, 51);
			this->btnstats->TabIndex = 5;
			this->btnstats->Text = L"Stats";
			this->btnstats->UseVisualStyleBackColor = true;
			this->btnstats->Click += gcnew System::EventHandler(this, &Form1::btnstats_Click);
			// 
			// btnorder
			// 
			this->btnorder->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->btnorder->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnorder->FlatAppearance->BorderSize = 0;
			this->btnorder->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnorder->Font = (gcnew System::Drawing::Font(L"Century Gothic", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnorder->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->btnorder->Location = System::Drawing::Point(2, 434);
			this->btnorder->Name = L"btnorder";
			this->btnorder->Size = System::Drawing::Size(227, 53);
			this->btnorder->TabIndex = 5;
			this->btnorder->Text = L"Order";
			this->btnorder->UseVisualStyleBackColor = true;
			this->btnorder->Click += gcnew System::EventHandler(this, &Form1::btnorder_Click);
			// 
			// btnstock
			// 
			this->btnstock->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->btnstock->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnstock->FlatAppearance->BorderSize = 0;
			this->btnstock->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnstock->Font = (gcnew System::Drawing::Font(L"Century Gothic", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnstock->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->btnstock->Location = System::Drawing::Point(-1, 356);
			this->btnstock->Name = L"btnstock";
			this->btnstock->Size = System::Drawing::Size(230, 54);
			this->btnstock->TabIndex = 5;
			this->btnstock->Text = L"Inventory";
			this->btnstock->UseVisualStyleBackColor = true;
			this->btnstock->Click += gcnew System::EventHandler(this, &Form1::btnstock_Click);
			// 
			// btnstaff
			// 
			this->btnstaff->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->btnstaff->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnstaff->FlatAppearance->BorderSize = 0;
			this->btnstaff->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnstaff->Font = (gcnew System::Drawing::Font(L"Century Gothic", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnstaff->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->btnstaff->Location = System::Drawing::Point(0, 284);
			this->btnstaff->Name = L"btnstaff";
			this->btnstaff->Size = System::Drawing::Size(226, 52);
			this->btnstaff->TabIndex = 5;
			this->btnstaff->Text = L"Staff";
			this->btnstaff->UseVisualStyleBackColor = true;
			this->btnstaff->Click += gcnew System::EventHandler(this, &Form1::btnstaff_Click);
			// 
			// btnclient
			// 
			this->btnclient->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->btnclient->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnclient->FlatAppearance->BorderSize = 0;
			this->btnclient->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnclient->Font = (gcnew System::Drawing::Font(L"Century Gothic", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnclient->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->btnclient->Location = System::Drawing::Point(-1, 207);
			this->btnclient->Name = L"btnclient";
			this->btnclient->Size = System::Drawing::Size(227, 54);
			this->btnclient->TabIndex = 4;
			this->btnclient->Text = L"Customer";
			this->btnclient->UseVisualStyleBackColor = true;
			this->btnclient->Click += gcnew System::EventHandler(this, &Form1::btnclient_Click);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::LightSkyBlue;
			this->panel2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel2->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel2->Location = System::Drawing::Point(227, 0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(979, 41);
			this->panel2->TabIndex = 1;
			this->panel2->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Form1::panel2_Paint);
			// 
			// button2
			// 
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::Red;
			this->button2->Location = System::Drawing::Point(1168, 35);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(39, 48);
			this->button2->TabIndex = 3;
			this->button2->Text = L"X";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// pnlDisplay
			// 
			this->pnlDisplay->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->pnlDisplay->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pnlDisplay->Location = System::Drawing::Point(227, 73);
			this->pnlDisplay->Name = L"pnlDisplay";
			this->pnlDisplay->Size = System::Drawing::Size(979, 528);
			this->pnlDisplay->TabIndex = 4;
			this->pnlDisplay->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Form1::pnlDisplay_Paint);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1206, 601);
			this->Controls->Add(this->pnlDisplay);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->panel1->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
		   private:  Button^ createStyledButton(String^ text, EventHandler^ clickHandler) {
			   Button^ button = gcnew Button();
			   button->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			   button->Cursor = System::Windows::Forms::Cursors::Hand;
			   button->FlatAppearance->BorderSize = 0;
			   button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			   button->Font = (gcnew System::Drawing::Font(L"Century Gothic", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(0)));
			   button->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			   button->Text = text;
			   button->Click += clickHandler;
			   return button;
		   }

	private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void panel2_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	}

	private: System::Void pnlDisplay_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}

	private: System::Void btnclient_Click(System::Object^ sender, System::EventArgs^ e) {
		pnlBut->Top = btnclient->Top;
	}


	private: System::Void btnstaff_Click(System::Object^ sender, System::EventArgs^ e) {
		pnlBut->Top = btnstaff->Top;
		pnlBut->Top = btnstaff->Top;
		pnlDisplay->Visible = true;
		AddStaffButtons();
	}

	private: System::Void btnstock_Click(System::Object^ sender, System::EventArgs^ e) {
		pnlBut->Top = btnstock->Top;
	}
	private: System::Void btnorder_Click(System::Object^ sender, System::EventArgs^ e) {
		pnlBut->Top = btnorder->Top;
	}

	private: System::Void btnstats_Click(System::Object^ sender, System::EventArgs^ e) {
		pnlBut->Top = btnstats->Top;
	}
	private: System::Void richTextBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Management_Click(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void btnAddStaff_Click(System::Object^ sender, System::EventArgs^ e) {
		InsertStaff obj;
		obj.ShowDialog();
	}

	private: System::Void btnModifyStaff_Click(System::Object^ sender, System::EventArgs^ e) {
		UpdateStaff obj;
		obj.ShowDialog();
	}

	
		  
	private: System::Void btnShowStaff_Click(System::Object^ sender, System::EventArgs^ e) {
		try {

			int buttonWidth = 120;  // Largeur souhaitée pour chaque bouton
			int buttonHeight = 40;  // Hauteur souhaitée pour chaque bouton
			int spacing = 30;      // Espace entre les boutons

			int panelWidth = pnlDisplay->Width;
			int totalButtonWidth = 4 * buttonWidth + 3 * spacing;

			String^ connString = "Data Source=localhost\\;Initial Catalog=datalink;Integrated Security=True";
			SqlConnection sqlConn(connString);
			sqlConn.Open();


			// Sélectionnez toutes les colonnes de la table STAFF
			String^ selectStaffQuery =
				"SELECT * FROM STAFF;";

			SqlDataAdapter^ dataAdapter = gcnew SqlDataAdapter(selectStaffQuery, % sqlConn);
			DataSet^ dataSet = gcnew DataSet();

			// Remplissez le DataSet avec les données de la table STAFF
			dataAdapter->Fill(dataSet, "STAFF");

			// Créez et configurez le DataGridView
			dataGridView = gcnew DataGridView();
			dataGridView->Width = pnlDisplay->Width - 20;
			dataGridView->Height = pnlDisplay->Height - 60;
			dataGridView->Left = 10;
			dataGridView->Top = 10;
			dataGridView->DataSource = dataSet;
			dataGridView->DataMember = "STAFF";

			// Créez le bouton "Retour"
			Button^ btnRetour = createStyledButton("Back", gcnew System::EventHandler(this, &Form1::btnRetour_Click));
			btnRetour->Width = buttonWidth;
			btnRetour->Height = buttonHeight;
			btnRetour->Top = pnlDisplay->Height - buttonHeight - 10;

			Button^ btnDeleteStaff = createStyledButton("Delete", gcnew System::EventHandler(this, &Form1::btnDeleteStaff_Click));
			btnDeleteStaff->Width = buttonWidth;
			btnDeleteStaff->Height = buttonHeight;
			btnDeleteStaff->Left = btnRetour->Right + spacing;
			btnDeleteStaff->Top = pnlDisplay->Height - buttonHeight - 10;

			// Ajouter le DataGridView au Panel (pnlDisplay)
			pnlDisplay->Controls->Clear(); // Effacer les anciens contrôles
			pnlDisplay->Controls->Add(dataGridView);
			pnlDisplay->Controls->Add(btnRetour);
			pnlDisplay->Controls->Add(btnDeleteStaff);

			// Fermer la connexion après utilisation
			sqlConn.Close();
		}
		catch (Exception^ ex) {
			MessageBox::Show("Échec de la récupération des données de la table STAFF : " + ex->Message, "Error", MessageBoxButtons::OK);
		}
	}

	private: System::Void btnDeleteStaff_Click(System::Object^ sender, System::EventArgs^ e) {
		

		if (dataGridView->SelectedRows->Count > 0) {


			// Récupérez l'ID de la ligne sélectionnée
			int rowIndex = dataGridView->SelectedRows[0]->Index;
			int personId = Convert::ToInt32(dataGridView->Rows[rowIndex]->Cells["ID_PERSON"]->Value);

			// Supprimez les entrées associées dans les tables PERSON, ADDRESS et CITY
			try {
				String^ connString = "Data Source=localhost\\;Initial Catalog=datalink;Integrated Security=True";
				SqlConnection sqlConn(connString);
				sqlConn.Open();

				// Récupérez l'ID_ADDRESS et l'ID_CITY associés à cette personne
				String^ selectAddressAndCityIdsQuery =
					"SELECT ADDRESS.ID_ADDRESS, ADDRESS.ID_CITY " +
					"FROM STAFF INNER JOIN ADDRESS ON STAFF.ID_ADDRESS = ADDRESS.ID_ADDRESS " +
					"WHERE STAFF.ID_PERSON = @ID_PERSON;";

				SqlCommand^ commandGetIds = gcnew SqlCommand(selectAddressAndCityIdsQuery, % sqlConn);
				commandGetIds->Parameters->AddWithValue("@ID_PERSON", personId);

				SqlDataReader^ reader = commandGetIds->ExecuteReader();
				int addressId, cityId;

				if (reader->Read()) {
					addressId = Convert::ToInt32(reader["ID_ADDRESS"]);
					cityId = Convert::ToInt32(reader["ID_CITY"]);
				}
				else {
					
					MessageBox::Show("ID_PERSON non trouvé dans la table STAFF ou pas d'ID_ADDRESS associé.", "Erreur", MessageBoxButtons::OK);
					return;
				}

				reader->Close();

				// Supprimez d'abord l'entrée dans la table STAFF
				String^ deleteStaffQuery =
					"DELETE FROM STAFF WHERE ID_PERSON = @ID_PERSON;";

				SqlCommand^ commandDeleteStaff = gcnew SqlCommand(deleteStaffQuery, % sqlConn);
				commandDeleteStaff->Parameters->AddWithValue("@ID_PERSON", personId);
				commandDeleteStaff->ExecuteNonQuery();

				// Supprimez l'entrée dans la table ADDRESS liée
				String^ deleteAddressQuery =
					"DELETE FROM ADDRESS WHERE ID_ADDRESS = @ID_ADDRESS;";

				SqlCommand^ commandDeleteAddress = gcnew SqlCommand(deleteAddressQuery, % sqlConn);
				commandDeleteAddress->Parameters->AddWithValue("@ID_ADDRESS", personId);  // Supposant que l'ID_ADDRESS est lié à l'ID_PERSON
				commandDeleteAddress->ExecuteNonQuery();


				// Supprimez l'entrée dans la table CITY liée
				String^ deleteCityQuery =
					"DELETE FROM CITY WHERE ID_CITY = @ID_CITY;";

				SqlCommand^ commandDeleteCity = gcnew SqlCommand(deleteCityQuery, % sqlConn);
				commandDeleteCity->Parameters->AddWithValue("@ID_CITY", cityId);
				commandDeleteCity->ExecuteNonQuery();


				// Supprimez l'entrée dans la table PERSON
				String^ deletePersonQuery =
					"DELETE FROM PERSON WHERE ID_PERSON = @ID_PERSON;";

				SqlCommand^ commandDeletePerson = gcnew SqlCommand(deletePersonQuery, % sqlConn);
				commandDeletePerson->Parameters->AddWithValue("@ID_PERSON", personId);
				commandDeletePerson->ExecuteNonQuery();

				MessageBox::Show("La ligne a été supprimée avec succès.", "Suppression réussie", MessageBoxButtons::OK);
			}
			catch (Exception^ ex) {
				MessageBox::Show("Échec de la suppression : " + ex->Message, "Erreur", MessageBoxButtons::OK);
			}
		}



	}



	private: System::Void btnRetour_Click(System::Object^ sender, System::EventArgs^ e) {

			AddStaffButtons();
	}

	private: System::Void AddStaffButtons() {
		int buttonWidth = 120;  // Largeur souhaitée pour chaque bouton
		int buttonHeight = 40;  // Hauteur souhaitée pour chaque bouton
		int spacing = 10;      // Espace entre les boutons

		int panelWidth = pnlDisplay->Width;
		int totalButtonWidth = 4 * buttonWidth + 3 * spacing;

		// Ajout du DataGridView
		DataGridView^ dataGridView = gcnew DataGridView();
		dataGridView->Width = pnlDisplay->Width - 20; // Largeur du DataGridView
		dataGridView->Height = pnlDisplay->Height - 60; // Hauteur du DataGridView
		dataGridView->Left = 10;
		dataGridView->Top = 10;

		// Calculer la marge nécessaire pour centrer les boutons horizontalement
		int margin = (panelWidth - totalButtonWidth) / 2;

		Button^ btnAddStaff = createStyledButton("Add", gcnew System::EventHandler(this, &Form1::btnAddStaff_Click));
		btnAddStaff->Width = buttonWidth;
		btnAddStaff->Height = buttonHeight;
		btnAddStaff->Left = margin;
		btnAddStaff->Top = pnlDisplay->Height - buttonHeight - 10;

		Button^ btnModifyStaff = createStyledButton("Update", gcnew System::EventHandler(this, &Form1::btnModifyStaff_Click));
		btnModifyStaff->Width = buttonWidth;
		btnModifyStaff->Height = buttonHeight;
		btnModifyStaff->Left = btnAddStaff->Right + spacing;
		btnModifyStaff->Top = pnlDisplay->Height - buttonHeight - 10;

		

		Button^ btnShowStaff = createStyledButton("Display", gcnew System::EventHandler(this, &Form1::btnShowStaff_Click));
		btnShowStaff->Width = buttonWidth;
		btnShowStaff->Height = buttonHeight;
		btnShowStaff->Left = btnModifyStaff->Right + spacing;
		btnShowStaff->Top = pnlDisplay->Height - buttonHeight - 10;

		// Ajouter les boutons au Panel (pnlDisplay)
		pnlDisplay->Controls->Clear();
		pnlDisplay->Controls->Add(btnAddStaff);
		pnlDisplay->Controls->Add(btnModifyStaff);
		pnlDisplay->Controls->Add(btnShowStaff);
		pnlDisplay->Controls->Add(dataGridView);
	}
	};
}
