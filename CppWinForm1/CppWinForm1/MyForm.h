#pragma once
#include <windows.h>

namespace CppWinForm1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO::Ports;



	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			findPorts();
			TestResult = gcnew array<int>(6);
			serialBuffer = gcnew array<String^>{"", "", "","",""};
			ResetTestResult();
			UpdateTestResult();

#if 0
			this->backgroundWorker1->ProgressChanged += gcnew ProgressChangedEventHandler(this, &MyForm::backgroundWorker1_ProgressChanged);
			this->backgroundWorker1->DoWork += gcnew DoWorkEventHandler(this, &MyForm::backgroundWorker1_DoWork);
#endif

			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::IO::Ports::SerialPort^  serialPort1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::ComboBox^  comboBox2;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;


	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::ProgressBar^  progressBar1;



	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::RichTextBox^  richTextBox1;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::Timer^  timer1;

	private: System::Windows::Forms::GroupBox^  groupBox3;
	private: System::Windows::Forms::GroupBox^  groupBox4;
	private: System::Windows::Forms::Button^  button5;


	private: System::ComponentModel::IContainer^  components;
	
	
	private: System::Windows::Forms::Button^  button3;
	public:
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Button^  button4;

	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Button^  button6;


	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label10;



	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::Button^  button11;


	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label12;


	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::Label^  label16;


	public: String^ indata;
	public: int state;
	public:	String^ success = "RPSUCC";
	public:	String^ RSSI = "RSSI";
	public:	String^ oldata = "RSSI";
	public: int k=0;
	public: String^ mediumdata = "";
	public: int readSerialFlag = 0;
	public: array<String^>^ serialBuffer;
	public:		long buffnum = 0;
	public:		long readnum = 0;

	private: System::Windows::Forms::Label^  label19;
	private: System::Windows::Forms::Label^  label20;

	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Label^  label5;

	private: System::Windows::Forms::Label^  label18;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::Label^  label6;
	private: System::Drawing::Printing::PrintDocument^  printDocument1;

	private: System::Windows::Forms::Label^  label21;
	private: System::Windows::Forms::Label^  label22;
	private: System::Windows::Forms::Label^  label23;
	private: System::Windows::Forms::Label^  label24;
	private: System::Windows::Forms::Label^  label25;
private: System::Windows::Forms::Label^  label26;
private: System::Windows::Forms::Label^  label27;
private: System::Windows::Forms::Label^  label28;
private: System::Windows::Forms::Label^  label29;


	public:	array<int>^ TestResult;



