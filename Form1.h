#pragma once
#include "InsertStaff.h"
#include "UpdateStaff.h"
#include "InsertClient.h"
#include "UpdateClient.h"
#include "InsertStock.h"
#include "UpdateStock.h"
#include "InsertOrder.h"
#include "UpdateOrder.h"

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
			this->Text = "DataLink";
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
	private: System::Windows::Forms::Panel^ panel3; 
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Panel^ pnlBut; 
	private: System::Windows::Forms::Panel^ pnlDisplay;  
	
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ btnclient;
	private: System::Windows::Forms::Button^ btnstats;
	private: System::Windows::Forms::Button^ btnorder;
	private: System::Windows::Forms::Button^ btnstock;
	private: System::Windows::Forms::Button^ btnstaff;
	private: System::Windows::Forms::Button^ Management;

	private: System::Windows::Forms::Label^ label2;

	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::PictureBox^ pictureBox5;
	private: System::Windows::Forms::PictureBox^ pictureBox6;
	private: System::Windows::Forms::PictureBox^ pictureBox7;

	private: System::ComponentModel::IContainer^ components;

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
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
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->pnlDisplay = (gcnew System::Windows::Forms::Panel());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panel2->SuspendLayout();
			this->pnlDisplay->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(41)), static_cast<System::Int32>(static_cast<System::Byte>(39)),
				static_cast<System::Int32>(static_cast<System::Byte>(40)));
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel1->Controls->Add(this->pictureBox6);
			this->panel1->Controls->Add(this->pictureBox5);
			this->panel1->Controls->Add(this->pictureBox4);
			this->panel1->Controls->Add(this->pictureBox3);
			this->panel1->Controls->Add(this->pictureBox2);
			this->panel1->Controls->Add(this->pictureBox1);
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
			// pictureBox6
			// 
			this->pictureBox6->ImageLocation = L"https://cdn.discordapp.com/attachments/960623857885118474/1183238573953122354/sta"
				L"ts.png\?ex=65879bcb&is=657526cb&hm=964be2af22c44ff4cc26b3ca0566cf3e64e9bcd8543888"
				L"6d46536456ebee2746&";
			this->pictureBox6->Location = System::Drawing::Point(30, 521);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(80, 44);
			this->pictureBox6->TabIndex = 2;
			this->pictureBox6->TabStop = false;
			// 
			// pictureBox5
			// 
			this->pictureBox5->ImageLocation = L"https://cdn.discordapp.com/attachments/960623857885118474/1183238062516478012/ord"
				L"er.png\?ex=65879b51&is=65752651&hm=603d24667ef5ba38d0bf8c86538ab453ad35e6ca4fbf36"
				L"2cd5498530b7dee0e5&";
			this->pictureBox5->Location = System::Drawing::Point(27, 443);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(80, 44);
			this->pictureBox5->TabIndex = 1;
			this->pictureBox5->TabStop = false;
			// 
			// pictureBox4
			// 
			this->pictureBox4->ImageLocation = L"https://cdn.discordapp.com/attachments/960623857885118474/1183236592119320676/sto"
				L"ck.png\?ex=658799f3&is=657524f3&hm=ca12687de28e69a5b9677026b24c6a8351e1f21f5b93ac"
				L"9f299c07b29505d1ed&";
			this->pictureBox4->Location = System::Drawing::Point(22, 365);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(59, 44);
			this->pictureBox4->TabIndex = 0;
			this->pictureBox4->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->ImageLocation = L"https://cdn.discordapp.com/attachments/960623857885118474/1183233917642350662/sta"
				L"ff.png\?ex=65879775&is=65752275&hm=6c9fd89d2db089a69e8f8c28f3fa7a7b5fee495136e04b"
				L"0f4b49b4f160784e4a&";
			this->pictureBox3->Location = System::Drawing::Point(17, 292);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(57, 50);
			this->pictureBox3->TabIndex = 0;
			this->pictureBox3->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->ImageLocation = L"https://cdn.discordapp.com/attachments/960623857885118474/1183230096463638570/cli"
				L"ent.png\?ex=658793e6&is=65751ee6&hm=cc4bb7dc150e00cef25feef959ff019737b121c04059f"
				L"e778ba9603e0c133a6a&";
			this->pictureBox2->Location = System::Drawing::Point(30, 219);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(61, 50);
			this->pictureBox2->TabIndex = 0;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox1->ImageLocation = L"https://cdn.discordapp.com/attachments/960623857885118474/1183217255769706526/log"
				L"o3.png\?ex=658787f0&is=657512f0&hm=19491145c83ae5e8a6aaffe93e8dd8f89fa4dfaa91bac1"
				L"e1d4fb99dd9bf8fa47&";
			this->pictureBox1->Location = System::Drawing::Point(-9, -3);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(263, 117);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
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
			this->btnstats->Location = System::Drawing::Point(107, 521);
			this->btnstats->Name = L"btnstats";
			this->btnstats->Size = System::Drawing::Size(122, 47);
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
			this->btnorder->Location = System::Drawing::Point(107, 434);
			this->btnorder->Name = L"btnorder";
			this->btnorder->Size = System::Drawing::Size(122, 53);
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
			this->btnstock->Location = System::Drawing::Point(75, 362);
			this->btnstock->Name = L"btnstock";
			this->btnstock->Size = System::Drawing::Size(157, 44);
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
			this->btnstaff->Location = System::Drawing::Point(75, 285);
			this->btnstaff->Name = L"btnstaff";
			this->btnstaff->Size = System::Drawing::Size(154, 50);
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
			this->btnclient->Location = System::Drawing::Point(78, 224);
			this->btnclient->Name = L"btnclient";
			this->btnclient->Size = System::Drawing::Size(144, 42);
			this->btnclient->TabIndex = 4;
			this->btnclient->Text = L"Customer";
			this->btnclient->UseVisualStyleBackColor = true;
			this->btnclient->Click += gcnew System::EventHandler(this, &Form1::btnclient_Click);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::LightSkyBlue;
			this->panel2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel2->Controls->Add(this->button2);
			this->panel2->Controls->Add(this->label2);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel2->Location = System::Drawing::Point(227, 0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(979, 83);
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
			this->button2->Location = System::Drawing::Point(935, 11);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(39, 48);
			this->button2->TabIndex = 3;
			this->button2->Text = L"X";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(144, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(647, 70);
			this->label2->TabIndex = 0;
			this->label2->Text = L"Welcome to DataLink";
			// 
			// pnlDisplay
			// 
			this->pnlDisplay->BackColor = System::Drawing::Color::LightGray;
			this->pnlDisplay->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pnlDisplay->Controls->Add(this->pictureBox7);
			this->pnlDisplay->Location = System::Drawing::Point(227, 73);
			this->pnlDisplay->Name = L"pnlDisplay";
			this->pnlDisplay->Size = System::Drawing::Size(979, 528);
			this->pnlDisplay->TabIndex = 4;
			this->pnlDisplay->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Form1::pnlDisplay_Paint);
			// 
			// pictureBox7
			// 
			this->pictureBox7->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox7->ImageLocation = L"https://cdn.discordapp.com/attachments/960623857885118474/1183417675775479979/gra"
				L"ndlogo.png\?ex=65884298&is=6575cd98&hm=c612f29e8cfa13783750ce067f596345ab06acc6cd"
				L"cbf8cad1743cee7d593e0a&";
			this->pictureBox7->Location = System::Drawing::Point(298, 82);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(364, 396);
			this->pictureBox7->TabIndex = 1;
			this->pictureBox7->TabStop = false;
			this->pictureBox7->Click += gcnew System::EventHandler(this, &Form1::pictureBox7_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1206, 601);
			this->Controls->Add(this->pnlDisplay);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->panel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->pnlDisplay->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
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

	private: System::Void pictureBox7_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void panel5_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
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

	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void pnlDisplay_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}

	private: System::Void btnclient_Click(System::Object^ sender, System::EventArgs^ e) {
		pnlDisplay->Visible = false;
		pnlBut->Top = btnclient->Top;
		pnlDisplay->Visible = true;
		AddClientButtons();
	}


	private: System::Void btnstaff_Click(System::Object^ sender, System::EventArgs^ e) {
		pnlDisplay->Visible = false;
		pnlBut->Top = btnstaff->Top;
		pnlDisplay->Visible = true;
		AddStaffButtons();
	}

	private: System::Void btnstock_Click(System::Object^ sender, System::EventArgs^ e) {
		pnlDisplay->Visible = false;
		pnlBut->Top = btnstock->Top;
		pnlDisplay->Visible = true;
		AddStockButtons();
	}
	private: System::Void btnorder_Click(System::Object^ sender, System::EventArgs^ e) {
		pnlDisplay->Visible = false;
		pnlBut->Top = btnorder->Top;
		pnlDisplay->Visible = true;
		AddOrderButtons();
	}

	private: System::Void btnstats_Click(System::Object^ sender, System::EventArgs^ e) {
		pnlDisplay->Visible = false;
		pnlBut->Top = btnstats->Top;
	}
	private: System::Void richTextBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Management_Click(System::Object^ sender, System::EventArgs^ e) {
	}

	// Gestion Staff
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
			Button^ btnRetour = createStyledButton("BACK", gcnew System::EventHandler(this, &Form1::btnRetour_Click));
			btnRetour->Width = buttonWidth;
			btnRetour->Height = buttonHeight;
			btnRetour->Left = btnRetour->Right + spacing; 
			btnRetour->Top = pnlDisplay->Height - buttonHeight - 5;
			btnRetour->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));

			Button^ btnDeleteStaff = createStyledButton("DELETE", gcnew System::EventHandler(this, &Form1::btnDeleteStaff_Click));
			btnDeleteStaff->Width = buttonWidth;
			btnDeleteStaff->Height = buttonHeight;
			btnDeleteStaff->Left = btnRetour->Right + spacing;
			btnDeleteStaff->Top = pnlDisplay->Height - buttonHeight - 5;
			btnDeleteStaff->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));

			// Ajouter le DataGridView au Panel (pnlDisplay)
			pnlDisplay->Controls->Clear(); // Effacer les anciens contrôles
			pnlDisplay->Controls->Add(dataGridView); 
			pnlDisplay->Controls->Add(btnRetour);
			pnlDisplay->Controls->Add(btnDeleteStaff);

			// Fermer la connexion après utilisation
			sqlConn.Close();
		}
		catch (Exception^ ex) {
			MessageBox::Show("Failed to retrieve data from the STAFF table : " + ex->Message, "Error", MessageBoxButtons::OK);
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
					
					MessageBox::Show("ID_PERSON not found in STAFF table or no associated ID_ADDRESS.", "Erreur", MessageBoxButtons::OK);
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
				commandDeleteAddress->Parameters->AddWithValue("@ID_ADDRESS", personId);
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

				MessageBox::Show("The line was successfully removed.", "Suppression réussie", MessageBoxButtons::OK);
			}
			catch (Exception^ ex) {
				MessageBox::Show("Deletion failed : " + ex->Message, "Erreur", MessageBoxButtons::OK);
			}
		}



	}



	private: System::Void btnRetour_Click(System::Object^ sender, System::EventArgs^ e) {

			AddStaffButtons();
	}

	private: System::Void btnRetour2_Click(System::Object^ sender, System::EventArgs^ e) {

		AddClientButtons();
	}

	private: System::Void btnRetour3_Click(System::Object^ sender, System::EventArgs^ e) {

		AddStockButtons();
	}

	private: System::Void btnRetour4_Click(System::Object^ sender, System::EventArgs^ e) {

		AddOrderButtons();
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

		Button^ btnAddStaff = createStyledButton("ADD", gcnew System::EventHandler(this, &Form1::btnAddStaff_Click));
		btnAddStaff->Width = buttonWidth;
		btnAddStaff->Height = buttonHeight;
		btnAddStaff->Left = margin;
		btnAddStaff->Top = pnlDisplay->Height - buttonHeight - 5;
		btnAddStaff->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(80)), static_cast<System::Int32>(static_cast<System::Byte>(240)),
			static_cast<System::Int32>(static_cast<System::Byte>(0)));

		Button^ btnModifyStaff = createStyledButton("EDIT", gcnew System::EventHandler(this, &Form1::btnModifyStaff_Click));
		btnModifyStaff->Width = buttonWidth;
		btnModifyStaff->Height = buttonHeight;
		btnModifyStaff->Left = btnAddStaff->Right + spacing;
		btnModifyStaff->Top = pnlDisplay->Height - buttonHeight - 5;
		btnModifyStaff->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(170)),
			static_cast<System::Int32>(static_cast<System::Byte>(0)));

		Button^ btnShowStaff = createStyledButton("DISPLAY", gcnew System::EventHandler(this, &Form1::btnShowStaff_Click));
		btnShowStaff->Width = buttonWidth;
		btnShowStaff->Height = buttonHeight;
		btnShowStaff->Left = btnModifyStaff->Right + spacing;
		btnShowStaff->Top = pnlDisplay->Height - buttonHeight - 5;
		btnShowStaff->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(135)), static_cast<System::Int32>(static_cast<System::Byte>(206)),
			static_cast<System::Int32>(static_cast<System::Byte>(250)));

		// Ajouter les boutons au Panel (pnlDisplay)
		pnlDisplay->Controls->Clear();
		pnlDisplay->Controls->Add(btnAddStaff);
		pnlDisplay->Controls->Add(btnModifyStaff);
		pnlDisplay->Controls->Add(btnShowStaff); 
		pnlDisplay->Controls->Add(dataGridView);
	}


	// CLIENT

	private: System::Void btnAddClient_Click(System::Object^ sender, System::EventArgs^ e) {
		InsertClient obj;
		obj.ShowDialog();
	}

	private: System::Void btnModifyClient_Click(System::Object^ sender, System::EventArgs^ e) {
		UpdateClient obj;
		obj.ShowDialog();
	}

	private: System::Void btnShowClient_Click(System::Object^ sender, System::EventArgs^ e) {
		try {

			int buttonWidth = 120;  // Largeur souhaitée pour chaque bouton
			int buttonHeight = 40;  // Hauteur souhaitée pour chaque bouton
			int spacing = 30;      // Espace entre les boutons

			int panelWidth = pnlDisplay->Width;
			int totalButtonWidth = 4 * buttonWidth + 3 * spacing;

			String^ connString = "Data Source=localhost\\;Initial Catalog=datalink;Integrated Security=True";
			SqlConnection sqlConn(connString);
			sqlConn.Open();


			// Sélectionnez toutes les colonnes de la table CLIENT
			String^ selectStaffQuery =
				"SELECT * FROM CLIENT;";

			SqlDataAdapter^ dataAdapter = gcnew SqlDataAdapter(selectStaffQuery, % sqlConn);
			DataSet^ dataSet = gcnew DataSet();

			// Remplissez le DataSet avec les données de la table CLIENT
			dataAdapter->Fill(dataSet, "CLIENT");

			// Créez et configurez le DataGridView
			dataGridView = gcnew DataGridView();
			dataGridView->Width = pnlDisplay->Width - 20;
			dataGridView->Height = pnlDisplay->Height - 60;
			dataGridView->Left = 10;
			dataGridView->Top = 10;
			dataGridView->DataSource = dataSet;
			dataGridView->DataMember = "CLIENT";

			// Créez le bouton "Retour"
			Button^ btnRetour = createStyledButton("BACK", gcnew System::EventHandler(this, &Form1::btnRetour2_Click));
			btnRetour->Width = buttonWidth;
			btnRetour->Height = buttonHeight;
			btnRetour->Left = btnRetour->Right + spacing;
			btnRetour->Top = pnlDisplay->Height - buttonHeight - 5;
			btnRetour->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0))); 

			Button^ btnDeleteClient = createStyledButton("DELETE", gcnew System::EventHandler(this, &Form1::btnDeleteClient_Click));
			btnDeleteClient->Width = buttonWidth;
			btnDeleteClient->Height = buttonHeight;
			btnDeleteClient->Left = btnRetour->Right + spacing;
			btnDeleteClient->Top = pnlDisplay->Height - buttonHeight - 5;
			btnDeleteClient->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));

			// Ajouter le DataGridView au Panel (pnlDisplay)
			pnlDisplay->Controls->Clear(); // Effacer les anciens contrôles
			pnlDisplay->Controls->Add(dataGridView); 
			pnlDisplay->Controls->Add(btnRetour);
			pnlDisplay->Controls->Add(btnDeleteClient);

			// Fermer la connexion après utilisation
			sqlConn.Close();
		}
		catch (Exception^ ex) {
			MessageBox::Show("Failed to retrieve data from the CLIENT table : " + ex->Message, "Error", MessageBoxButtons::OK);
		}
	}


	private: System::Void btnDeleteClient_Click(System::Object^ sender, System::EventArgs^ e) {


		if (dataGridView->SelectedRows->Count > 0) {
			// Récupérez l'ID de la ligne sélectionnée
			int rowIndex = dataGridView->SelectedRows[0]->Index;
			int personId = Convert::ToInt32(dataGridView->Rows[rowIndex]->Cells["ID_PERSON"]->Value);

			try {
				String^ connString = "Data Source=localhost\\;Initial Catalog=datalink;Integrated Security=True";
				SqlConnection sqlConn(connString);
				sqlConn.Open();

				int deliveryAddressId, deliveryCityId, billingAddressId, billingCityId;

				// Récupérez l'ID_DELIVERY et l'ID_BILLING associés à cette personne
				String^ selectClientIdsQuery =
					"SELECT ID_DELIVERY, ID_BILLING FROM CLIENT WHERE ID_PERSON = @ID_PERSON;";

				SqlCommand^ commandGetClientIds = gcnew SqlCommand(selectClientIdsQuery, % sqlConn);
				commandGetClientIds->Parameters->AddWithValue("@ID_PERSON", personId);

				SqlDataReader^ reader = commandGetClientIds->ExecuteReader();
				int clientDeliveryId, clientBillingId;

				if (reader->Read()) {
					clientDeliveryId = Convert::ToInt32(reader["ID_DELIVERY"]);
					clientBillingId = Convert::ToInt32(reader["ID_BILLING"]);
				}
				else {
					// Gérer le cas où l'ID_PERSON n'est pas trouvé dans la table CLIENT
					MessageBox::Show("ID_PERSON non trouvé dans la table CLIENT.", "Erreur", MessageBoxButtons::OK);
					return;
				}

				reader->Close();
				

				// Récupérer les ID_ADDRESS et ID_CITY associés à cette personne pour l'adresse de livraison
				String^ selectDeliveryAddressAndCityIdsQuery =
					"SELECT DELIVERY_ADDRESS.ID_ADDRESS AS DELIVERY_ID_ADDRESS, ADDRESS.ID_CITY AS DELIVERY_ID_CITY " +
					"FROM DELIVERY_ADDRESS " +
					"INNER JOIN ADDRESS ON DELIVERY_ADDRESS.ID_ADDRESS = ADDRESS.ID_ADDRESS " +
					"WHERE DELIVERY_ADDRESS.ID_DELIVERY = @ID_DELIVERY;";

				SqlCommand^ commandGetDeliveryIds = gcnew SqlCommand(selectDeliveryAddressAndCityIdsQuery, % sqlConn);
				commandGetDeliveryIds->Parameters->AddWithValue("@ID_DELIVERY", clientDeliveryId);  // Utilisez l'ID_DELIVERY que vous avez récupéré précédemment

				SqlDataReader^ readerGetDeliveryIds = commandGetDeliveryIds->ExecuteReader();

				if (readerGetDeliveryIds->Read()) {
					deliveryAddressId = Convert::ToInt32(readerGetDeliveryIds["DELIVERY_ID_ADDRESS"]);
					deliveryCityId = Convert::ToInt32(readerGetDeliveryIds["DELIVERY_ID_CITY"]);
				}
				else {
					MessageBox::Show("ID_DELIVERY non trouvé dans la table DELIVERY_ADDRESS ou pas d'ID_ADDRESS associé.", "Erreur", MessageBoxButtons::OK);
					return;
				}

				readerGetDeliveryIds->Close();

				// Récupérer les ID_ADDRESS et ID_CITY associés à cette personne pour l'adresse de facturation
				String^ selectBillingAddressAndCityIdsQuery =
					"SELECT BILLING_ADDRESS.ID_ADDRESS AS BILLING_ID_ADDRESS, ADDRESS.ID_CITY AS BILLING_ID_CITY " +
					"FROM BILLING_ADDRESS " +
					"INNER JOIN ADDRESS ON BILLING_ADDRESS.ID_ADDRESS = ADDRESS.ID_ADDRESS " +
					"WHERE BILLING_ADDRESS.ID_BILLING = @ID_BILLING;";

				SqlCommand^ commandGetBillingIds = gcnew SqlCommand(selectBillingAddressAndCityIdsQuery, % sqlConn);
				commandGetBillingIds->Parameters->AddWithValue("@ID_BILLING", clientBillingId);  // Utilisez l'ID_BILLING que vous avez récupéré précédemment

				SqlDataReader^ readerGetBillingIds = commandGetBillingIds->ExecuteReader();

				if (readerGetBillingIds->Read()) {
					billingAddressId = Convert::ToInt32(readerGetBillingIds["BILLING_ID_ADDRESS"]);
					billingCityId = Convert::ToInt32(readerGetBillingIds["BILLING_ID_CITY"]);
				}
				else {
					MessageBox::Show("ID_BILLING non trouvé dans la table BILLING_ADDRESS ou pas d'ID_ADDRESS associé.", "Erreur", MessageBoxButtons::OK);
					return;
				}

				readerGetBillingIds->Close();

				// Supprimez d'abord l'entrée dans la table CLIENT
				String^ deleteClientQuery =
					"DELETE FROM CLIENT WHERE ID_PERSON = @ID_PERSON;";

				SqlCommand^ commandDeleteClient = gcnew SqlCommand(deleteClientQuery, % sqlConn);
				commandDeleteClient->Parameters->AddWithValue("@ID_PERSON", personId);
				commandDeleteClient->ExecuteNonQuery();



				// Supprimer l'enregistrement dans la table DELIVERY_ADDRESS
				String^ deleteDeliveryQuery =
					"DELETE FROM DELIVERY_ADDRESS WHERE ID_DELIVERY = @ID_DELIVERY;";

				SqlCommand^ commandDeleteDelivery = gcnew SqlCommand(deleteDeliveryQuery, % sqlConn);
				commandDeleteDelivery->Parameters->AddWithValue("@ID_DELIVERY", clientDeliveryId);
				commandDeleteDelivery->ExecuteNonQuery();

				// Supprimer l'enregistrement dans la table ADDRESS lié à l'adresse de livraison
				String^ deleteDeliveryAddressQuery =
					"DELETE FROM ADDRESS WHERE ID_ADDRESS = @DELIVERY_ID_ADDRESS;";

				SqlCommand^ commandDeleteDeliveryAddress = gcnew SqlCommand(deleteDeliveryAddressQuery, % sqlConn);
				commandDeleteDeliveryAddress->Parameters->AddWithValue("@DELIVERY_ID_ADDRESS", deliveryAddressId);
				commandDeleteDeliveryAddress->ExecuteNonQuery();

				// Supprimer l'enregistrement dans la table CITY lié à l'adresse de livraison
				String^ deleteDeliveryCityQuery =
					"DELETE FROM CITY WHERE ID_CITY = @DELIVERY_ID_CITY;";

				SqlCommand^ commandDeleteDeliveryCity = gcnew SqlCommand(deleteDeliveryCityQuery, % sqlConn);
				commandDeleteDeliveryCity->Parameters->AddWithValue("@DELIVERY_ID_CITY", deliveryCityId);
				commandDeleteDeliveryCity->ExecuteNonQuery();

				// Supprimer l'enregistrement dans la table BILLING_ADDRESS
				String^ deleteBillingQuery =
					"DELETE FROM BILLING_ADDRESS WHERE ID_BILLING = @ID_BILLING;";

				SqlCommand^ commandDeleteBilling = gcnew SqlCommand(deleteBillingQuery, % sqlConn);
				commandDeleteBilling->Parameters->AddWithValue("@ID_BILLING", clientBillingId);
				commandDeleteBilling->ExecuteNonQuery();

				// Supprimer l'enregistrement dans la table ADDRESS lié à l'adresse de facturation
				String^ deleteBillingAddressQuery =
					"DELETE FROM ADDRESS WHERE ID_ADDRESS = @BILLING_ID_ADDRESS;";

				SqlCommand^ commandDeleteBillingAddress = gcnew SqlCommand(deleteBillingAddressQuery, % sqlConn);
				commandDeleteBillingAddress->Parameters->AddWithValue("@BILLING_ID_ADDRESS", billingAddressId);
				commandDeleteBillingAddress->ExecuteNonQuery();

				// Supprimer l'enregistrement dans la table CITY lié à l'adresse de facturation
				String^ deleteBillingCityQuery =
					"DELETE FROM CITY WHERE ID_CITY = @BILLING_ID_CITY;";

				SqlCommand^ commandDeleteBillingCity = gcnew SqlCommand(deleteBillingCityQuery, % sqlConn);
				commandDeleteBillingCity->Parameters->AddWithValue("@BILLING_ID_CITY", billingCityId);
				commandDeleteBillingCity->ExecuteNonQuery();
				
				// Ensuite, supprimez l'entrée dans la table PERSON
				String^ deletePersonQuery =
					"DELETE FROM PERSON WHERE ID_PERSON = @ID_PERSON;";

				SqlCommand^ commandDeletePerson = gcnew SqlCommand(deletePersonQuery, % sqlConn);
				commandDeletePerson->Parameters->AddWithValue("@ID_PERSON", personId);
				commandDeletePerson->ExecuteNonQuery();
				
				// Valider la transaction
				sqlConn.Close();

				MessageBox::Show("Successful data deletion!", "Success", MessageBoxButtons::OK);
			}
			catch (Exception^ ex) {
				MessageBox::Show("Error during deletion: " + ex->Message, "Error", MessageBoxButtons::OK);
			}


		}
		else {
			MessageBox::Show("Veuillez sélectionner une ligne à supprimer.", "Avertissement", MessageBoxButtons::OK);
		}

	}


	private: System::Void AddClientButtons() {
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

		Button^ btnAddClient = createStyledButton("ADD", gcnew System::EventHandler(this, &Form1::btnAddClient_Click));
		btnAddClient->Width = buttonWidth;
		btnAddClient->Height = buttonHeight;
		btnAddClient->Left = margin;
		btnAddClient->Top = pnlDisplay->Height - buttonHeight - 5;
		btnAddClient->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(80)), static_cast<System::Int32>(static_cast<System::Byte>(240)),
			static_cast<System::Int32>(static_cast<System::Byte>(0)));

		Button^ btnModifyClient = createStyledButton("EDIT", gcnew System::EventHandler(this, &Form1::btnModifyClient_Click));
		btnModifyClient->Width = buttonWidth;
		btnModifyClient->Height = buttonHeight;
		btnModifyClient->Left = btnAddClient->Right + spacing;
		btnModifyClient->Top = pnlDisplay->Height - buttonHeight - 5;
		btnModifyClient->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(170)),
			static_cast<System::Int32>(static_cast<System::Byte>(0)));



		Button^ btnShowClient = createStyledButton("DISPLAY", gcnew System::EventHandler(this, &Form1::btnShowClient_Click));
		btnShowClient->Width = buttonWidth;
		btnShowClient->Height = buttonHeight;
		btnShowClient->Left = btnModifyClient->Right + spacing;
		btnShowClient->Top = pnlDisplay->Height - buttonHeight - 5;
		btnShowClient->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(135)), static_cast<System::Int32>(static_cast<System::Byte>(206)),
			static_cast<System::Int32>(static_cast<System::Byte>(250)));

		// Ajouter les boutons au Panel (pnlDisplay)
		pnlDisplay->Controls->Clear();
		pnlDisplay->Controls->Add(btnAddClient);
		pnlDisplay->Controls->Add(btnModifyClient);
		pnlDisplay->Controls->Add(btnShowClient);
		pnlDisplay->Controls->Add(dataGridView);
	}

	// STOCK

	private: System::Void btnAddStock_Click(System::Object^ sender, System::EventArgs^ e) {
		InsertStock obj;
		obj.ShowDialog();
	}

	private: System::Void btnModifyStock_Click(System::Object^ sender, System::EventArgs^ e) {
		UpdateStock obj;
		obj.ShowDialog();
	}



	private: System::Void btnShowStock_Click(System::Object^ sender, System::EventArgs^ e) {
		try {

			int buttonWidth = 120;  // Largeur souhaitée pour chaque bouton
			int buttonHeight = 40;  // Hauteur souhaitée pour chaque bouton
			int spacing = 30;      // Espace entre les boutons

			int panelWidth = pnlDisplay->Width;
			int totalButtonWidth = 4 * buttonWidth + 3 * spacing;

			String^ connString = "Data Source=localhost\\;Initial Catalog=datalink;Integrated Security=True";
			SqlConnection sqlConn(connString);
			sqlConn.Open();


			// Sélectionnez toutes les colonnes de la table Stock
			String^ selectStockQuery =
				"SELECT * FROM ARTICLE;";

			SqlDataAdapter^ dataAdapter = gcnew SqlDataAdapter(selectStockQuery, % sqlConn);
			DataSet^ dataSet = gcnew DataSet();

			// Remplissez le DataSet avec les données de la table Stock
			dataAdapter->Fill(dataSet, "ARTICLE");

			// Créez et configurez le DataGridView
			dataGridView = gcnew DataGridView();
			dataGridView->Width = pnlDisplay->Width - 20;
			dataGridView->Height = pnlDisplay->Height - 60;
			dataGridView->Left = 10;
			dataGridView->Top = 10;
			dataGridView->DataSource = dataSet;
			dataGridView->DataMember = "ARTICLE";

			// Créez le bouton "Retour"
			Button^ btnRetour = createStyledButton("BACK", gcnew System::EventHandler(this, &Form1::btnRetour3_Click));
			btnRetour->Width = buttonWidth;
			btnRetour->Height = buttonHeight;
			btnRetour->Left = btnRetour->Right + spacing;
			btnRetour->Top = pnlDisplay->Height - buttonHeight - 5;
			btnRetour->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));

			Button^ btnDeleteStock = createStyledButton("DELETE", gcnew System::EventHandler(this, &Form1::btnDeleteStock_Click));
			btnDeleteStock->Width = buttonWidth;
			btnDeleteStock->Height = buttonHeight;
			btnDeleteStock->Left = btnRetour->Right + spacing;
			btnDeleteStock->Top = pnlDisplay->Height - buttonHeight - 5;
			btnDeleteStock->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));

			// Ajouter le DataGridView au Panel (pnlDisplay)
			pnlDisplay->Controls->Clear(); // Effacer les anciens contrôles
			pnlDisplay->Controls->Add(dataGridView); 
			pnlDisplay->Controls->Add(btnRetour);
			pnlDisplay->Controls->Add(btnDeleteStock);

			// Fermer la connexion après utilisation
			sqlConn.Close();
		}
		catch (Exception^ ex) {
			MessageBox::Show("Failed to retrieve data from the Stock table : " + ex->Message, "Error", MessageBoxButtons::OK);
		}
	}

	private: System::Void btnDeleteStock_Click(System::Object^ sender, System::EventArgs^ e) {


		if (dataGridView->SelectedRows->Count > 0) {


			// Récupérez l'ID de la ligne sélectionnée
			int rowIndex = dataGridView->SelectedRows[0]->Index;

			// Supprimez les entrées associées dans les tables PERSON, ADDRESS et CITY
			try {
				String^ connString = "Data Source=localhost\\;Initial Catalog=datalink;Integrated Security=True";
				SqlConnection sqlConn(connString);
				sqlConn.Open();

					// Récupérer les valeurs de la ligne sélectionnée
				int idArticle = System::Convert::ToInt32(dataGridView->SelectedRows[0]->Cells["ID_ARTICLE"]->Value);
				String^ articleName = dataGridView->SelectedRows[0]->Cells["PRODUCT_NAME"]->Value->ToString();
				int stockQuantity = System::Convert::ToInt32(dataGridView->SelectedRows[0]->Cells["STOCK_QUANTITY"]->Value);
				int priceHT = System::Convert::ToInt32(dataGridView->SelectedRows[0]->Cells["PRICE_HT"]->Value);
				int rateTVA = System::Convert::ToInt32(dataGridView->SelectedRows[0]->Cells["RATE_TVA"]->Value); 
				int reorderThreshold = System::Convert::ToInt32(dataGridView->SelectedRows[0]->Cells["REORDER_THRESHOLD"]->Value); 

				String^ deleteQuery =
					"DELETE FROM ARTICLE "
					"WHERE ID_ARTICLE = @ID_ARTICLE "
					"AND PRODUCT_NAME = @PRODUCT_NAME "
					"AND STOCK_QUANTITY = @STOCK_QUANTITY "
					"AND PRICE_HT = @PRICE_HT "
					"AND RATE_TVA = @RATE_TVA "
					"AND REORDER_THRESHOLD = @REORDER_THRESHOLD;";

				SqlCommand^ commandDelete = gcnew SqlCommand(deleteQuery, % sqlConn);
				commandDelete->Parameters->AddWithValue("@ID_ARTICLE", idArticle); 
				commandDelete->Parameters->AddWithValue("@PRODUCT_NAME", articleName); 
				commandDelete->Parameters->AddWithValue("@STOCK_QUANTITY", stockQuantity); 
				commandDelete->Parameters->AddWithValue("@PRICE_HT", priceHT); 
				commandDelete->Parameters->AddWithValue("@RATE_TVA", rateTVA); 
				commandDelete->Parameters->AddWithValue("@REORDER_THRESHOLD", reorderThreshold); 

				commandDelete->ExecuteNonQuery(); 

				MessageBox::Show("The line was successfully removed !", "Suppression réussie", MessageBoxButtons::OK);
			}
			catch (Exception^ ex) {
				MessageBox::Show("Deletion failed : " + ex->Message, "Erreur", MessageBoxButtons::OK);
			}
		}
	}


	private: System::Void AddStockButtons() {
		int buttonWidth = 120;  // Largeur souhaitée pour chaque bouton
		int buttonHeight = 40;  // Hauteur souhaitée pour chaque bouton
		int spacing = 10;      // Espace entre les boutons

		int panelWidth = pnlDisplay->Width;
		int totalButtonWidth = 4 * buttonWidth + 3 * spacing;

		// Ajout du DataGridView
		DataGridView^ dataGridView = gcnew DataGridView();
		dataGridView->Width = pnlDisplay->Width - 40; // Largeur du DataGridView
		dataGridView->Height = pnlDisplay->Height - 60; // Hauteur du DataGridView
		dataGridView->Left = 10;
		dataGridView->Top = 10;

		// balculer la marge nécessaire pour centrer les boutons horizontalement
		int margin = (panelWidth - totalButtonWidth) / 2;

		Button^ btnAddStock = createStyledButton("ADD", gcnew System::EventHandler(this, &Form1::btnAddStock_Click));
		btnAddStock->Width = buttonWidth;
		btnAddStock->Height = buttonHeight;
		btnAddStock->Left = margin;
		btnAddStock->Top = pnlDisplay->Height - buttonHeight - 5;
		btnAddStock->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(80)), static_cast<System::Int32>(static_cast<System::Byte>(240)),
			static_cast<System::Int32>(static_cast<System::Byte>(0)));

		Button^ btnModifyStock = createStyledButton("EDIT", gcnew System::EventHandler(this, &Form1::btnModifyStock_Click));
		btnModifyStock->Width = buttonWidth;
		btnModifyStock->Height = buttonHeight;
		btnModifyStock->Left = btnAddStock->Right + spacing;
		btnModifyStock->Top = pnlDisplay->Height - buttonHeight - 5;
		btnModifyStock->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(170)),
			static_cast<System::Int32>(static_cast<System::Byte>(0)));

		Button^ btnShowStock = createStyledButton("DISPLAY", gcnew System::EventHandler(this, &Form1::btnShowStock_Click));
		btnShowStock->Width = buttonWidth;
		btnShowStock->Height = buttonHeight;
		btnShowStock->Left = btnModifyStock->Right + spacing;
		btnShowStock->Top = pnlDisplay->Height - buttonHeight - 5;
		btnShowStock->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(135)), static_cast<System::Int32>(static_cast<System::Byte>(206)), 
			static_cast<System::Int32>(static_cast<System::Byte>(250))); 

		// Ajouter les boutons au Panel (pnlDisplay)
		pnlDisplay->Controls->Clear();
		pnlDisplay->Controls->Add(btnAddStock);
		pnlDisplay->Controls->Add(btnModifyStock);
		pnlDisplay->Controls->Add(btnShowStock);
		pnlDisplay->Controls->Add(dataGridView);
	}

		   // ORDER

	private: System::Void btnAddOrder_Click(System::Object^ sender, System::EventArgs^ e) {
		InsertOrder obj;
		obj.ShowDialog();
	}

	private: System::Void btnModifyOrder_Click(System::Object^ sender, System::EventArgs^ e) {
		UpdateOrder obj;
		obj.ShowDialog();
	}

	private: System::Void btnShowOrder_Click(System::Object^ sender, System::EventArgs^ e) {
		try {

			int buttonWidth = 120;  // Largeur souhaitée pour chaque bouton
			int buttonHeight = 40;  // Hauteur souhaitée pour chaque bouton
			int spacing = 30;      // Espace entre les boutons

			int panelWidth = pnlDisplay->Width;
			int totalButtonWidth = 4 * buttonWidth + 3 * spacing;

			String^ connString = "Data Source=localhost\\;Initial Catalog=datalink;Integrated Security=True";
			SqlConnection sqlConn(connString);
			sqlConn.Open();


			// Sélectionnez toutes les colonnes de la table Order
			String^ selectOrderQuery =
				"SELECT * FROM ORDERS;";

			SqlDataAdapter^ dataAdapter = gcnew SqlDataAdapter(selectOrderQuery, % sqlConn);
			DataSet^ dataSet = gcnew DataSet();

			// Remplissez le DataSet avec les données de la table Order
			dataAdapter->Fill(dataSet, "ORDERS");

			// Créez et configurez le DataGridView
			dataGridView = gcnew DataGridView();
			dataGridView->Width = pnlDisplay->Width - 20;
			dataGridView->Height = pnlDisplay->Height - 60;
			dataGridView->Left = 10;
			dataGridView->Top = 10;
			dataGridView->DataSource = dataSet;
			dataGridView->DataMember = "ORDERS";

			// Créez le bouton "Retour"
			Button^ btnRetour = createStyledButton("BACK", gcnew System::EventHandler(this, &Form1::btnRetour4_Click));
			btnRetour->Width = buttonWidth;
			btnRetour->Height = buttonHeight;
			btnRetour->Left = btnRetour->Right + spacing;
			btnRetour->Top = pnlDisplay->Height - buttonHeight - 5;
			btnRetour->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));

			Button^ btnDeleteOrder = createStyledButton("DELETE", gcnew System::EventHandler(this, &Form1::btnDeleteOrder_Click));
			btnDeleteOrder->Width = buttonWidth;
			btnDeleteOrder->Height = buttonHeight;
			btnDeleteOrder->Left = btnRetour->Right + spacing;
			btnDeleteOrder->Top = pnlDisplay->Height - buttonHeight - 5;
			btnDeleteOrder->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));

			// Ajouter le DataGridView au Panel (pnlDisplay)
			pnlDisplay->Controls->Clear(); // Effacer les anciens contrôles
			pnlDisplay->Controls->Add(dataGridView);
			pnlDisplay->Controls->Add(btnRetour);
			pnlDisplay->Controls->Add(btnDeleteOrder);

			// Fermer la connexion après utilisation
			sqlConn.Close();
		}
		catch (Exception^ ex) {
			MessageBox::Show("Failed to retrieve data from the Order table : " + ex->Message, "Error", MessageBoxButtons::OK);
		}
	}

	private: System::Void btnDeleteOrder_Click(System::Object^ sender, System::EventArgs^ e) {


		if (dataGridView->SelectedRows->Count > 0) {


			// Récupérez l'ID de la ligne sélectionnée
			int rowIndex = dataGridView->SelectedRows[0]->Index;

			// Supprimez les entrées associées dans les tables PERSON, ADDRESS et CITY
			try {
				String^ connString = "Data Source=localhost\\;Initial Catalog=datalink;Integrated Security=True";
				SqlConnection sqlConn(connString);
				sqlConn.Open();

				// Récupérer les valeurs de la ligne sélectionnée
				int idArticle = System::Convert::ToInt32(dataGridView->SelectedRows[0]->Cells["ID_ARTICLE"]->Value);
				String^ articleName = dataGridView->SelectedRows[0]->Cells["PRODUCT_NAME"]->Value->ToString();
				int OrderQuantity = System::Convert::ToInt32(dataGridView->SelectedRows[0]->Cells["STOCK_QUANTITY"]->Value);
				int priceHT = System::Convert::ToInt32(dataGridView->SelectedRows[0]->Cells["PRICE_HT"]->Value);
				int rateTVA = System::Convert::ToInt32(dataGridView->SelectedRows[0]->Cells["RATE_TVA"]->Value);
				int reorderThreshold = System::Convert::ToInt32(dataGridView->SelectedRows[0]->Cells["REORDER_THRESHOLD"]->Value);

				String^ deleteQuery =
					"DELETE FROM ARTICLE "
					"WHERE ID_ARTICLE = @ID_ARTICLE "
					"AND PRODUCT_NAME = @PRODUCT_NAME "
					"AND STOCK_QUANTITY = @STOCK_QUANTITY "
					"AND PRICE_HT = @PRICE_HT "
					"AND RATE_TVA = @RATE_TVA "
					"AND REORDER_THRESHOLD = @REORDER_THRESHOLD;";

				SqlCommand^ commandDelete = gcnew SqlCommand(deleteQuery, % sqlConn);
				commandDelete->Parameters->AddWithValue("@ID_ARTICLE", idArticle);
				commandDelete->Parameters->AddWithValue("@PRODUCT_NAME", articleName);
				commandDelete->Parameters->AddWithValue("@STOCK_QUANTITY", OrderQuantity);
				commandDelete->Parameters->AddWithValue("@PRICE_HT", priceHT);
				commandDelete->Parameters->AddWithValue("@RATE_TVA", rateTVA);
				commandDelete->Parameters->AddWithValue("@REORDER_THRESHOLD", reorderThreshold);

				commandDelete->ExecuteNonQuery();

				MessageBox::Show("The line was successfully removed !", "Suppression réussie", MessageBoxButtons::OK);
			}
			catch (Exception^ ex) {
				MessageBox::Show("Deletion failed : " + ex->Message, "Erreur", MessageBoxButtons::OK);
			}
		}
	}


	private: System::Void AddOrderButtons() {
		int buttonWidth = 120;  // Largeur souhaitée pour chaque bouton
		int buttonHeight = 40;  // Hauteur souhaitée pour chaque bouton
		int spacing = 10;      // Espace entre les boutons

		int panelWidth = pnlDisplay->Width;
		int totalButtonWidth = 4 * buttonWidth + 3 * spacing;

		// Ajout du DataGridView
		DataGridView^ dataGridView = gcnew DataGridView();
		dataGridView->Width = pnlDisplay->Width - 40; // Largeur du DataGridView
		dataGridView->Height = pnlDisplay->Height - 60; // Hauteur du DataGridView
		dataGridView->Left = 10;
		dataGridView->Top = 10;

		// balculer la marge nécessaire pour centrer les boutons horizontalement
		int margin = (panelWidth - totalButtonWidth) / 2;

		Button^ btnAddOrder = createStyledButton("ADD", gcnew System::EventHandler(this, &Form1::btnAddOrder_Click));
		btnAddOrder->Width = buttonWidth;
		btnAddOrder->Height = buttonHeight;
		btnAddOrder->Left = margin;
		btnAddOrder->Top = pnlDisplay->Height - buttonHeight - 5;
		btnAddOrder->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(80)), static_cast<System::Int32>(static_cast<System::Byte>(240)),
			static_cast<System::Int32>(static_cast<System::Byte>(0)));

		Button^ btnModifyOrder = createStyledButton("EDIT", gcnew System::EventHandler(this, &Form1::btnModifyOrder_Click));
		btnModifyOrder->Width = buttonWidth;
		btnModifyOrder->Height = buttonHeight;
		btnModifyOrder->Left = btnAddOrder->Right + spacing;
		btnModifyOrder->Top = pnlDisplay->Height - buttonHeight - 5;
		btnModifyOrder->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(170)),
			static_cast<System::Int32>(static_cast<System::Byte>(0)));

		Button^ btnShowOrder = createStyledButton("DISPLAY", gcnew System::EventHandler(this, &Form1::btnShowOrder_Click));
		btnShowOrder->Width = buttonWidth;
		btnShowOrder->Height = buttonHeight;
		btnShowOrder->Left = btnModifyOrder->Right + spacing;
		btnShowOrder->Top = pnlDisplay->Height - buttonHeight - 5;
		btnShowOrder->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(135)), static_cast<System::Int32>(static_cast<System::Byte>(206)),
			static_cast<System::Int32>(static_cast<System::Byte>(250)));

		// Ajouter les boutons au Panel (pnlDisplay)
		pnlDisplay->Controls->Clear();
		pnlDisplay->Controls->Add(btnAddOrder);
		pnlDisplay->Controls->Add(btnModifyOrder);
		pnlDisplay->Controls->Add(btnShowOrder);
		pnlDisplay->Controls->Add(dataGridView);
	}
};
}