#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->serialPort1 = (gcnew System::IO::Ports::SerialPort(this->components));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->progressBar1 = (gcnew System::Windows::Forms::ProgressBar());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->printDocument1 = (gcnew System::Drawing::Printing::PrintDocument());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->label29 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->groupBox4->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// comboBox1
			// 
			this->comboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(295, 26);
			this->comboBox1->Margin = System::Windows::Forms::Padding(2);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(92, 20);
			this->comboBox1->TabIndex = 0;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox1_SelectedIndexChanged);
			// 
			// serialPort1
			// 
			this->serialPort1->Handshake = System::IO::Ports::Handshake::RequestToSend;
			this->serialPort1->ReadTimeout = 500;
			this->serialPort1->ReceivedBytesThreshold = 5;
			this->serialPort1->RtsEnable = true;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(232, 35);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(53, 12);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Com Port";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// comboBox2
			// 
			this->comboBox2->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"9600", L"38400", L"115200" });
			this->comboBox2->Location = System::Drawing::Point(295, 69);
			this->comboBox2->Margin = System::Windows::Forms::Padding(2);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(92, 20);
			this->comboBox2->TabIndex = 2;
			this->comboBox2->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox2_SelectedIndexChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(232, 77);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(59, 12);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Baud Rate";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(22, 102);
			this->button1->Margin = System::Windows::Forms::Padding(2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(191, 62);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Init Port";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(228, 100);
			this->button2->Margin = System::Windows::Forms::Padding(2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(159, 67);
			this->button2->TabIndex = 5;
			this->button2->Text = L"Close Port";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->ErrorImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.ErrorImage")));
			this->pictureBox1->ImageLocation = L"C:\\Users\\Jeff\\Documents\\Visual Studio 2015\\Projects\\CppWinForm1\\Media\\logo";
			this->pictureBox1->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.InitialImage")));
			this->pictureBox1->Location = System::Drawing::Point(11, 26);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(2);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(184, 47);
			this->pictureBox1->TabIndex = 8;
			this->pictureBox1->TabStop = false;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(20, 34);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(71, 12);
			this->label3->TabIndex = 9;
			this->label3->Text = L"Port Status";
			this->label3->Click += gcnew System::EventHandler(this, &MyForm::label3_Click);
			// 
			// progressBar1
			// 
			this->progressBar1->Location = System::Drawing::Point(22, 59);
			this->progressBar1->Margin = System::Windows::Forms::Padding(2);
			this->progressBar1->Name = L"progressBar1";
			this->progressBar1->Size = System::Drawing::Size(191, 30);
			this->progressBar1->TabIndex = 10;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"SimSun", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label4->Location = System::Drawing::Point(200, 53);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(319, 20);
			this->label4->TabIndex = 14;
			this->label4->Text = L"Final Product Test Program V0.1";
			// 
			// richTextBox1
			// 
			this->richTextBox1->EnableAutoDragDrop = true;
			this->richTextBox1->Location = System::Drawing::Point(22, 221);
			this->richTextBox1->Margin = System::Windows::Forms::Padding(2);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(365, 212);
			this->richTextBox1->TabIndex = 15;
			this->richTextBox1->Text = L"";
			this->richTextBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::richTextBox1_TextChanged);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->richTextBox1);
			this->groupBox1->Controls->Add(this->button3);
			this->groupBox1->Controls->Add(this->progressBar1);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->Controls->Add(this->button2);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->comboBox2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->comboBox1);
			this->groupBox1->Location = System::Drawing::Point(40, 87);
			this->groupBox1->Margin = System::Windows::Forms::Padding(2);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(2);
			this->groupBox1->Size = System::Drawing::Size(408, 456);
			this->groupBox1->TabIndex = 16;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Com Port Setting";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(228, 174);
			this->button3->Margin = System::Windows::Forms::Padding(2);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(110, 30);
			this->button3->TabIndex = 11;
			this->button3->Text = L"Send";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(22, 183);
			this->textBox2->Margin = System::Windows::Forms::Padding(2);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(191, 21);
			this->textBox2->TabIndex = 7;
			this->textBox2->Text = L"Enter Here";
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Interval = 50;
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm::timer1_Tick);
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->label19);
			this->groupBox3->Controls->Add(this->label15);
			this->groupBox3->Controls->Add(this->label7);
			this->groupBox3->Location = System::Drawing::Point(498, 261);
			this->groupBox3->Margin = System::Windows::Forms::Padding(2);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Padding = System::Windows::Forms::Padding(2);
			this->groupBox3->Size = System::Drawing::Size(335, 128);
			this->groupBox3->TabIndex = 18;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"蜂鸣器测试";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font(L"SimSun", 50, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label19->ForeColor = System::Drawing::Color::Red;
			this->label19->Location = System::Drawing::Point(166, 47);
			this->label19->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(165, 67);
			this->label19->TabIndex = 36;
			this->label19->Text = L"Fail";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->ForeColor = System::Drawing::Color::Black;
			this->label15->Location = System::Drawing::Point(18, 51);
			this->label15->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(122, 39);
			this->label15->TabIndex = 34;
			this->label15->Text = L"蜂鸣器";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"SimSun", 50, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label7->ForeColor = System::Drawing::Color::Lime;
			this->label7->Location = System::Drawing::Point(166, 36);
			this->label7->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(165, 67);
			this->label7->TabIndex = 23;
			this->label7->Text = L"Pass";
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->label20);
			this->groupBox4->Controls->Add(this->label16);
			this->groupBox4->Controls->Add(this->label8);
			this->groupBox4->Location = System::Drawing::Point(837, 261);
			this->groupBox4->Margin = System::Windows::Forms::Padding(2);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Padding = System::Windows::Forms::Padding(2);
			this->groupBox4->Size = System::Drawing::Size(403, 128);
			this->groupBox4->TabIndex = 19;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"遥控器配对";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Font = (gcnew System::Drawing::Font(L"SimSun", 50, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label20->ForeColor = System::Drawing::Color::Red;
			this->label20->Location = System::Drawing::Point(221, 47);
			this->label20->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(165, 67);
			this->label20->TabIndex = 37;
			this->label20->Text = L"Fail";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->ForeColor = System::Drawing::Color::Black;
			this->label16->Location = System::Drawing::Point(11, 51);
			this->label16->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(192, 39);
			this->label16->TabIndex = 35;
			this->label16->Text = L"遥控器配对";
			this->label16->Click += gcnew System::EventHandler(this, &MyForm::label16_Click);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"SimSun", 50, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label8->ForeColor = System::Drawing::Color::Lime;
			this->label8->Location = System::Drawing::Point(225, 36);
			this->label8->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(165, 67);
			this->label8->TabIndex = 24;
			this->label8->Text = L"Pass";
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(684, 434);
			this->button5->Margin = System::Windows::Forms::Padding(2);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(159, 67);
			this->button5->TabIndex = 16;
			this->button5->Text = L"(&2)下一步";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(512, 434);
			this->button4->Margin = System::Windows::Forms::Padding(2);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(159, 67);
			this->button4->TabIndex = 21;
			this->button4->Text = L"(&1)开始测试";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click_1);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(1059, 434);
			this->button6->Margin = System::Windows::Forms::Padding(2);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(159, 67);
			this->button6->TabIndex = 22;
			this->button6->Text = L"(&5)终止测试";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(568, 73);
			this->label9->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(29, 12);
			this->label9->TabIndex = 16;
			this->label9->Text = L"RSSI";
			this->label9->Click += gcnew System::EventHandler(this, &MyForm::label9_Click);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(674, 73);
			this->label10->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(17, 12);
			this->label10->TabIndex = 23;
			this->label10->Text = L"dB";
			this->label10->Click += gcnew System::EventHandler(this, &MyForm::label10_Click);
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(736, 73);
			this->label11->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(23, 12);
			this->label11->TabIndex = 24;
			this->label11->Text = L"DID";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(1088, 73);
			this->label12->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(83, 12);
			this->label12->TabIndex = 25;
			this->label12->Text = L"Serial Number";
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(958, 450);
			this->button8->Margin = System::Windows::Forms::Padding(2);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(70, 34);
			this->button8->TabIndex = 28;
			this->button8->Text = L"(&4)不合格";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// button11
			// 
			this->button11->Location = System::Drawing::Point(881, 450);
			this->button11->Margin = System::Windows::Forms::Padding(2);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(70, 34);
			this->button11->TabIndex = 27;
			this->button11->Text = L"(&3)合格";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::button11_Click);
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->ForeColor = System::Drawing::Color::Black;
			this->label13->Location = System::Drawing::Point(18, 43);
			this->label13->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(122, 39);
			this->label13->TabIndex = 31;
			this->label13->Text = L"第一组";
			this->label13->Click += gcnew System::EventHandler(this, &MyForm::label13_Click);
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->ForeColor = System::Drawing::Color::Black;
			this->label14->Location = System::Drawing::Point(403, 43);
			this->label14->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(122, 39);
			this->label14->TabIndex = 32;
			this->label14->Text = L"第二组";
			this->label14->Click += gcnew System::EventHandler(this, &MyForm::label14_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"SimSun", 50, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label5->ForeColor = System::Drawing::Color::Lime;
			this->label5->Location = System::Drawing::Point(564, 28);
			this->label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(165, 67);
			this->label5->TabIndex = 33;
			this->label5->Text = L"Pass";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"SimSun", 50, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label18->ForeColor = System::Drawing::Color::Red;
			this->label18->Location = System::Drawing::Point(560, 29);
			this->label18->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(165, 67);
			this->label18->TabIndex = 35;
			this->label18->Text = L"Fail";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->label17);
			this->groupBox2->Controls->Add(this->label6);
			this->groupBox2->Controls->Add(this->label18);
			this->groupBox2->Controls->Add(this->label5);
			this->groupBox2->Controls->Add(this->label14);
			this->groupBox2->Controls->Add(this->label13);
			this->groupBox2->Location = System::Drawing::Point(498, 117);
			this->groupBox2->Margin = System::Windows::Forms::Padding(2);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Padding = System::Windows::Forms::Padding(2);
			this->groupBox2->Size = System::Drawing::Size(742, 124);
			this->groupBox2->TabIndex = 17;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"灯条测试";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"SimSun", 50, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label17->ForeColor = System::Drawing::Color::Lime;
			this->label17->Location = System::Drawing::Point(174, 28);
			this->label17->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(165, 67);
			this->label17->TabIndex = 37;
			this->label17->Text = L"Pass";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"SimSun", 50, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label6->ForeColor = System::Drawing::Color::Red;
			this->label6->Location = System::Drawing::Point(180, 39);
			this->label6->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(165, 67);
			this->label6->TabIndex = 36;
			this->label6->Text = L"Fail";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->ForeColor = System::Drawing::Color::Red;
			this->label21->Location = System::Drawing::Point(624, 73);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(47, 12);
			this->label21->TabIndex = 30;
			this->label21->Text = L"label21";
			this->label21->Click += gcnew System::EventHandler(this, &MyForm::label21_Click);
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->ForeColor = System::Drawing::Color::Red;
			this->label22->Location = System::Drawing::Point(1176, 73);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(47, 12);
			this->label22->TabIndex = 31;
			this->label22->Text = L"label22";
			this->label22->Click += gcnew System::EventHandler(this, &MyForm::label22_Click);
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->ForeColor = System::Drawing::Color::Red;
			this->label23->Location = System::Drawing::Point(764, 73);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(47, 12);
			this->label23->TabIndex = 32;
			this->label23->Text = L"label23";
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->ForeColor = System::Drawing::Color::Red;
			this->label24->Location = System::Drawing::Point(1007, 73);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(47, 12);
			this->label24->TabIndex = 34;
			this->label24->Text = L"label24";
			this->label24->Click += gcnew System::EventHandler(this, &MyForm::label24_Click);
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Location = System::Drawing::Point(877, 73);
			this->label25->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(125, 12);
			this->label25->TabIndex = 33;
			this->label25->Text = L"Helmet Battery Level";
			this->label25->Click += gcnew System::EventHandler(this, &MyForm::label25_Click);
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Location = System::Drawing::Point(877, 103);
			this->label26->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(125, 12);
			this->label26->TabIndex = 35;
			this->label26->Text = L"Remote Battery Level";
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->ForeColor = System::Drawing::Color::Red;
			this->label27->Location = System::Drawing::Point(1007, 103);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(47, 12);
			this->label27->TabIndex = 36;
			this->label27->Text = L"label27";
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->Location = System::Drawing::Point(736, 103);
			this->label28->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(23, 12);
			this->label28->TabIndex = 37;
			this->label28->Text = L"RID";
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->ForeColor = System::Drawing::Color::Red;
			this->label29->Location = System::Drawing::Point(765, 103);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(47, 12);
			this->label29->TabIndex = 38;
			this->label29->Text = L"label29";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1298, 570);
			this->Controls->Add(this->label29);
			this->Controls->Add(this->label28);
			this->Controls->Add(this->label27);
			this->Controls->Add(this->label26);
			this->Controls->Add(this->label24);
			this->Controls->Add(this->label25);
			this->Controls->Add(this->label23);
			this->Controls->Add(this->label22);
			this->Controls->Add(this->label21);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->groupBox4);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->pictureBox1);
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::Form1_KeyPress);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: void findPorts(void)
	{
		// get port names
		array<Object^>^ objectArray = SerialPort::GetPortNames();
		// add string array to combobox
		this->comboBox1->Items->AddRange(objectArray);

	}
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	}

	private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void label3_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
	}

 private:
void Form1_KeyPress(Object^ sender, KeyPressEventArgs^ e)
				 {
					 if ((e->KeyChar >= '0') && (e->KeyChar <= '9'))
					 {
						 MessageBox::Show("Form.KeyPress: '" +
							 e->KeyChar.ToString() + "' pressed.");

						 switch (e->KeyChar)
						 {
						 case '1':
						 case '4':
						 case '7':
							 this->label1->Text = "lol";
							 e->Handled = true;
							 break;
						 }
					 }
			}

private:
	void DataReceviedHandler(Object^ sender,SerialDataReceivedEventArgs^ e)
	{
		SerialPort^ sp = (SerialPort^)sender;
		int lot = buffnum % 5;
		mediumdata = sp->ReadExisting();
		if (mediumdata->Length > 1)
		{
			if (mediumdata->Substring(mediumdata->Length - 1, 1) == "*")
			{
				if (k == 1)
				{
					serialBuffer[lot] = serialBuffer[lot]+mediumdata;
					buffnum = buffnum + 1;
					k = 0;
				}
				else
				{
					serialBuffer[lot] =  mediumdata;
					buffnum = buffnum + 1;
				}
				
			}
			else
			{
				if (k == 1)
				{
					serialBuffer[lot] = serialBuffer[lot] + mediumdata;
					k = 1;
				}
				else
				{
					serialBuffer[lot] = mediumdata;
					k = 1;
				}
			}
		}
	}

private:
		void UpdateTestResult()
		{
			switch (TestResult[1])
			{
			case 0:
				this->label17->Visible = false;
				this->label6->Visible = false;
				break;
			case 1:
				this->label17->Visible = false;
				this->label6->Visible = true;
				break;
			case 2:
				this->label6->Visible = false;
				this->label17->Visible = true;
				break;
			default:
				break;
			}

			switch (TestResult[2])
			{
			case 0:
				this->label5->Visible = false;
				this->label18->Visible = false;
				break;
			case 1:
				this->label18->Visible = true;
				this->label5->Visible = false;
				break;
			case 2:
				this->label5->Visible = true;
				this->label18->Visible = false;
				break;
			default:
				break;
			}

			switch (TestResult[3])
			{
			case 0:
				this->label7->Visible = false;
				this->label19->Visible = false;
				break;
			case 1:
				this->label19->Visible =true;
				this->label7->Visible = false;
				break;
			case 2:
				this->label7->Visible = true;
				this->label19->Visible = false;
				break;
			default:
				break;
			}

			switch (TestResult[4])
			{
			case 0:
				this->label8->Visible = false;
				this->label20->Visible = false;
				break;
			case 1:
				this->label20->Visible = true;
				this->label8->Visible = false;
				break;
			case 2:
				this->label8->Visible = true;
				this->label20->Visible = false;
				break;
			default:
				break;
			}

		 
		}

	private:
		void ResetTestResult()
		{
			int i = 0;
			while (i < 5)
			{
				TestResult[i] = 0;
				i = i + 1;
			}
		}

	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		this->textBox2->Text = String::Empty;
		if (this->comboBox1->Text == String::Empty || this->comboBox2->Text == String::Empty)
			this->richTextBox1->AppendText("Please Select Port Settings");
		else {
			try {
				// make sure port isn't open	
				if (!this->serialPort1->IsOpen) {
					this->serialPort1->PortName = this->comboBox1->Text;
					this->serialPort1->Parity = Parity::None;
					this->serialPort1->StopBits = StopBits::One;
					this->serialPort1->DataBits = 8;
					this->serialPort1->Handshake = Handshake::None;
					this->serialPort1->RtsEnable = true;
					this->serialPort1->BaudRate = Int32::Parse(this->comboBox2->Text);
					this->serialPort1->DataReceived += gcnew System::IO::Ports::SerialDataReceivedEventHandler(this,&MyForm::DataReceviedHandler);
					//open serial port
					this->serialPort1->Open();
   					this->progressBar1->Value = 100;
				}
				else
					this->richTextBox1->AppendText("Port isn't openned");
			}
			catch (UnauthorizedAccessException^) {
				this->richTextBox1->AppendText( "UnauthorizedAccess");
			}
		}
	}




			 

	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		//close serialPort
		this->serialPort1->Close();
		// update progress bar
		this->progressBar1->Value = 0;
		// Enable read button
		this->button1->Enabled = true;
		// Enable the init button
		this->button1->Enabled = true;
		// ovalShape
		//this->ovalShape1->FillColor = Color::Red;
	}

	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
		// add sender name
		String^ name = this->serialPort1->PortName;
		// grab text and store in send buffer
		String^ message = this->textBox2->Text;
		// write to serial
		if (this->serialPort1->IsOpen)
			//this->_serialPort->WriteLine(String::Format("<{0}>: {1}",name,message));
			this->serialPort1->WriteLine(message);
		else
			this->richTextBox1->AppendText( "Port Not Opened");
	}

	private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
		// check if port is ready for reading
		

		
	}

	private: System::Void comboBox2_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
	}

	
	private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
		
		while (readnum<buffnum)
		{
			int lot1 = readnum % 5;
			indata = serialBuffer[lot1];

			this->richTextBox1->AppendText(indata);
			this->richTextBox1->AppendText("\n");

			int j = 0;
			while (j < indata->Length)
			{
				if (indata->Substring(j, 1) == "R" && j + 5 < indata->Length)
				{
					if (indata->Substring(j + 1, 1) == "P")
					{
						if (indata->Substring(j + 2, 1) == "S")
						{
							if (indata->Substring(j + 3, 1) == "U")
							{
								if (indata->Substring(j + 4, 1) == "C")
								{
									if (indata->Substring(j + 5, 1) == "C")
									{
										TestResult[4] = 2;
										UpdateTestResult();
										this->richTextBox1->ScrollToCaret();
									}
								}
							}
						}
					}
				}

				if (indata->Substring(j, 1) == "R" && j + 7 < indata->Length)
				{
					if (indata->Substring(j + 1, 1) == "S")
					{
						if (indata->Substring(j + 2, 1) == "S")
						{
							if (indata->Substring(j + 3, 1) == "I")
							{
								this->label21->Text = indata->Substring(j + 4, 4);
								this->richTextBox1->ScrollToCaret();
							}
						}
					}
				}

				if (indata->Substring(j, 1) == "I" && j + 17 < indata->Length)
				{
					if (indata->Substring(j + 1, 1) == "D")
					{
						indata->ToUpper();
						this->label23->Text = indata->Substring(j + 2, 16)->ToUpper();
						this->label22->Text = "KS" + indata->Substring(j + 2, 16)->ToUpper();
						this->richTextBox1->ScrollToCaret();
					}
				}

				if (indata->Substring(j, 1) == "X" && j + 17 < indata->Length)
				{
					if (indata->Substring(j + 1, 1) == "D")
					{
						this->label29->Text = indata->Substring(j + 2, 16)->ToUpper();
						this->richTextBox1->ScrollToCaret();
					}
				}

				if (indata->Substring(j, 1) == "B" && j + 6 < indata->Length)
				{
					if (indata->Substring(j + 1, 1) == "L")
					{
						if (indata->Substring(j + 2, 1) == "-")
						{
							if (indata->Substring(j + 3, 1) == "R")
							{
								this->label27->Text = indata->Substring(j + 5, 2) + "%";
								this->richTextBox1->ScrollToCaret();
							}
						}

					}
				}

				if (indata->Substring(j, 1) == "B" && j + 4 < indata->Length)
				{
					if (indata->Substring(j + 1, 1) == "L")
					{
						if (indata->Substring(j + 2, 1) != "-")
						{
							this->label24->Text = indata->Substring(j + 2, 3) + "%";
							this->richTextBox1->ScrollToCaret();
						}

					}
				}

				j = j + 1;

			}

			readnum = readnum + 1;
		}
		
     }

private: System::Void richTextBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button4_Click_1(System::Object^  sender, System::EventArgs^  e) {
	
	if (this->serialPort1->IsOpen) {
		this->button4->Enabled = false;
		this->serialPort1->WriteLine("TFINL");
		this->richTextBox1->AppendText("Sent: TFINL\n");
		this->button5->Enabled = true;
		this->button11->Enabled = false;
		this->button8->Enabled = false;
		ResetTestResult();
		UpdateTestResult();
		state = 1;
	}
	else
	{
		this->richTextBox1->AppendText("Serial Port is Close\n");
	}
}
private: System::Void label10_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label13_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label14_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button11_Click(System::Object^  sender, System::EventArgs^  e) {
	if (state<8)
	{ 
	int index = state / 2 ;
	TestResult[index] = 2;
		state = state + 1;
		this->button5->Enabled = true;
		this->button11->Enabled = false;
		this->button8->Enabled = false;
		UpdateTestResult();
	}
}
private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
	if (state<8)
	{int index = state / 2;
	TestResult[index] = 1;
	state = state + 1;
	this->button5->Enabled = true;
	this->button11->Enabled = false;
	this->button8->Enabled = false;
	UpdateTestResult();
	}
}
private: System::Void button13_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
	this->button4->Enabled = true;
	this->button5->Enabled = false;
	state = 0;

	if (TestResult[4] == 0)
	{
		TestResult[4] = 1;
		UpdateTestResult();
	}

	this -> label21->Text = "**";
	this -> label22->Text = "**";
	this -> label23->Text = "**";
	this -> label24->Text = "**";
	this -> label27->Text = "**";
	this -> label29->Text = "**";

} 
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
	switch (state)
	{
	case 1:
		state = 2;
		this->serialPort1->WriteLine("TLED1");
		this->button5->Enabled = false;
		this->button11->Enabled = true;
		this->button8->Enabled = true;
		UpdateTestResult();
		break;

	case 3:
		state = 4;
		this->serialPort1->WriteLine("TLED2");
		this->button5->Enabled = false;
		this->button11->Enabled = true;
		this->button8->Enabled = true;
		UpdateTestResult();
		break;

	case 5:
		state = 6;
		this->serialPort1->WriteLine("TBUZZ");
		this->button5->Enabled = false;
		this->button11->Enabled = true;
		this->button8->Enabled = true;
		UpdateTestResult();
		break;

	case 7:
		this->serialPort1->WriteLine("TPAIR");
		UpdateTestResult();
		this->button5->Enabled = false;
		break;

	default:
		break;
	}
}
private: System::Void label6_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label25_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label24_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label21_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label16_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label22_Click(System::Object^  sender, System::EventArgs^  e) {
}
#if 0
private: System::Void backgroundWorker1_DoWork(System::Object^  sender, System::ComponentModel::DoWorkEventArgs^  e) {
	this->backgroundWorker1->ReportProgress(50);
	
}
void backgroundWorker1_ProgressChanged(Object^ /*sender*/, ProgressChangedEventArgs^ e)
{
			 this->progressBar1->Value = e->ProgressPercentage;
			 this->richTextBox1->AppendText(indata);
}
#endif

private: System::Void label9_Click(System::Object^  sender, System::EventArgs^  e) {
}

};


}
