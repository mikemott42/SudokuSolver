#pragma once

#include "puzzle.h"

namespace SudokuSolver {

	using namespace System;
    using namespace System::IO;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for SudokuForm
	/// </summary>
	public ref class SudokuForm : public System::Windows::Forms::Form
	{
    private: Puzzle* puzzle;
	public:
		SudokuForm(void)
		{
			InitializeComponent();
            puzzle = new Puzzle;
        }

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~SudokuForm()
		{
			if (components)
			{
				delete components;
			}
            if (puzzle)
            {
                delete puzzle;
                puzzle = NULL;
            }
		}
	private: System::Windows::Forms::Button^ solveButton;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ fileToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ newToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ openToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ exitToolStripMenuItem;
	private: System::Windows::Forms::Panel^ upperLeftBlock;
	private: System::Windows::Forms::Panel^ middleLeftBlock;
	private: System::Windows::Forms::Panel^ lowerLeftBlock;



	private: System::Windows::Forms::Panel^ upperMiddleBlock;
	private: System::Windows::Forms::Panel^ upperRightBlock;
	private: System::Windows::Forms::Panel^ middleCenterBlock;
	private: System::Windows::Forms::Panel^ middleRightBlock;
	private: System::Windows::Forms::Panel^ lowerCenterBlock;
	private: System::Windows::Forms::Panel^ lowerRightBlock;
	private: System::Windows::Forms::TextBox^ row2col2;

	private: System::Windows::Forms::TextBox^ row2col1;

	private: System::Windows::Forms::TextBox^ row2col0;

	private: System::Windows::Forms::TextBox^ row1col2;

	private: System::Windows::Forms::TextBox^ row1col1;

	private: System::Windows::Forms::TextBox^ row1col0;

	private: System::Windows::Forms::TextBox^ row0col2;

	private: System::Windows::Forms::TextBox^ row0col1;

	private: System::Windows::Forms::TextBox^ row0col0;

    private: System::Windows::Forms::TextBox^ row5col2;

    private: System::Windows::Forms::TextBox^ row5col1;

    private: System::Windows::Forms::TextBox^ row5col0;

    private: System::Windows::Forms::TextBox^ row4col2;

    private: System::Windows::Forms::TextBox^ row4col1;

    private: System::Windows::Forms::TextBox^ row4col0;

    private: System::Windows::Forms::TextBox^ row3col2;

    private: System::Windows::Forms::TextBox^ row3col1;

    private: System::Windows::Forms::TextBox^ row3col0;

    private: System::Windows::Forms::TextBox^ row8col2;

    private: System::Windows::Forms::TextBox^ row8col1;

    private: System::Windows::Forms::TextBox^ row8col0;

    private: System::Windows::Forms::TextBox^ row7col2;

    private: System::Windows::Forms::TextBox^ row7col1;

    private: System::Windows::Forms::TextBox^ row7col0;

    private: System::Windows::Forms::TextBox^ row6col2;

    private: System::Windows::Forms::TextBox^ row6col1;

    private: System::Windows::Forms::TextBox^ row6col0;

    private: System::Windows::Forms::TextBox^ row2col5;
    private: System::Windows::Forms::TextBox^ row2col4;
    private: System::Windows::Forms::TextBox^ row2col3;
    private: System::Windows::Forms::TextBox^ row1col5;
    private: System::Windows::Forms::TextBox^ row1col4;
    private: System::Windows::Forms::TextBox^ row1col3;
    private: System::Windows::Forms::TextBox^ row0col5;
    private: System::Windows::Forms::TextBox^ row0col4;
    private: System::Windows::Forms::TextBox^ row0col3;
    private: System::Windows::Forms::TextBox^ row2col8;
    private: System::Windows::Forms::TextBox^ row2col7;
    private: System::Windows::Forms::TextBox^ row2col6;
    private: System::Windows::Forms::TextBox^ row1col8;
    private: System::Windows::Forms::TextBox^ row1col7;
    private: System::Windows::Forms::TextBox^ row1col6;
    private: System::Windows::Forms::TextBox^ row0col8;
    private: System::Windows::Forms::TextBox^ row0col7;
    private: System::Windows::Forms::TextBox^ row0col6;
private: System::Windows::Forms::TextBox^ row5col5;

private: System::Windows::Forms::TextBox^ row5col4;

private: System::Windows::Forms::TextBox^ row5col3;

private: System::Windows::Forms::TextBox^ row4col5;

private: System::Windows::Forms::TextBox^ row4col4;

private: System::Windows::Forms::TextBox^ row4col3;

private: System::Windows::Forms::TextBox^ row3col5;

private: System::Windows::Forms::TextBox^ row3col4;

private: System::Windows::Forms::TextBox^ row3col3;
private: System::Windows::Forms::TextBox^ row5col8;


private: System::Windows::Forms::TextBox^ row5col7;

private: System::Windows::Forms::TextBox^ row5col6;

private: System::Windows::Forms::TextBox^ row4col8;

private: System::Windows::Forms::TextBox^ row4col7;

private: System::Windows::Forms::TextBox^ row4col6;

private: System::Windows::Forms::TextBox^ row3col8;

private: System::Windows::Forms::TextBox^ row3col7;

private: System::Windows::Forms::TextBox^ row3col6;
private: System::Windows::Forms::TextBox^ row8col5;


private: System::Windows::Forms::TextBox^ row8col4;

private: System::Windows::Forms::TextBox^ row8col3;

private: System::Windows::Forms::TextBox^ row7col5;

private: System::Windows::Forms::TextBox^ row7col4;

private: System::Windows::Forms::TextBox^ row7col3;

private: System::Windows::Forms::TextBox^ row6col5;

private: System::Windows::Forms::TextBox^ row6col4;

private: System::Windows::Forms::TextBox^ row6col3;
private: System::Windows::Forms::TextBox^ row8col8;


private: System::Windows::Forms::TextBox^ row8col7;

private: System::Windows::Forms::TextBox^ row8col6;

private: System::Windows::Forms::TextBox^ row7col8;

private: System::Windows::Forms::TextBox^ row7col7;

private: System::Windows::Forms::TextBox^ row7col6;

private: System::Windows::Forms::TextBox^ row6col8;

private: System::Windows::Forms::TextBox^ row6col7;

private: System::Windows::Forms::TextBox^ row6col6;
private: System::Windows::Forms::ToolStripMenuItem^ helpToolStripMenuItem;
private: System::Windows::Forms::ToolStripMenuItem^ saveToolStripMenuItem;

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
            this->solveButton = (gcnew System::Windows::Forms::Button());
            this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
            this->fileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->newToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->openToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->helpToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->upperLeftBlock = (gcnew System::Windows::Forms::Panel());
            this->row2col2 = (gcnew System::Windows::Forms::TextBox());
            this->row2col1 = (gcnew System::Windows::Forms::TextBox());
            this->row2col0 = (gcnew System::Windows::Forms::TextBox());
            this->row1col2 = (gcnew System::Windows::Forms::TextBox());
            this->row1col1 = (gcnew System::Windows::Forms::TextBox());
            this->row1col0 = (gcnew System::Windows::Forms::TextBox());
            this->row0col2 = (gcnew System::Windows::Forms::TextBox());
            this->row0col1 = (gcnew System::Windows::Forms::TextBox());
            this->row0col0 = (gcnew System::Windows::Forms::TextBox());
            this->middleLeftBlock = (gcnew System::Windows::Forms::Panel());
            this->row5col2 = (gcnew System::Windows::Forms::TextBox());
            this->row5col1 = (gcnew System::Windows::Forms::TextBox());
            this->row5col0 = (gcnew System::Windows::Forms::TextBox());
            this->row4col2 = (gcnew System::Windows::Forms::TextBox());
            this->row4col1 = (gcnew System::Windows::Forms::TextBox());
            this->row4col0 = (gcnew System::Windows::Forms::TextBox());
            this->row3col2 = (gcnew System::Windows::Forms::TextBox());
            this->row3col1 = (gcnew System::Windows::Forms::TextBox());
            this->row3col0 = (gcnew System::Windows::Forms::TextBox());
            this->lowerLeftBlock = (gcnew System::Windows::Forms::Panel());
            this->row8col2 = (gcnew System::Windows::Forms::TextBox());
            this->row8col1 = (gcnew System::Windows::Forms::TextBox());
            this->row8col0 = (gcnew System::Windows::Forms::TextBox());
            this->row7col2 = (gcnew System::Windows::Forms::TextBox());
            this->row7col1 = (gcnew System::Windows::Forms::TextBox());
            this->row7col0 = (gcnew System::Windows::Forms::TextBox());
            this->row6col2 = (gcnew System::Windows::Forms::TextBox());
            this->row6col1 = (gcnew System::Windows::Forms::TextBox());
            this->row6col0 = (gcnew System::Windows::Forms::TextBox());
            this->upperMiddleBlock = (gcnew System::Windows::Forms::Panel());
            this->row2col5 = (gcnew System::Windows::Forms::TextBox());
            this->row2col4 = (gcnew System::Windows::Forms::TextBox());
            this->row2col3 = (gcnew System::Windows::Forms::TextBox());
            this->row1col5 = (gcnew System::Windows::Forms::TextBox());
            this->row1col4 = (gcnew System::Windows::Forms::TextBox());
            this->row1col3 = (gcnew System::Windows::Forms::TextBox());
            this->row0col5 = (gcnew System::Windows::Forms::TextBox());
            this->row0col4 = (gcnew System::Windows::Forms::TextBox());
            this->row0col3 = (gcnew System::Windows::Forms::TextBox());
            this->upperRightBlock = (gcnew System::Windows::Forms::Panel());
            this->row2col8 = (gcnew System::Windows::Forms::TextBox());
            this->row2col7 = (gcnew System::Windows::Forms::TextBox());
            this->row2col6 = (gcnew System::Windows::Forms::TextBox());
            this->row1col8 = (gcnew System::Windows::Forms::TextBox());
            this->row1col7 = (gcnew System::Windows::Forms::TextBox());
            this->row1col6 = (gcnew System::Windows::Forms::TextBox());
            this->row0col8 = (gcnew System::Windows::Forms::TextBox());
            this->row0col7 = (gcnew System::Windows::Forms::TextBox());
            this->row0col6 = (gcnew System::Windows::Forms::TextBox());
            this->middleCenterBlock = (gcnew System::Windows::Forms::Panel());
            this->row5col5 = (gcnew System::Windows::Forms::TextBox());
            this->row5col4 = (gcnew System::Windows::Forms::TextBox());
            this->row5col3 = (gcnew System::Windows::Forms::TextBox());
            this->row4col5 = (gcnew System::Windows::Forms::TextBox());
            this->row4col4 = (gcnew System::Windows::Forms::TextBox());
            this->row4col3 = (gcnew System::Windows::Forms::TextBox());
            this->row3col5 = (gcnew System::Windows::Forms::TextBox());
            this->row3col4 = (gcnew System::Windows::Forms::TextBox());
            this->row3col3 = (gcnew System::Windows::Forms::TextBox());
            this->middleRightBlock = (gcnew System::Windows::Forms::Panel());
            this->row5col8 = (gcnew System::Windows::Forms::TextBox());
            this->row5col7 = (gcnew System::Windows::Forms::TextBox());
            this->row5col6 = (gcnew System::Windows::Forms::TextBox());
            this->row4col8 = (gcnew System::Windows::Forms::TextBox());
            this->row4col7 = (gcnew System::Windows::Forms::TextBox());
            this->row4col6 = (gcnew System::Windows::Forms::TextBox());
            this->row3col8 = (gcnew System::Windows::Forms::TextBox());
            this->row3col7 = (gcnew System::Windows::Forms::TextBox());
            this->row3col6 = (gcnew System::Windows::Forms::TextBox());
            this->lowerCenterBlock = (gcnew System::Windows::Forms::Panel());
            this->row8col5 = (gcnew System::Windows::Forms::TextBox());
            this->row8col4 = (gcnew System::Windows::Forms::TextBox());
            this->row8col3 = (gcnew System::Windows::Forms::TextBox());
            this->row7col5 = (gcnew System::Windows::Forms::TextBox());
            this->row7col4 = (gcnew System::Windows::Forms::TextBox());
            this->row7col3 = (gcnew System::Windows::Forms::TextBox());
            this->row6col5 = (gcnew System::Windows::Forms::TextBox());
            this->row6col4 = (gcnew System::Windows::Forms::TextBox());
            this->row6col3 = (gcnew System::Windows::Forms::TextBox());
            this->lowerRightBlock = (gcnew System::Windows::Forms::Panel());
            this->row8col8 = (gcnew System::Windows::Forms::TextBox());
            this->row8col7 = (gcnew System::Windows::Forms::TextBox());
            this->row8col6 = (gcnew System::Windows::Forms::TextBox());
            this->row7col8 = (gcnew System::Windows::Forms::TextBox());
            this->row7col7 = (gcnew System::Windows::Forms::TextBox());
            this->row7col6 = (gcnew System::Windows::Forms::TextBox());
            this->row6col8 = (gcnew System::Windows::Forms::TextBox());
            this->row6col7 = (gcnew System::Windows::Forms::TextBox());
            this->row6col6 = (gcnew System::Windows::Forms::TextBox());
            this->saveToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->menuStrip1->SuspendLayout();
            this->upperLeftBlock->SuspendLayout();
            this->middleLeftBlock->SuspendLayout();
            this->lowerLeftBlock->SuspendLayout();
            this->upperMiddleBlock->SuspendLayout();
            this->upperRightBlock->SuspendLayout();
            this->middleCenterBlock->SuspendLayout();
            this->middleRightBlock->SuspendLayout();
            this->lowerCenterBlock->SuspendLayout();
            this->lowerRightBlock->SuspendLayout();
            this->SuspendLayout();
            // 
            // solveButton
            // 
            this->solveButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->solveButton->Location = System::Drawing::Point(190, 530);
            this->solveButton->Name = L"solveButton";
            this->solveButton->Size = System::Drawing::Size(120, 34);
            this->solveButton->TabIndex = 0;
            this->solveButton->Text = L"Solve!";
            this->solveButton->UseVisualStyleBackColor = true;
            this->solveButton->Click += gcnew System::EventHandler(this, &SudokuForm::solveButton_Click);
            // 
            // menuStrip1
            // 
            this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
                this->fileToolStripMenuItem,
                    this->helpToolStripMenuItem
            });
            this->menuStrip1->Location = System::Drawing::Point(0, 0);
            this->menuStrip1->Name = L"menuStrip1";
            this->menuStrip1->Size = System::Drawing::Size(509, 24);
            this->menuStrip1->TabIndex = 1;
            this->menuStrip1->Text = L"menuStrip1";
            // 
            // fileToolStripMenuItem
            // 
            this->fileToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
                this->newToolStripMenuItem,
                    this->openToolStripMenuItem, this->saveToolStripMenuItem, this->exitToolStripMenuItem
            });
            this->fileToolStripMenuItem->Name = L"fileToolStripMenuItem";
            this->fileToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Alt | System::Windows::Forms::Keys::F));
            this->fileToolStripMenuItem->Size = System::Drawing::Size(37, 20);
            this->fileToolStripMenuItem->Text = L"File";
            // 
            // newToolStripMenuItem
            // 
            this->newToolStripMenuItem->Name = L"newToolStripMenuItem";
            this->newToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::N));
            this->newToolStripMenuItem->Size = System::Drawing::Size(180, 22);
            this->newToolStripMenuItem->Text = L"New...";
            this->newToolStripMenuItem->Click += gcnew System::EventHandler(this, &SudokuForm::newToolStripMenuItem_Click);
            // 
            // openToolStripMenuItem
            // 
            this->openToolStripMenuItem->Name = L"openToolStripMenuItem";
            this->openToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::O));
            this->openToolStripMenuItem->Size = System::Drawing::Size(180, 22);
            this->openToolStripMenuItem->Text = L"Open...";
            this->openToolStripMenuItem->Click += gcnew System::EventHandler(this, &SudokuForm::openToolStripMenuItem_Click);
            // 
            // exitToolStripMenuItem
            // 
            this->exitToolStripMenuItem->Name = L"exitToolStripMenuItem";
            this->exitToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::X));
            this->exitToolStripMenuItem->Size = System::Drawing::Size(180, 22);
            this->exitToolStripMenuItem->Text = L"Exit";
            this->exitToolStripMenuItem->Click += gcnew System::EventHandler(this, &SudokuForm::exitToolStripMenuItem_Click);
            // 
            // helpToolStripMenuItem
            // 
            this->helpToolStripMenuItem->Name = L"helpToolStripMenuItem";
            this->helpToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Alt | System::Windows::Forms::Keys::H));
            this->helpToolStripMenuItem->Size = System::Drawing::Size(44, 20);
            this->helpToolStripMenuItem->Text = L"Help";
            // 
            // upperLeftBlock
            // 
            this->upperLeftBlock->BackColor = System::Drawing::SystemColors::ControlLight;
            this->upperLeftBlock->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->upperLeftBlock->Controls->Add(this->row2col2);
            this->upperLeftBlock->Controls->Add(this->row2col1);
            this->upperLeftBlock->Controls->Add(this->row2col0);
            this->upperLeftBlock->Controls->Add(this->row1col2);
            this->upperLeftBlock->Controls->Add(this->row1col1);
            this->upperLeftBlock->Controls->Add(this->row1col0);
            this->upperLeftBlock->Controls->Add(this->row0col2);
            this->upperLeftBlock->Controls->Add(this->row0col1);
            this->upperLeftBlock->Controls->Add(this->row0col0);
            this->upperLeftBlock->Location = System::Drawing::Point(22, 41);
            this->upperLeftBlock->Name = L"upperLeftBlock";
            this->upperLeftBlock->Size = System::Drawing::Size(155, 155);
            this->upperLeftBlock->TabIndex = 2;
            // 
            // row2col2
            // 
            this->row2col2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->row2col2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 29.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->row2col2->Location = System::Drawing::Point(102, 101);
            this->row2col2->MaxLength = 1;
            this->row2col2->Name = L"row2col2";
            this->row2col2->Size = System::Drawing::Size(52, 52);
            this->row2col2->TabIndex = 8;
            this->row2col2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            this->row2col2->TextChanged += gcnew System::EventHandler(this, &SudokuForm::row2col2_TextChanged);
            // 
            // row2col1
            // 
            this->row2col1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->row2col1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 29.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->row2col1->Location = System::Drawing::Point(51, 101);
            this->row2col1->MaxLength = 1;
            this->row2col1->Name = L"row2col1";
            this->row2col1->Size = System::Drawing::Size(52, 52);
            this->row2col1->TabIndex = 7;
            this->row2col1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            this->row2col1->TextChanged += gcnew System::EventHandler(this, &SudokuForm::row2col1_TextChanged);
            // 
            // row2col0
            // 
            this->row2col0->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->row2col0->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 29.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->row2col0->Location = System::Drawing::Point(0, 101);
            this->row2col0->MaxLength = 1;
            this->row2col0->Name = L"row2col0";
            this->row2col0->Size = System::Drawing::Size(52, 52);
            this->row2col0->TabIndex = 6;
            this->row2col0->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            this->row2col0->TextChanged += gcnew System::EventHandler(this, &SudokuForm::row2col0_TextChanged);
            // 
            // row1col2
            // 
            this->row1col2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->row1col2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 29.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->row1col2->Location = System::Drawing::Point(102, 50);
            this->row1col2->MaxLength = 1;
            this->row1col2->Name = L"row1col2";
            this->row1col2->Size = System::Drawing::Size(52, 52);
            this->row1col2->TabIndex = 5;
            this->row1col2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            this->row1col2->TextChanged += gcnew System::EventHandler(this, &SudokuForm::row1col2_TextChanged);
            // 
            // row1col1
            // 
            this->row1col1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->row1col1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 29.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->row1col1->Location = System::Drawing::Point(51, 50);
            this->row1col1->MaxLength = 1;
            this->row1col1->Name = L"row1col1";
            this->row1col1->Size = System::Drawing::Size(52, 52);
            this->row1col1->TabIndex = 4;
            this->row1col1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            this->row1col1->TextChanged += gcnew System::EventHandler(this, &SudokuForm::row1col1_TextChanged);
            // 
            // row1col0
            // 
            this->row1col0->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->row1col0->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 29.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->row1col0->Location = System::Drawing::Point(0, 50);
            this->row1col0->MaxLength = 1;
            this->row1col0->Name = L"row1col0";
            this->row1col0->Size = System::Drawing::Size(52, 52);
            this->row1col0->TabIndex = 3;
            this->row1col0->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            this->row1col0->TextChanged += gcnew System::EventHandler(this, &SudokuForm::row1col0_TextChanged);
            // 
            // row0col2
            // 
            this->row0col2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->row0col2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 29.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->row0col2->Location = System::Drawing::Point(102, 0);
            this->row0col2->MaxLength = 1;
            this->row0col2->Name = L"row0col2";
            this->row0col2->Size = System::Drawing::Size(52, 52);
            this->row0col2->TabIndex = 2;
            this->row0col2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            this->row0col2->TextChanged += gcnew System::EventHandler(this, &SudokuForm::row0col2_TextChanged);
            // 
            // row0col1
            // 
            this->row0col1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->row0col1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 29.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->row0col1->Location = System::Drawing::Point(51, 0);
            this->row0col1->MaxLength = 1;
            this->row0col1->Name = L"row0col1";
            this->row0col1->Size = System::Drawing::Size(52, 52);
            this->row0col1->TabIndex = 1;
            this->row0col1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            this->row0col1->TextChanged += gcnew System::EventHandler(this, &SudokuForm::row0col1_TextChanged);
            // 
            // row0col0
            // 
            this->row0col0->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->row0col0->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 29.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->row0col0->Location = System::Drawing::Point(0, 0);
            this->row0col0->MaxLength = 1;
            this->row0col0->Name = L"row0col0";
            this->row0col0->Size = System::Drawing::Size(52, 52);
            this->row0col0->TabIndex = 0;
            this->row0col0->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            this->row0col0->TextChanged += gcnew System::EventHandler(this, &SudokuForm::row0col0_TextChanged);
            // 
            // middleLeftBlock
            // 
            this->middleLeftBlock->BackColor = System::Drawing::SystemColors::ControlLight;
            this->middleLeftBlock->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->middleLeftBlock->Controls->Add(this->row5col2);
            this->middleLeftBlock->Controls->Add(this->row5col1);
            this->middleLeftBlock->Controls->Add(this->row5col0);
            this->middleLeftBlock->Controls->Add(this->row4col2);
            this->middleLeftBlock->Controls->Add(this->row4col1);
            this->middleLeftBlock->Controls->Add(this->row4col0);
            this->middleLeftBlock->Controls->Add(this->row3col2);
            this->middleLeftBlock->Controls->Add(this->row3col1);
            this->middleLeftBlock->Controls->Add(this->row3col0);
            this->middleLeftBlock->Location = System::Drawing::Point(22, 196);
            this->middleLeftBlock->Name = L"middleLeftBlock";
            this->middleLeftBlock->Size = System::Drawing::Size(155, 155);
            this->middleLeftBlock->TabIndex = 3;
            // 
            // row5col2
            // 
            this->row5col2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->row5col2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 29.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->row5col2->Location = System::Drawing::Point(101, 101);
            this->row5col2->MaxLength = 1;
            this->row5col2->Name = L"row5col2";
            this->row5col2->Size = System::Drawing::Size(52, 52);
            this->row5col2->TabIndex = 17;
            this->row5col2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            this->row5col2->TextChanged += gcnew System::EventHandler(this, &SudokuForm::row5col2_TextChanged);
            // 
            // row5col1
            // 
            this->row5col1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->row5col1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 29.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->row5col1->Location = System::Drawing::Point(50, 101);
            this->row5col1->MaxLength = 1;
            this->row5col1->Name = L"row5col1";
            this->row5col1->Size = System::Drawing::Size(52, 52);
            this->row5col1->TabIndex = 16;
            this->row5col1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            this->row5col1->TextChanged += gcnew System::EventHandler(this, &SudokuForm::row5col1_TextChanged);
            // 
            // row5col0
            // 
            this->row5col0->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->row5col0->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 29.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->row5col0->Location = System::Drawing::Point(-1, 101);
            this->row5col0->MaxLength = 1;
            this->row5col0->Name = L"row5col0";
            this->row5col0->Size = System::Drawing::Size(52, 52);
            this->row5col0->TabIndex = 15;
            this->row5col0->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            this->row5col0->TextChanged += gcnew System::EventHandler(this, &SudokuForm::row5col0_TextChanged);
            // 
            // row4col2
            // 
            this->row4col2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->row4col2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 29.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->row4col2->Location = System::Drawing::Point(101, 50);
            this->row4col2->MaxLength = 1;
            this->row4col2->Name = L"row4col2";
            this->row4col2->Size = System::Drawing::Size(52, 52);
            this->row4col2->TabIndex = 14;
            this->row4col2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            this->row4col2->TextChanged += gcnew System::EventHandler(this, &SudokuForm::row4col2_TextChanged);
            // 
            // row4col1
            // 
            this->row4col1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->row4col1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 29.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->row4col1->Location = System::Drawing::Point(50, 50);
            this->row4col1->MaxLength = 1;
            this->row4col1->Name = L"row4col1";
            this->row4col1->Size = System::Drawing::Size(52, 52);
            this->row4col1->TabIndex = 13;
            this->row4col1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            this->row4col1->TextChanged += gcnew System::EventHandler(this, &SudokuForm::row4col1_TextChanged);
            // 
            // row4col0
            // 
            this->row4col0->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->row4col0->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 29.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->row4col0->Location = System::Drawing::Point(-1, 50);
            this->row4col0->MaxLength = 1;
            this->row4col0->Name = L"row4col0";
            this->row4col0->Size = System::Drawing::Size(52, 52);
            this->row4col0->TabIndex = 12;
            this->row4col0->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            this->row4col0->TextChanged += gcnew System::EventHandler(this, &SudokuForm::row4col0_TextChanged);
            // 
            // row3col2
            // 
            this->row3col2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->row3col2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 29.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->row3col2->Location = System::Drawing::Point(101, 0);
            this->row3col2->MaxLength = 1;
            this->row3col2->Name = L"row3col2";
            this->row3col2->Size = System::Drawing::Size(52, 52);
            this->row3col2->TabIndex = 11;
            this->row3col2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            this->row3col2->TextChanged += gcnew System::EventHandler(this, &SudokuForm::row3col2_TextChanged);
            // 
            // row3col1
            // 
            this->row3col1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->row3col1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 29.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->row3col1->Location = System::Drawing::Point(50, 0);
            this->row3col1->MaxLength = 1;
            this->row3col1->Name = L"row3col1";
            this->row3col1->Size = System::Drawing::Size(52, 52);
            this->row3col1->TabIndex = 10;
            this->row3col1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            this->row3col1->TextChanged += gcnew System::EventHandler(this, &SudokuForm::row3col1_TextChanged);
            // 
            // row3col0
            // 
            this->row3col0->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->row3col0->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 29.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->row3col0->Location = System::Drawing::Point(-1, 0);
            this->row3col0->MaxLength = 1;
            this->row3col0->Name = L"row3col0";
            this->row3col0->Size = System::Drawing::Size(52, 52);
            this->row3col0->TabIndex = 9;
            this->row3col0->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            this->row3col0->TextChanged += gcnew System::EventHandler(this, &SudokuForm::row3col0_TextChanged);
            // 
            // lowerLeftBlock
            // 
            this->lowerLeftBlock->BackColor = System::Drawing::SystemColors::ControlLight;
            this->lowerLeftBlock->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->lowerLeftBlock->Controls->Add(this->row8col2);
            this->lowerLeftBlock->Controls->Add(this->row8col1);
            this->lowerLeftBlock->Controls->Add(this->row8col0);
            this->lowerLeftBlock->Controls->Add(this->row7col2);
            this->lowerLeftBlock->Controls->Add(this->row7col1);
            this->lowerLeftBlock->Controls->Add(this->row7col0);
            this->lowerLeftBlock->Controls->Add(this->row6col2);
            this->lowerLeftBlock->Controls->Add(this->row6col1);
            this->lowerLeftBlock->Controls->Add(this->row6col0);
            this->lowerLeftBlock->Location = System::Drawing::Point(22, 351);
            this->lowerLeftBlock->Name = L"lowerLeftBlock";
            this->lowerLeftBlock->Size = System::Drawing::Size(155, 155);
            this->lowerLeftBlock->TabIndex = 4;
            // 
            // row8col2
            // 
            this->row8col2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->row8col2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 29.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->row8col2->Location = System::Drawing::Point(101, 101);
            this->row8col2->MaxLength = 1;
            this->row8col2->Name = L"row8col2";
            this->row8col2->Size = System::Drawing::Size(52, 52);
            this->row8col2->TabIndex = 17;
            this->row8col2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            this->row8col2->TextChanged += gcnew System::EventHandler(this, &SudokuForm::row8col2_TextChanged);
            // 
            // row8col1
            // 
            this->row8col1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->row8col1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 29.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->row8col1->Location = System::Drawing::Point(50, 101);
            this->row8col1->MaxLength = 1;
            this->row8col1->Name = L"row8col1";
            this->row8col1->Size = System::Drawing::Size(52, 52);
            this->row8col1->TabIndex = 16;
            this->row8col1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            this->row8col1->TextChanged += gcnew System::EventHandler(this, &SudokuForm::row8col1_TextChanged);
            // 
            // row8col0
            // 
            this->row8col0->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->row8col0->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 29.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->row8col0->Location = System::Drawing::Point(-1, 101);
            this->row8col0->MaxLength = 1;
            this->row8col0->Name = L"row8col0";
            this->row8col0->Size = System::Drawing::Size(52, 52);
            this->row8col0->TabIndex = 15;
            this->row8col0->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            this->row8col0->TextChanged += gcnew System::EventHandler(this, &SudokuForm::row8col0_TextChanged);
            // 
            // row7col2
            // 
            this->row7col2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->row7col2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 29.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->row7col2->Location = System::Drawing::Point(101, 50);
            this->row7col2->MaxLength = 1;
            this->row7col2->Name = L"row7col2";
            this->row7col2->Size = System::Drawing::Size(52, 52);
            this->row7col2->TabIndex = 14;
            this->row7col2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            this->row7col2->TextChanged += gcnew System::EventHandler(this, &SudokuForm::row7col2_TextChanged);
            // 
            // row7col1
            // 
            this->row7col1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->row7col1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 29.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->row7col1->Location = System::Drawing::Point(50, 50);
            this->row7col1->MaxLength = 1;
            this->row7col1->Name = L"row7col1";
            this->row7col1->Size = System::Drawing::Size(52, 52);
            this->row7col1->TabIndex = 13;
            this->row7col1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            this->row7col1->TextChanged += gcnew System::EventHandler(this, &SudokuForm::row7col1_TextChanged);
            // 
            // row7col0
            // 
            this->row7col0->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->row7col0->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 29.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->row7col0->Location = System::Drawing::Point(-1, 50);
            this->row7col0->MaxLength = 1;
            this->row7col0->Name = L"row7col0";
            this->row7col0->Size = System::Drawing::Size(52, 52);
            this->row7col0->TabIndex = 12;
            this->row7col0->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            this->row7col0->TextChanged += gcnew System::EventHandler(this, &SudokuForm::row7col0_TextChanged);
            // 
            // row6col2
            // 
            this->row6col2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->row6col2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 29.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->row6col2->Location = System::Drawing::Point(101, 0);
            this->row6col2->MaxLength = 1;
            this->row6col2->Name = L"row6col2";
            this->row6col2->Size = System::Drawing::Size(52, 52);
            this->row6col2->TabIndex = 11;
            this->row6col2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            this->row6col2->TextChanged += gcnew System::EventHandler(this, &SudokuForm::row6col2_TextChanged);
            // 
            // row6col1
            // 
            this->row6col1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->row6col1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 29.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->row6col1->Location = System::Drawing::Point(50, 0);
            this->row6col1->MaxLength = 1;
            this->row6col1->Name = L"row6col1";
            this->row6col1->Size = System::Drawing::Size(52, 52);
            this->row6col1->TabIndex = 10;
            this->row6col1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            this->row6col1->TextChanged += gcnew System::EventHandler(this, &SudokuForm::row6col1_TextChanged);
            // 
            // row6col0
            // 
            this->row6col0->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->row6col0->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 29.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->row6col0->Location = System::Drawing::Point(-1, 0);
            this->row6col0->MaxLength = 1;
            this->row6col0->Name = L"row6col0";
            this->row6col0->Size = System::Drawing::Size(52, 52);
            this->row6col0->TabIndex = 9;
            this->row6col0->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            this->row6col0->TextChanged += gcnew System::EventHandler(this, &SudokuForm::row6col0_TextChanged);
            // 
            // upperMiddleBlock
            // 
            this->upperMiddleBlock->BackColor = System::Drawing::SystemColors::ControlLight;
            this->upperMiddleBlock->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->upperMiddleBlock->Controls->Add(this->row2col5);
            this->upperMiddleBlock->Controls->Add(this->row2col4);
            this->upperMiddleBlock->Controls->Add(this->row2col3);
            this->upperMiddleBlock->Controls->Add(this->row1col5);
            this->upperMiddleBlock->Controls->Add(this->row1col4);
            this->upperMiddleBlock->Controls->Add(this->row1col3);
            this->upperMiddleBlock->Controls->Add(this->row0col5);
            this->upperMiddleBlock->Controls->Add(this->row0col4);
            this->upperMiddleBlock->Controls->Add(this->row0col3);
            this->upperMiddleBlock->Location = System::Drawing::Point(178, 41);
            this->upperMiddleBlock->Name = L"upperMiddleBlock";
            this->upperMiddleBlock->Size = System::Drawing::Size(155, 155);
            this->upperMiddleBlock->TabIndex = 3;
            // 
            // row2col5
            // 
            this->row2col5->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->row2col5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 29.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->row2col5->Location = System::Drawing::Point(101, 101);
            this->row2col5->MaxLength = 1;
            this->row2col5->Name = L"row2col5";
            this->row2col5->Size = System::Drawing::Size(52, 52);
            this->row2col5->TabIndex = 17;
            this->row2col5->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            this->row2col5->TextChanged += gcnew System::EventHandler(this, &SudokuForm::row2col5_TextChanged);
            // 
            // row2col4
            // 
            this->row2col4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->row2col4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 29.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->row2col4->Location = System::Drawing::Point(50, 101);
            this->row2col4->MaxLength = 1;
            this->row2col4->Name = L"row2col4";
            this->row2col4->Size = System::Drawing::Size(52, 52);
            this->row2col4->TabIndex = 16;
            this->row2col4->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            this->row2col4->TextChanged += gcnew System::EventHandler(this, &SudokuForm::row2col4_TextChanged);
            // 
            // row2col3
            // 
            this->row2col3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->row2col3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 29.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->row2col3->Location = System::Drawing::Point(-1, 101);
            this->row2col3->MaxLength = 1;
            this->row2col3->Name = L"row2col3";
            this->row2col3->Size = System::Drawing::Size(52, 52);
            this->row2col3->TabIndex = 15;
            this->row2col3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            this->row2col3->TextChanged += gcnew System::EventHandler(this, &SudokuForm::row2col3_TextChanged);
            // 
            // row1col5
            // 
            this->row1col5->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->row1col5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 29.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->row1col5->Location = System::Drawing::Point(101, 50);
            this->row1col5->MaxLength = 1;
            this->row1col5->Name = L"row1col5";
            this->row1col5->Size = System::Drawing::Size(52, 52);
            this->row1col5->TabIndex = 14;
            this->row1col5->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            this->row1col5->TextChanged += gcnew System::EventHandler(this, &SudokuForm::row1col5_TextChanged);
            // 
            // row1col4
            // 
            this->row1col4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->row1col4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 29.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->row1col4->Location = System::Drawing::Point(50, 50);
            this->row1col4->MaxLength = 1;
            this->row1col4->Name = L"row1col4";
            this->row1col4->Size = System::Drawing::Size(52, 52);
            this->row1col4->TabIndex = 13;
            this->row1col4->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            this->row1col4->TextChanged += gcnew System::EventHandler(this, &SudokuForm::row1col4_TextChanged);
            // 
            // row1col3
            // 
            this->row1col3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->row1col3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 29.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->row1col3->Location = System::Drawing::Point(-1, 50);
            this->row1col3->MaxLength = 1;
            this->row1col3->Name = L"row1col3";
            this->row1col3->Size = System::Drawing::Size(52, 52);
            this->row1col3->TabIndex = 12;
            this->row1col3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            this->row1col3->TextChanged += gcnew System::EventHandler(this, &SudokuForm::row1col3_TextChanged);
            // 
            // row0col5
            // 
            this->row0col5->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->row0col5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 29.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->row0col5->Location = System::Drawing::Point(101, 0);
            this->row0col5->MaxLength = 1;
            this->row0col5->Name = L"row0col5";
            this->row0col5->Size = System::Drawing::Size(52, 52);
            this->row0col5->TabIndex = 11;
            this->row0col5->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            this->row0col5->TextChanged += gcnew System::EventHandler(this, &SudokuForm::row0col5_TextChanged);
            // 
            // row0col4
            // 
            this->row0col4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->row0col4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 29.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->row0col4->Location = System::Drawing::Point(50, 0);
            this->row0col4->MaxLength = 1;
            this->row0col4->Name = L"row0col4";
            this->row0col4->Size = System::Drawing::Size(52, 52);
            this->row0col4->TabIndex = 10;
            this->row0col4->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            this->row0col4->TextChanged += gcnew System::EventHandler(this, &SudokuForm::row0col4_TextChanged);
            // 
            // row0col3
            // 
            this->row0col3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->row0col3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 29.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->row0col3->Location = System::Drawing::Point(-1, 0);
            this->row0col3->MaxLength = 1;
            this->row0col3->Name = L"row0col3";
            this->row0col3->Size = System::Drawing::Size(52, 52);
            this->row0col3->TabIndex = 9;
            this->row0col3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            this->row0col3->TextChanged += gcnew System::EventHandler(this, &SudokuForm::row0col3_TextChanged);
            // 
            // upperRightBlock
            // 
            this->upperRightBlock->BackColor = System::Drawing::SystemColors::ControlLight;
            this->upperRightBlock->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->upperRightBlock->Controls->Add(this->row2col8);
            this->upperRightBlock->Controls->Add(this->row2col7);
            this->upperRightBlock->Controls->Add(this->row2col6);
            this->upperRightBlock->Controls->Add(this->row1col8);
            this->upperRightBlock->Controls->Add(this->row1col7);
            this->upperRightBlock->Controls->Add(this->row1col6);
            this->upperRightBlock->Controls->Add(this->row0col8);
            this->upperRightBlock->Controls->Add(this->row0col7);
            this->upperRightBlock->Controls->Add(this->row0col6);
            this->upperRightBlock->Location = System::Drawing::Point(334, 41);
            this->upperRightBlock->Name = L"upperRightBlock";
            this->upperRightBlock->Size = System::Drawing::Size(155, 155);
            this->upperRightBlock->TabIndex = 4;
            // 
            // row2col8
            // 
            this->row2col8->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->row2col8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 29.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->row2col8->Location = System::Drawing::Point(101, 101);
            this->row2col8->MaxLength = 1;
            this->row2col8->Name = L"row2col8";
            this->row2col8->Size = System::Drawing::Size(52, 52);
            this->row2col8->TabIndex = 17;
            this->row2col8->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            this->row2col8->TextChanged += gcnew System::EventHandler(this, &SudokuForm::row2col8_TextChanged);
            // 
            // row2col7
            // 
            this->row2col7->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->row2col7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 29.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->row2col7->Location = System::Drawing::Point(50, 101);
            this->row2col7->MaxLength = 1;
            this->row2col7->Name = L"row2col7";
            this->row2col7->Size = System::Drawing::Size(52, 52);
            this->row2col7->TabIndex = 16;
            this->row2col7->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            this->row2col7->TextChanged += gcnew System::EventHandler(this, &SudokuForm::row2col7_TextChanged);
            // 
            // row2col6
            // 
            this->row2col6->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->row2col6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 29.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->row2col6->Location = System::Drawing::Point(-1, 101);
            this->row2col6->MaxLength = 1;
            this->row2col6->Name = L"row2col6";
            this->row2col6->Size = System::Drawing::Size(52, 52);
            this->row2col6->TabIndex = 15;
            this->row2col6->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            this->row2col6->TextChanged += gcnew System::EventHandler(this, &SudokuForm::row2col6_TextChanged);
            // 
            // row1col8
            // 
            this->row1col8->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->row1col8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 29.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->row1col8->Location = System::Drawing::Point(101, 50);
            this->row1col8->MaxLength = 1;
            this->row1col8->Name = L"row1col8";
            this->row1col8->Size = System::Drawing::Size(52, 52);
            this->row1col8->TabIndex = 14;
            this->row1col8->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            this->row1col8->TextChanged += gcnew System::EventHandler(this, &SudokuForm::row1col8_TextChanged);
            // 
            // row1col7
            // 
            this->row1col7->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->row1col7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 29.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->row1col7->Location = System::Drawing::Point(50, 50);
            this->row1col7->MaxLength = 1;
            this->row1col7->Name = L"row1col7";
            this->row1col7->Size = System::Drawing::Size(52, 52);
            this->row1col7->TabIndex = 13;
            this->row1col7->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            this->row1col7->TextChanged += gcnew System::EventHandler(this, &SudokuForm::row1col7_TextChanged);
            // 
            // row1col6
            // 
            this->row1col6->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->row1col6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 29.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->row1col6->Location = System::Drawing::Point(-1, 50);
            this->row1col6->MaxLength = 1;
            this->row1col6->Name = L"row1col6";
            this->row1col6->Size = System::Drawing::Size(52, 52);
            this->row1col6->TabIndex = 12;
            this->row1col6->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            this->row1col6->TextChanged += gcnew System::EventHandler(this, &SudokuForm::row1col6_TextChanged);
            // 
            // row0col8
            // 
            this->row0col8->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->row0col8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 29.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->row0col8->Location = System::Drawing::Point(101, 0);
            this->row0col8->MaxLength = 1;
            this->row0col8->Name = L"row0col8";
            this->row0col8->Size = System::Drawing::Size(52, 52);
            this->row0col8->TabIndex = 11;
            this->row0col8->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            this->row0col8->TextChanged += gcnew System::EventHandler(this, &SudokuForm::row0col8_TextChanged);
            // 
            // row0col7
            // 
            this->row0col7->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->row0col7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 29.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->row0col7->Location = System::Drawing::Point(50, 0);
            this->row0col7->MaxLength = 1;
            this->row0col7->Name = L"row0col7";
            this->row0col7->Size = System::Drawing::Size(52, 52);
            this->row0col7->TabIndex = 10;
            this->row0col7->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            this->row0col7->TextChanged += gcnew System::EventHandler(this, &SudokuForm::row0col7_TextChanged);
            // 
            // row0col6
            // 
            this->row0col6->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->row0col6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 29.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->row0col6->Location = System::Drawing::Point(-1, 0);
            this->row0col6->MaxLength = 1;
            this->row0col6->Name = L"row0col6";
            this->row0col6->Size = System::Drawing::Size(52, 52);
            this->row0col6->TabIndex = 9;
            this->row0col6->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            this->row0col6->TextChanged += gcnew System::EventHandler(this, &SudokuForm::row0col6_TextChanged);
            // 
            // middleCenterBlock
            // 
            this->middleCenterBlock->BackColor = System::Drawing::SystemColors::ControlLight;
            this->middleCenterBlock->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->middleCenterBlock->Controls->Add(this->row5col5);
            this->middleCenterBlock->Controls->Add(this->row5col4);
            this->middleCenterBlock->Controls->Add(this->row5col3);
            this->middleCenterBlock->Controls->Add(this->row4col5);
            this->middleCenterBlock->Controls->Add(this->row4col4);
            this->middleCenterBlock->Controls->Add(this->row4col3);
            this->middleCenterBlock->Controls->Add(this->row3col5);
            this->middleCenterBlock->Controls->Add(this->row3col4);
            this->middleCenterBlock->Controls->Add(this->row3col3);
            this->middleCenterBlock->Location = System::Drawing::Point(178, 196);
            this->middleCenterBlock->Name = L"middleCenterBlock";
            this->middleCenterBlock->Size = System::Drawing::Size(155, 155);
            this->middleCenterBlock->TabIndex = 4;
            // 
            // row5col5
            // 
            this->row5col5->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->row5col5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 29.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->row5col5->Location = System::Drawing::Point(101, 101);
            this->row5col5->MaxLength = 1;
            this->row5col5->Name = L"row5col5";
            this->row5col5->Size = System::Drawing::Size(52, 52);
            this->row5col5->TabIndex = 17;
            this->row5col5->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            this->row5col5->TextChanged += gcnew System::EventHandler(this, &SudokuForm::row5col5_TextChanged);
            // 
            // row5col4
            // 
            this->row5col4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->row5col4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 29.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->row5col4->Location = System::Drawing::Point(50, 101);
            this->row5col4->MaxLength = 1;
            this->row5col4->Name = L"row5col4";
            this->row5col4->Size = System::Drawing::Size(52, 52);
            this->row5col4->TabIndex = 16;
            this->row5col4->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            this->row5col4->TextChanged += gcnew System::EventHandler(this, &SudokuForm::row5col4_TextChanged);
            // 
            // row5col3
            // 
            this->row5col3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->row5col3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 29.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->row5col3->Location = System::Drawing::Point(-1, 101);
            this->row5col3->MaxLength = 1;
            this->row5col3->Name = L"row5col3";
            this->row5col3->Size = System::Drawing::Size(52, 52);
            this->row5col3->TabIndex = 15;
            this->row5col3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            this->row5col3->TextChanged += gcnew System::EventHandler(this, &SudokuForm::row5col3_TextChanged);
            // 
            // row4col5
            // 
            this->row4col5->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->row4col5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 29.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->row4col5->Location = System::Drawing::Point(101, 50);
            this->row4col5->MaxLength = 1;
            this->row4col5->Name = L"row4col5";
            this->row4col5->Size = System::Drawing::Size(52, 52);
            this->row4col5->TabIndex = 14;
            this->row4col5->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            this->row4col5->TextChanged += gcnew System::EventHandler(this, &SudokuForm::row4col5_TextChanged);
            // 
            // row4col4
            // 
            this->row4col4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->row4col4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 29.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->row4col4->Location = System::Drawing::Point(50, 50);
            this->row4col4->MaxLength = 1;
            this->row4col4->Name = L"row4col4";
            this->row4col4->Size = System::Drawing::Size(52, 52);
            this->row4col4->TabIndex = 13;
            this->row4col4->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            this->row4col4->TextChanged += gcnew System::EventHandler(this, &SudokuForm::row4col4_TextChanged);
            // 
            // row4col3
            // 
            this->row4col3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->row4col3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 29.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->row4col3->Location = System::Drawing::Point(-1, 50);
            this->row4col3->MaxLength = 1;
            this->row4col3->Name = L"row4col3";
            this->row4col3->Size = System::Drawing::Size(52, 52);
            this->row4col3->TabIndex = 12;
            this->row4col3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            this->row4col3->TextChanged += gcnew System::EventHandler(this, &SudokuForm::row4col3_TextChanged);
            // 
            // row3col5
            // 
            this->row3col5->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->row3col5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 29.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->row3col5->Location = System::Drawing::Point(101, 0);
            this->row3col5->MaxLength = 1;
            this->row3col5->Name = L"row3col5";
            this->row3col5->Size = System::Drawing::Size(52, 52);
            this->row3col5->TabIndex = 11;
            this->row3col5->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            this->row3col5->TextChanged += gcnew System::EventHandler(this, &SudokuForm::row3col5_TextChanged);
            // 
            // row3col4
            // 
            this->row3col4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->row3col4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 29.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->row3col4->Location = System::Drawing::Point(50, 0);
            this->row3col4->MaxLength = 1;
            this->row3col4->Name = L"row3col4";
            this->row3col4->Size = System::Drawing::Size(52, 52);
            this->row3col4->TabIndex = 10;
            this->row3col4->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            this->row3col4->TextChanged += gcnew System::EventHandler(this, &SudokuForm::row3col4_TextChanged);
            // 
            // row3col3
            // 
            this->row3col3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->row3col3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 29.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->row3col3->Location = System::Drawing::Point(-1, 0);
            this->row3col3->MaxLength = 1;
            this->row3col3->Name = L"row3col3";
            this->row3col3->Size = System::Drawing::Size(52, 52);
            this->row3col3->TabIndex = 9;
            this->row3col3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            this->row3col3->TextChanged += gcnew System::EventHandler(this, &SudokuForm::row3col3_TextChanged);
            // 
            // middleRightBlock
            // 
            this->middleRightBlock->BackColor = System::Drawing::SystemColors::ControlLight;
            this->middleRightBlock->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->middleRightBlock->Controls->Add(this->row5col8);
            this->middleRightBlock->Controls->Add(this->row5col7);
            this->middleRightBlock->Controls->Add(this->row5col6);
            this->middleRightBlock->Controls->Add(this->row4col8);
            this->middleRightBlock->Controls->Add(this->row4col7);
            this->middleRightBlock->Controls->Add(this->row4col6);
            this->middleRightBlock->Controls->Add(this->row3col8);
            this->middleRightBlock->Controls->Add(this->row3col7);
            this->middleRightBlock->Controls->Add(this->row3col6);
            this->middleRightBlock->Location = System::Drawing::Point(334, 196);
            this->middleRightBlock->Name = L"middleRightBlock";
            this->middleRightBlock->Size = System::Drawing::Size(155, 155);
            this->middleRightBlock->TabIndex = 5;
            // 
            // row5col8
            // 
            this->row5col8->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->row5col8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 29.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->row5col8->Location = System::Drawing::Point(101, 101);
            this->row5col8->MaxLength = 1;
            this->row5col8->Name = L"row5col8";
            this->row5col8->Size = System::Drawing::Size(52, 52);
            this->row5col8->TabIndex = 17;
            this->row5col8->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            this->row5col8->TextChanged += gcnew System::EventHandler(this, &SudokuForm::row5col8_TextChanged);
            // 
            // row5col7
            // 
            this->row5col7->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->row5col7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 29.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->row5col7->Location = System::Drawing::Point(50, 101);
            this->row5col7->MaxLength = 1;
            this->row5col7->Name = L"row5col7";
            this->row5col7->Size = System::Drawing::Size(52, 52);
            this->row5col7->TabIndex = 16;
            this->row5col7->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            this->row5col7->TextChanged += gcnew System::EventHandler(this, &SudokuForm::row5col7_TextChanged);
            // 
            // row5col6
            // 
            this->row5col6->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->row5col6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 29.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->row5col6->Location = System::Drawing::Point(-1, 101);
            this->row5col6->MaxLength = 1;
            this->row5col6->Name = L"row5col6";
            this->row5col6->Size = System::Drawing::Size(52, 52);
            this->row5col6->TabIndex = 15;
            this->row5col6->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            this->row5col6->TextChanged += gcnew System::EventHandler(this, &SudokuForm::row5col6_TextChanged);
            // 
            // row4col8
            // 
            this->row4col8->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->row4col8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 29.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->row4col8->Location = System::Drawing::Point(101, 50);
            this->row4col8->MaxLength = 1;
            this->row4col8->Name = L"row4col8";
            this->row4col8->Size = System::Drawing::Size(52, 52);
            this->row4col8->TabIndex = 14;
            this->row4col8->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            this->row4col8->TextChanged += gcnew System::EventHandler(this, &SudokuForm::row4col8_TextChanged);
            // 
            // row4col7
            // 
            this->row4col7->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->row4col7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 29.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->row4col7->Location = System::Drawing::Point(50, 50);
            this->row4col7->MaxLength = 1;
            this->row4col7->Name = L"row4col7";
            this->row4col7->Size = System::Drawing::Size(52, 52);
            this->row4col7->TabIndex = 13;
            this->row4col7->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            this->row4col7->TextChanged += gcnew System::EventHandler(this, &SudokuForm::row4col7_TextChanged);
            // 
            // row4col6
            // 
            this->row4col6->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->row4col6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 29.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->row4col6->Location = System::Drawing::Point(-1, 50);
            this->row4col6->MaxLength = 1;
            this->row4col6->Name = L"row4col6";
            this->row4col6->Size = System::Drawing::Size(52, 52);
            this->row4col6->TabIndex = 12;
            this->row4col6->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            this->row4col6->TextChanged += gcnew System::EventHandler(this, &SudokuForm::row4col6_TextChanged);
            // 
            // row3col8
            // 
            this->row3col8->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->row3col8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 29.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->row3col8->Location = System::Drawing::Point(101, 0);
            this->row3col8->MaxLength = 1;
            this->row3col8->Name = L"row3col8";
            this->row3col8->Size = System::Drawing::Size(52, 52);
            this->row3col8->TabIndex = 11;
            this->row3col8->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            this->row3col8->TextChanged += gcnew System::EventHandler(this, &SudokuForm::row3col8_TextChanged);
            // 
            // row3col7
            // 
            this->row3col7->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->row3col7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 29.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->row3col7->Location = System::Drawing::Point(50, 0);
            this->row3col7->MaxLength = 1;
            this->row3col7->Name = L"row3col7";
            this->row3col7->Size = System::Drawing::Size(52, 52);
            this->row3col7->TabIndex = 10;
            this->row3col7->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            this->row3col7->TextChanged += gcnew System::EventHandler(this, &SudokuForm::row3col7_TextChanged);
            // 
            // row3col6
            // 
            this->row3col6->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->row3col6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 29.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->row3col6->Location = System::Drawing::Point(-1, 0);
            this->row3col6->MaxLength = 1;
            this->row3col6->Name = L"row3col6";
            this->row3col6->Size = System::Drawing::Size(52, 52);
            this->row3col6->TabIndex = 9;
            this->row3col6->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            this->row3col6->TextChanged += gcnew System::EventHandler(this, &SudokuForm::row3col6_TextChanged);
            // 
            // lowerCenterBlock
            // 
            this->lowerCenterBlock->BackColor = System::Drawing::SystemColors::ControlLight;
            this->lowerCenterBlock->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->lowerCenterBlock->Controls->Add(this->row8col5);
            this->lowerCenterBlock->Controls->Add(this->row8col4);
            this->lowerCenterBlock->Controls->Add(this->row8col3);
            this->lowerCenterBlock->Controls->Add(this->row7col5);
            this->lowerCenterBlock->Controls->Add(this->row7col4);
            this->lowerCenterBlock->Controls->Add(this->row7col3);
            this->lowerCenterBlock->Controls->Add(this->row6col5);
            this->lowerCenterBlock->Controls->Add(this->row6col4);
            this->lowerCenterBlock->Controls->Add(this->row6col3);
            this->lowerCenterBlock->Location = System::Drawing::Point(178, 351);
            this->lowerCenterBlock->Name = L"lowerCenterBlock";
            this->lowerCenterBlock->Size = System::Drawing::Size(155, 155);
            this->lowerCenterBlock->TabIndex = 5;
            // 
            // row8col5
            // 
            this->row8col5->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->row8col5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 29.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->row8col5->Location = System::Drawing::Point(101, 101);
            this->row8col5->MaxLength = 1;
            this->row8col5->Name = L"row8col5";
            this->row8col5->Size = System::Drawing::Size(52, 52);
            this->row8col5->TabIndex = 17;
            this->row8col5->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            this->row8col5->TextChanged += gcnew System::EventHandler(this, &SudokuForm::row8col5_TextChanged);
            // 
            // row8col4
            // 
            this->row8col4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->row8col4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 29.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->row8col4->Location = System::Drawing::Point(50, 101);
            this->row8col4->MaxLength = 1;
            this->row8col4->Name = L"row8col4";
            this->row8col4->Size = System::Drawing::Size(52, 52);
            this->row8col4->TabIndex = 16;
            this->row8col4->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            this->row8col4->TextChanged += gcnew System::EventHandler(this, &SudokuForm::row8col4_TextChanged);
            // 
            // row8col3
            // 
            this->row8col3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->row8col3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 29.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->row8col3->Location = System::Drawing::Point(-1, 101);
            this->row8col3->MaxLength = 1;
            this->row8col3->Name = L"row8col3";
            this->row8col3->Size = System::Drawing::Size(52, 52);
            this->row8col3->TabIndex = 15;
            this->row8col3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            this->row8col3->TextChanged += gcnew System::EventHandler(this, &SudokuForm::row8col3_TextChanged);
            // 
            // row7col5
            // 
            this->row7col5->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->row7col5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 29.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->row7col5->Location = System::Drawing::Point(101, 50);
            this->row7col5->MaxLength = 1;
            this->row7col5->Name = L"row7col5";
            this->row7col5->Size = System::Drawing::Size(52, 52);
            this->row7col5->TabIndex = 14;
            this->row7col5->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            this->row7col5->TextChanged += gcnew System::EventHandler(this, &SudokuForm::row7col5_TextChanged);
            // 
            // row7col4
            // 
            this->row7col4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->row7col4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 29.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->row7col4->Location = System::Drawing::Point(50, 50);
            this->row7col4->MaxLength = 1;
            this->row7col4->Name = L"row7col4";
            this->row7col4->Size = System::Drawing::Size(52, 52);
            this->row7col4->TabIndex = 13;
            this->row7col4->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            this->row7col4->TextChanged += gcnew System::EventHandler(this, &SudokuForm::row7col4_TextChanged);
            // 
            // row7col3
            // 
            this->row7col3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->row7col3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 29.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->row7col3->Location = System::Drawing::Point(-1, 50);
            this->row7col3->MaxLength = 1;
            this->row7col3->Name = L"row7col3";
            this->row7col3->Size = System::Drawing::Size(52, 52);
            this->row7col3->TabIndex = 12;
            this->row7col3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            this->row7col3->TextChanged += gcnew System::EventHandler(this, &SudokuForm::row7col3_TextChanged);
            // 
            // row6col5
            // 
            this->row6col5->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->row6col5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 29.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->row6col5->Location = System::Drawing::Point(101, 0);
            this->row6col5->MaxLength = 1;
            this->row6col5->Name = L"row6col5";
            this->row6col5->Size = System::Drawing::Size(52, 52);
            this->row6col5->TabIndex = 11;
            this->row6col5->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            this->row6col5->TextChanged += gcnew System::EventHandler(this, &SudokuForm::row6col5_TextChanged);
            // 
            // row6col4
            // 
            this->row6col4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->row6col4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 29.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->row6col4->Location = System::Drawing::Point(50, 0);
            this->row6col4->MaxLength = 1;
            this->row6col4->Name = L"row6col4";
            this->row6col4->Size = System::Drawing::Size(52, 52);
            this->row6col4->TabIndex = 10;
            this->row6col4->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            this->row6col4->TextChanged += gcnew System::EventHandler(this, &SudokuForm::row6col4_TextChanged);
            // 
            // row6col3
            // 
            this->row6col3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->row6col3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 29.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->row6col3->Location = System::Drawing::Point(-1, 0);
            this->row6col3->MaxLength = 1;
            this->row6col3->Name = L"row6col3";
            this->row6col3->Size = System::Drawing::Size(52, 52);
            this->row6col3->TabIndex = 9;
            this->row6col3->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            this->row6col3->TextChanged += gcnew System::EventHandler(this, &SudokuForm::row6col3_TextChanged);
            // 
            // lowerRightBlock
            // 
            this->lowerRightBlock->BackColor = System::Drawing::SystemColors::ControlLight;
            this->lowerRightBlock->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->lowerRightBlock->Controls->Add(this->row8col8);
            this->lowerRightBlock->Controls->Add(this->row8col7);
            this->lowerRightBlock->Controls->Add(this->row8col6);
            this->lowerRightBlock->Controls->Add(this->row7col8);
            this->lowerRightBlock->Controls->Add(this->row7col7);
            this->lowerRightBlock->Controls->Add(this->row7col6);
            this->lowerRightBlock->Controls->Add(this->row6col8);
            this->lowerRightBlock->Controls->Add(this->row6col7);
            this->lowerRightBlock->Controls->Add(this->row6col6);
            this->lowerRightBlock->Location = System::Drawing::Point(334, 351);
            this->lowerRightBlock->Name = L"lowerRightBlock";
            this->lowerRightBlock->Size = System::Drawing::Size(155, 155);
            this->lowerRightBlock->TabIndex = 5;
            // 
            // row8col8
            // 
            this->row8col8->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->row8col8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 29.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->row8col8->Location = System::Drawing::Point(101, 101);
            this->row8col8->MaxLength = 1;
            this->row8col8->Name = L"row8col8";
            this->row8col8->Size = System::Drawing::Size(52, 52);
            this->row8col8->TabIndex = 17;
            this->row8col8->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            this->row8col8->TextChanged += gcnew System::EventHandler(this, &SudokuForm::row8col8_TextChanged);
            // 
            // row8col7
            // 
            this->row8col7->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->row8col7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 29.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->row8col7->Location = System::Drawing::Point(50, 101);
            this->row8col7->MaxLength = 1;
            this->row8col7->Name = L"row8col7";
            this->row8col7->Size = System::Drawing::Size(52, 52);
            this->row8col7->TabIndex = 16;
            this->row8col7->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            this->row8col7->TextChanged += gcnew System::EventHandler(this, &SudokuForm::row8col7_TextChanged);
            // 
            // row8col6
            // 
            this->row8col6->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->row8col6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 29.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->row8col6->Location = System::Drawing::Point(-1, 101);
            this->row8col6->MaxLength = 1;
            this->row8col6->Name = L"row8col6";
            this->row8col6->Size = System::Drawing::Size(52, 52);
            this->row8col6->TabIndex = 15;
            this->row8col6->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            this->row8col6->TextChanged += gcnew System::EventHandler(this, &SudokuForm::row8col6_TextChanged);
            // 
            // row7col8
            // 
            this->row7col8->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->row7col8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 29.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->row7col8->Location = System::Drawing::Point(101, 50);
            this->row7col8->MaxLength = 1;
            this->row7col8->Name = L"row7col8";
            this->row7col8->Size = System::Drawing::Size(52, 52);
            this->row7col8->TabIndex = 14;
            this->row7col8->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            this->row7col8->TextChanged += gcnew System::EventHandler(this, &SudokuForm::row7col8_TextChanged);
            // 
            // row7col7
            // 
            this->row7col7->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->row7col7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 29.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->row7col7->Location = System::Drawing::Point(50, 50);
            this->row7col7->MaxLength = 1;
            this->row7col7->Name = L"row7col7";
            this->row7col7->Size = System::Drawing::Size(52, 52);
            this->row7col7->TabIndex = 13;
            this->row7col7->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            this->row7col7->TextChanged += gcnew System::EventHandler(this, &SudokuForm::row7col7_TextChanged);
            // 
            // row7col6
            // 
            this->row7col6->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->row7col6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 29.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->row7col6->Location = System::Drawing::Point(-1, 50);
            this->row7col6->MaxLength = 1;
            this->row7col6->Name = L"row7col6";
            this->row7col6->Size = System::Drawing::Size(52, 52);
            this->row7col6->TabIndex = 12;
            this->row7col6->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            this->row7col6->TextChanged += gcnew System::EventHandler(this, &SudokuForm::row7col6_TextChanged);
            // 
            // row6col8
            // 
            this->row6col8->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->row6col8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 29.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->row6col8->Location = System::Drawing::Point(101, 0);
            this->row6col8->MaxLength = 1;
            this->row6col8->Name = L"row6col8";
            this->row6col8->Size = System::Drawing::Size(52, 52);
            this->row6col8->TabIndex = 11;
            this->row6col8->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            this->row6col8->TextChanged += gcnew System::EventHandler(this, &SudokuForm::row6col8_TextChanged);
            // 
            // row6col7
            // 
            this->row6col7->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->row6col7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 29.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->row6col7->Location = System::Drawing::Point(50, 0);
            this->row6col7->MaxLength = 1;
            this->row6col7->Name = L"row6col7";
            this->row6col7->Size = System::Drawing::Size(52, 52);
            this->row6col7->TabIndex = 10;
            this->row6col7->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            this->row6col7->TextChanged += gcnew System::EventHandler(this, &SudokuForm::row6col7_TextChanged);
            // 
            // row6col6
            // 
            this->row6col6->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
            this->row6col6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 29.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->row6col6->Location = System::Drawing::Point(-1, 0);
            this->row6col6->MaxLength = 1;
            this->row6col6->Name = L"row6col6";
            this->row6col6->Size = System::Drawing::Size(52, 52);
            this->row6col6->TabIndex = 9;
            this->row6col6->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
            this->row6col6->TextChanged += gcnew System::EventHandler(this, &SudokuForm::row6col6_TextChanged);
            // 
            // saveToolStripMenuItem
            // 
            this->saveToolStripMenuItem->Name = L"saveToolStripMenuItem";
            this->saveToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::S));
            this->saveToolStripMenuItem->Size = System::Drawing::Size(180, 22);
            this->saveToolStripMenuItem->Text = L"Save...";
            this->saveToolStripMenuItem->Click += gcnew System::EventHandler(this, &SudokuForm::saveToolStripMenuItem_Click);
            // 
            // SudokuForm
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->BackColor = System::Drawing::SystemColors::ControlDarkDark;
            this->ClientSize = System::Drawing::Size(509, 586);
            this->Controls->Add(this->lowerRightBlock);
            this->Controls->Add(this->lowerCenterBlock);
            this->Controls->Add(this->middleRightBlock);
            this->Controls->Add(this->middleCenterBlock);
            this->Controls->Add(this->upperRightBlock);
            this->Controls->Add(this->upperMiddleBlock);
            this->Controls->Add(this->lowerLeftBlock);
            this->Controls->Add(this->middleLeftBlock);
            this->Controls->Add(this->upperLeftBlock);
            this->Controls->Add(this->solveButton);
            this->Controls->Add(this->menuStrip1);
            this->MainMenuStrip = this->menuStrip1;
            this->Name = L"SudokuForm";
            this->Text = L"Michael Mott\'s Sudoku Solver!";
            this->menuStrip1->ResumeLayout(false);
            this->menuStrip1->PerformLayout();
            this->upperLeftBlock->ResumeLayout(false);
            this->upperLeftBlock->PerformLayout();
            this->middleLeftBlock->ResumeLayout(false);
            this->middleLeftBlock->PerformLayout();
            this->lowerLeftBlock->ResumeLayout(false);
            this->lowerLeftBlock->PerformLayout();
            this->upperMiddleBlock->ResumeLayout(false);
            this->upperMiddleBlock->PerformLayout();
            this->upperRightBlock->ResumeLayout(false);
            this->upperRightBlock->PerformLayout();
            this->middleCenterBlock->ResumeLayout(false);
            this->middleCenterBlock->PerformLayout();
            this->middleRightBlock->ResumeLayout(false);
            this->middleRightBlock->PerformLayout();
            this->lowerCenterBlock->ResumeLayout(false);
            this->lowerCenterBlock->PerformLayout();
            this->lowerRightBlock->ResumeLayout(false);
            this->lowerRightBlock->PerformLayout();
            this->ResumeLayout(false);
            this->PerformLayout();

        }
#pragma endregion
    private: System::Void setTileTextValue(System::Windows::Forms::TextBox^ pTextBox, 
        unsigned short row, unsigned short column)
    {
        unsigned short value;
        bool isInitialValue;

        puzzle->getTileValue(row, column, &value, &isInitialValue);
        ignoreInternalTextChange = true;
        if (value == 0)
        {
            pTextBox->Text = "";
        }
        else
        {
            pTextBox->Text = Convert::ToString(value);
        }
        ignoreInternalTextChange = false;
        if (isInitialValue)
        {
            pTextBox->ForeColor = System::Drawing::Color::Black;
        }
        else
        {
            pTextBox->ForeColor = System::Drawing::Color::Blue;
        }
    }
    private: System::Void populatePuzzleTiles()
    {
        // populate blank tiles from puzzle information
        this->setTileTextValue(this->row0col0, 0, 0);
        this->setTileTextValue(this->row0col1, 0, 1);
        this->setTileTextValue(this->row0col2, 0, 2);
        this->setTileTextValue(this->row0col3, 0, 3);
        this->setTileTextValue(this->row0col4, 0, 4);
        this->setTileTextValue(this->row0col5, 0, 5);
        this->setTileTextValue(this->row0col6, 0, 6);
        this->setTileTextValue(this->row0col7, 0, 7);
        this->setTileTextValue(this->row0col8, 0, 8);
        this->setTileTextValue(this->row1col0, 1, 0);
        this->setTileTextValue(this->row1col1, 1, 1);
        this->setTileTextValue(this->row1col2, 1, 2);
        this->setTileTextValue(this->row1col3, 1, 3);
        this->setTileTextValue(this->row1col4, 1, 4);
        this->setTileTextValue(this->row1col5, 1, 5);
        this->setTileTextValue(this->row1col6, 1, 6);
        this->setTileTextValue(this->row1col7, 1, 7);
        this->setTileTextValue(this->row1col8, 1, 8);
        this->setTileTextValue(this->row2col0, 2, 0);
        this->setTileTextValue(this->row2col1, 2, 1);
        this->setTileTextValue(this->row2col2, 2, 2);
        this->setTileTextValue(this->row2col3, 2, 3);
        this->setTileTextValue(this->row2col4, 2, 4);
        this->setTileTextValue(this->row2col5, 2, 5);
        this->setTileTextValue(this->row2col6, 2, 6);
        this->setTileTextValue(this->row2col7, 2, 7);
        this->setTileTextValue(this->row2col8, 2, 8);
        this->setTileTextValue(this->row3col0, 3, 0);
        this->setTileTextValue(this->row3col1, 3, 1);
        this->setTileTextValue(this->row3col2, 3, 2);
        this->setTileTextValue(this->row3col3, 3, 3);
        this->setTileTextValue(this->row3col4, 3, 4);
        this->setTileTextValue(this->row3col5, 3, 5);
        this->setTileTextValue(this->row3col6, 3, 6);
        this->setTileTextValue(this->row3col7, 3, 7);
        this->setTileTextValue(this->row3col8, 3, 8);
        this->setTileTextValue(this->row4col0, 4, 0);
        this->setTileTextValue(this->row4col1, 4, 1);
        this->setTileTextValue(this->row4col2, 4, 2);
        this->setTileTextValue(this->row4col3, 4, 3);
        this->setTileTextValue(this->row4col4, 4, 4);
        this->setTileTextValue(this->row4col5, 4, 5);
        this->setTileTextValue(this->row4col6, 4, 6);
        this->setTileTextValue(this->row4col7, 4, 7);
        this->setTileTextValue(this->row4col8, 4, 8);
        this->setTileTextValue(this->row5col0, 5, 0);
        this->setTileTextValue(this->row5col1, 5, 1);
        this->setTileTextValue(this->row5col2, 5, 2);
        this->setTileTextValue(this->row5col3, 5, 3);
        this->setTileTextValue(this->row5col4, 5, 4);
        this->setTileTextValue(this->row5col5, 5, 5);
        this->setTileTextValue(this->row5col6, 5, 6);
        this->setTileTextValue(this->row5col7, 5, 7);
        this->setTileTextValue(this->row5col8, 5, 8);
        this->setTileTextValue(this->row6col0, 6, 0);
        this->setTileTextValue(this->row6col1, 6, 1);
        this->setTileTextValue(this->row6col2, 6, 2);
        this->setTileTextValue(this->row6col3, 6, 3);
        this->setTileTextValue(this->row6col4, 6, 4);
        this->setTileTextValue(this->row6col5, 6, 5);
        this->setTileTextValue(this->row6col6, 6, 6);
        this->setTileTextValue(this->row6col7, 6, 7);
        this->setTileTextValue(this->row6col8, 6, 8);
        this->setTileTextValue(this->row7col0, 7, 0);
        this->setTileTextValue(this->row7col1, 7, 1);
        this->setTileTextValue(this->row7col2, 7, 2);
        this->setTileTextValue(this->row7col3, 7, 3);
        this->setTileTextValue(this->row7col4, 7, 4);
        this->setTileTextValue(this->row7col5, 7, 5);
        this->setTileTextValue(this->row7col6, 7, 6);
        this->setTileTextValue(this->row7col7, 7, 7);
        this->setTileTextValue(this->row7col8, 7, 8);
        this->setTileTextValue(this->row8col0, 8, 0);
        this->setTileTextValue(this->row8col1, 8, 1);
        this->setTileTextValue(this->row8col2, 8, 2);
        this->setTileTextValue(this->row8col3, 8, 3);
        this->setTileTextValue(this->row8col4, 8, 4);
        this->setTileTextValue(this->row8col5, 8, 5);
        this->setTileTextValue(this->row8col6, 8, 6);
        this->setTileTextValue(this->row8col7, 8, 7);
        this->setTileTextValue(this->row8col8, 8, 8);
    }

	private: System::Void solveButton_Click(System::Object^ sender, System::EventArgs^ e) {
        int retVal = puzzle->solve();
        if (retVal != Puzzle::PUZZLE_SOLVED)
        {
            MessageBox::Show("ERROR! Cannot solve puzzle! Need more information, or possibly invalid!");
        }
        else
        {
            populatePuzzleTiles();
        }
	}


private: System::Void clearPuzzleText(void) {
    ignoreInternalTextChange = true;
    row0col0->Text = "";
    row0col1->Text = "";
    row0col2->Text = "";
    row0col3->Text = "";
    row0col4->Text = "";
    row0col5->Text = "";
    row0col6->Text = "";
    row0col7->Text = "";
    row0col8->Text = "";
    row1col0->Text = "";
    row1col1->Text = "";
    row1col2->Text = "";
    row1col3->Text = "";
    row1col4->Text = "";
    row1col5->Text = "";
    row1col6->Text = "";
    row1col7->Text = "";
    row1col8->Text = "";
    row2col0->Text = "";
    row2col1->Text = "";
    row2col2->Text = "";
    row2col3->Text = "";
    row2col4->Text = "";
    row2col5->Text = "";
    row2col6->Text = "";
    row2col7->Text = "";
    row2col8->Text = "";
    row3col0->Text = "";
    row3col1->Text = "";
    row3col2->Text = "";
    row3col3->Text = "";
    row3col4->Text = "";
    row3col5->Text = "";
    row3col6->Text = "";
    row3col7->Text = "";
    row3col8->Text = "";
    row4col0->Text = "";
    row4col1->Text = "";
    row4col2->Text = "";
    row4col3->Text = "";
    row4col4->Text = "";
    row4col5->Text = "";
    row4col6->Text = "";
    row4col7->Text = "";
    row4col8->Text = "";
    row5col0->Text = "";
    row5col1->Text = "";
    row5col2->Text = "";
    row5col3->Text = "";
    row5col4->Text = "";
    row5col5->Text = "";
    row5col6->Text = "";
    row5col7->Text = "";
    row5col8->Text = "";
    row6col0->Text = "";
    row6col1->Text = "";
    row6col2->Text = "";
    row6col3->Text = "";
    row6col4->Text = "";
    row6col5->Text = "";
    row6col6->Text = "";
    row6col7->Text = "";
    row6col8->Text = "";
    row7col0->Text = "";
    row7col1->Text = "";
    row7col2->Text = "";
    row7col3->Text = "";
    row7col4->Text = "";
    row7col5->Text = "";
    row7col6->Text = "";
    row7col7->Text = "";
    row7col8->Text = "";
    row8col0->Text = "";
    row8col1->Text = "";
    row8col2->Text = "";
    row8col3->Text = "";
    row8col4->Text = "";
    row8col5->Text = "";
    row8col6->Text = "";
    row8col7->Text = "";
    row8col8->Text = "";
    ignoreInternalTextChange = false;
}
private: System::Void newToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
    this->clearPuzzleText();
    delete puzzle;
    puzzle = new Puzzle;
}
private: System::Void openToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
    Stream^ puzzleFile;
    OpenFileDialog^ openFileDialog = gcnew OpenFileDialog;
    Puzzle* newPuzzle = new Puzzle;
    
    openFileDialog->InitialDirectory = "c:\\";
    openFileDialog->Filter = "Puzzle Files (*.puz)|*.puz|All files (*.*)|*.*";
    openFileDialog->FilterIndex = 1;
    openFileDialog->RestoreDirectory = true;

    if (openFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK)
    {
        if ((puzzleFile = openFileDialog->OpenFile()) != nullptr)
        {
            int row = 0;
            int column = 0;
            int nextByte;
            while ((nextByte = puzzleFile->ReadByte()) != -1)
            {
                char c = (char)nextByte;
                if (c == ',')
                {
                    column++;
                }
                else if (c == '\r')
                {
                    /* nothing, wait for new line */
                }
                else if (c == '\n')
                {
                    row++;
                    column = 0;
                }
                else if ((c < '0') || (c > '9'))
                {
                    MessageBox::Show("ERROR! Invalid file formatting");
                    return;
                }
                else
                {
                    if (newPuzzle->setTileValue(row, column, (unsigned short)(c - '0')) != Tile::TILE_VALUE_SET)
                    {
                        MessageBox::Show("ERROR! Invalid value specified in file");
                        return;
                    }
                }
            }
            puzzleFile->Close();
        }
        else
        {
            MessageBox::Show("ERROR! Could not open file");
            return;
        }
        this->clearPuzzleText();
        delete puzzle;
        puzzle = newPuzzle;
        populatePuzzleTiles();
    }
}
private: System::Void saveToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
    Stream^ puzzleFile;
    SaveFileDialog^ saveFileDialog = gcnew SaveFileDialog;
    Puzzle* newPuzzle = new Puzzle;

    saveFileDialog->InitialDirectory = "c:\\";
    saveFileDialog->Filter = "Puzzle Files (*.puz)|*.puz|All files (*.*)|*.*";
    saveFileDialog->FilterIndex = 1;
    saveFileDialog->Title = "Save Puzzle";
    saveFileDialog->RestoreDirectory = true;

    if (saveFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK)
    {
        if (saveFileDialog->FileName != "")
        {
            unsigned short row, column, value;

            puzzleFile = saveFileDialog->OpenFile();

            for (row = 0; row < 9; ++row)
            {
                for (column = 0; column < 9; ++column)
                {
                    puzzle->getTileValue(row, column, &value, NULL);
                    puzzleFile->WriteByte((unsigned char)(value + '0'));
                    if (column != 9)
                    {
                        puzzleFile->WriteByte(',');
                    }
                }
                puzzleFile->WriteByte('\r');
                puzzleFile->WriteByte('\n');
            }
            puzzleFile->Close();
        }
        else
        {
            MessageBox::Show("ERROR! Could not save file");
            return;
        }
    }
}

private: System::Void exitToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
    this->Close();
}

       private: unsigned short convertTileInput(System::String^ text)
       {
           wchar_t c;
           if (text->Length != 1)
           {
               return 0;
           }

           c = Convert::ToChar(text);
           if ((c < '1') || (c > '9'))
           {
               return 0;
           }

           return ((unsigned short)(c - '0'));
       }

private: static bool ignoreInternalTextChange = false;

private: System::Void textChangedCommon(System::Windows::Forms::TextBox^ textBox, unsigned short row, unsigned short column)
{
    if (ignoreInternalTextChange)
    {
        return;
    }
    unsigned short value = convertTileInput(textBox->Text);
    if (value == 0)
    {
        ignoreInternalTextChange = true;
        textBox->Text = "";
        ignoreInternalTextChange = false;
        value = 0;
    }

    if (puzzle->setTileValue(row, column, value) == Tile::TILE_ERROR_INVALID_VALUE)
    {
        textBox->ForeColor = System::Drawing::Color::Red;
    }
    else
    {
        textBox->ForeColor = System::Drawing::Color::Black;
    }
}

private: System::Void row0col0_TextChanged(System::Object^ sender, System::EventArgs^ e) {
    textChangedCommon(row0col0, 0, 0);
}

private: System::Void row0col1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
    textChangedCommon(row0col1, 0, 1);
}

private: System::Void row0col2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
    textChangedCommon(row0col2, 0, 2);
}

private: System::Void row0col3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
    textChangedCommon(row0col3, 0, 3);
}

private: System::Void row0col4_TextChanged(System::Object^ sender, System::EventArgs^ e) {
    textChangedCommon(row0col4, 0, 4);
}

private: System::Void row0col5_TextChanged(System::Object^ sender, System::EventArgs^ e) {
    textChangedCommon(row0col5, 0, 5);
}

private: System::Void row0col6_TextChanged(System::Object^ sender, System::EventArgs^ e) {
    textChangedCommon(row0col6, 0, 6);
}

private: System::Void row0col7_TextChanged(System::Object^ sender, System::EventArgs^ e) {
    textChangedCommon(row0col7, 0, 7);
}

private: System::Void row0col8_TextChanged(System::Object^ sender, System::EventArgs^ e) {
    textChangedCommon(row0col8, 0, 8);
}

private: System::Void row1col0_TextChanged(System::Object^ sender, System::EventArgs^ e) {
    textChangedCommon(row1col0, 1, 0);
}

private: System::Void row1col1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
    textChangedCommon(row1col1, 1, 1);
}

private: System::Void row1col2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
    textChangedCommon(row1col2, 1, 2);
}

private: System::Void row1col3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
    textChangedCommon(row1col3, 1, 3);
}

private: System::Void row1col4_TextChanged(System::Object^ sender, System::EventArgs^ e) {
    textChangedCommon(row1col4, 1, 4);
}

private: System::Void row1col5_TextChanged(System::Object^ sender, System::EventArgs^ e) {
    textChangedCommon(row1col5, 1, 5);
}

private: System::Void row1col6_TextChanged(System::Object^ sender, System::EventArgs^ e) {
    textChangedCommon(row1col6, 1, 6);
}

private: System::Void row1col7_TextChanged(System::Object^ sender, System::EventArgs^ e) {
    textChangedCommon(row1col7, 1, 7);
}

private: System::Void row1col8_TextChanged(System::Object^ sender, System::EventArgs^ e) {
    textChangedCommon(row1col8, 1, 8);
}

private: System::Void row2col0_TextChanged(System::Object^ sender, System::EventArgs^ e) {
    textChangedCommon(row2col0, 2, 0);
}

private: System::Void row2col1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
    textChangedCommon(row2col1, 2, 1);
}

private: System::Void row2col2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
    textChangedCommon(row2col2, 2, 2);
}

private: System::Void row2col3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
    textChangedCommon(row2col3, 2, 3);
}

private: System::Void row2col4_TextChanged(System::Object^ sender, System::EventArgs^ e) {
    textChangedCommon(row2col4, 2, 4);
}

private: System::Void row2col5_TextChanged(System::Object^ sender, System::EventArgs^ e) {
    textChangedCommon(row2col5, 2, 5);
}

private: System::Void row2col6_TextChanged(System::Object^ sender, System::EventArgs^ e) {
    textChangedCommon(row2col6, 2, 6);
}

private: System::Void row2col7_TextChanged(System::Object^ sender, System::EventArgs^ e) {
    textChangedCommon(row2col7, 2, 7);
}

private: System::Void row2col8_TextChanged(System::Object^ sender, System::EventArgs^ e) {
    textChangedCommon(row2col8, 2, 8);
}

private: System::Void row3col0_TextChanged(System::Object^ sender, System::EventArgs^ e) {
    textChangedCommon(row3col0, 3, 0);
}

private: System::Void row3col1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
    textChangedCommon(row3col1, 3, 1);
}

private: System::Void row3col2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
    textChangedCommon(row3col2, 3, 2);
}

private: System::Void row3col3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
    textChangedCommon(row3col3, 3, 3);
}

private: System::Void row3col4_TextChanged(System::Object^ sender, System::EventArgs^ e) {
    textChangedCommon(row3col4, 3, 4);
}

private: System::Void row3col5_TextChanged(System::Object^ sender, System::EventArgs^ e) {
    textChangedCommon(row3col5, 3, 5);
}

private: System::Void row3col6_TextChanged(System::Object^ sender, System::EventArgs^ e) {
    textChangedCommon(row3col6, 3, 6);
}

private: System::Void row3col7_TextChanged(System::Object^ sender, System::EventArgs^ e) {
    textChangedCommon(row3col7, 3, 7);
}

private: System::Void row3col8_TextChanged(System::Object^ sender, System::EventArgs^ e) {
    textChangedCommon(row3col8, 3, 8);
}

private: System::Void row4col0_TextChanged(System::Object^ sender, System::EventArgs^ e) {
    textChangedCommon(row4col0, 4, 0);
}

private: System::Void row4col1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
    textChangedCommon(row4col1, 4, 1);
}

private: System::Void row4col2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
    textChangedCommon(row4col2, 4, 2);
}

private: System::Void row4col3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
    textChangedCommon(row4col3, 4, 3);
}

private: System::Void row4col4_TextChanged(System::Object^ sender, System::EventArgs^ e) {
    textChangedCommon(row4col4, 4, 4);
}

private: System::Void row4col5_TextChanged(System::Object^ sender, System::EventArgs^ e) {
    textChangedCommon(row4col5, 4, 5);
}

private: System::Void row4col6_TextChanged(System::Object^ sender, System::EventArgs^ e) {
    textChangedCommon(row4col6, 4, 6);
}

private: System::Void row4col7_TextChanged(System::Object^ sender, System::EventArgs^ e) {
    textChangedCommon(row4col7, 4, 7);
}

private: System::Void row4col8_TextChanged(System::Object^ sender, System::EventArgs^ e) {
    textChangedCommon(row4col8, 4, 8);
}

private: System::Void row5col0_TextChanged(System::Object^ sender, System::EventArgs^ e) {
    textChangedCommon(row5col0, 5, 0);
}

private: System::Void row5col1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
    textChangedCommon(row5col1, 5, 1);
}

private: System::Void row5col2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
    textChangedCommon(row5col2, 5, 2);
}

private: System::Void row5col3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
    textChangedCommon(row5col3, 5, 3);
}

private: System::Void row5col4_TextChanged(System::Object^ sender, System::EventArgs^ e) {
    textChangedCommon(row5col4, 5, 4);
}

private: System::Void row5col5_TextChanged(System::Object^ sender, System::EventArgs^ e) {
    textChangedCommon(row5col5, 5, 5);
}

private: System::Void row5col6_TextChanged(System::Object^ sender, System::EventArgs^ e) {
    textChangedCommon(row5col6, 5, 6);
}

private: System::Void row5col7_TextChanged(System::Object^ sender, System::EventArgs^ e) {
    textChangedCommon(row5col7, 5, 7);
}

private: System::Void row5col8_TextChanged(System::Object^ sender, System::EventArgs^ e) {
    textChangedCommon(row5col8, 5, 8);
}

private: System::Void row6col0_TextChanged(System::Object^ sender, System::EventArgs^ e) {
    textChangedCommon(row6col0, 6, 0);
}

private: System::Void row6col1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
    textChangedCommon(row6col1, 6, 1);
}

private: System::Void row6col2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
    textChangedCommon(row6col2, 6, 2);
}

private: System::Void row6col3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
    textChangedCommon(row6col3, 6, 3);
}

private: System::Void row6col4_TextChanged(System::Object^ sender, System::EventArgs^ e) {
    textChangedCommon(row6col4, 6, 4);
}

private: System::Void row6col5_TextChanged(System::Object^ sender, System::EventArgs^ e) {
    textChangedCommon(row6col5, 6, 5);
}

private: System::Void row6col6_TextChanged(System::Object^ sender, System::EventArgs^ e) {
    textChangedCommon(row6col6, 6, 6);
}

private: System::Void row6col7_TextChanged(System::Object^ sender, System::EventArgs^ e) {
    textChangedCommon(row6col7, 6, 7);
}

private: System::Void row6col8_TextChanged(System::Object^ sender, System::EventArgs^ e) {
    textChangedCommon(row6col8, 6, 8);
}

private: System::Void row7col0_TextChanged(System::Object^ sender, System::EventArgs^ e) {
    textChangedCommon(row7col0, 7, 0);
}

private: System::Void row7col1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
    textChangedCommon(row7col1, 7, 1);
}

private: System::Void row7col2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
    textChangedCommon(row7col2, 7, 2);
}

private: System::Void row7col3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
    textChangedCommon(row7col3, 7, 3);
}

private: System::Void row7col4_TextChanged(System::Object^ sender, System::EventArgs^ e) {
    textChangedCommon(row7col4, 7, 4);
}

private: System::Void row7col5_TextChanged(System::Object^ sender, System::EventArgs^ e) {
    textChangedCommon(row7col5, 7, 5);
}

private: System::Void row7col6_TextChanged(System::Object^ sender, System::EventArgs^ e) {
    textChangedCommon(row7col6, 7, 6);
}

private: System::Void row7col7_TextChanged(System::Object^ sender, System::EventArgs^ e) {
    textChangedCommon(row7col7, 7, 7);
}

private: System::Void row7col8_TextChanged(System::Object^ sender, System::EventArgs^ e) {
    textChangedCommon(row7col8, 7, 8);
}

private: System::Void row8col0_TextChanged(System::Object^ sender, System::EventArgs^ e) {
    textChangedCommon(row8col0, 8, 0);
}

private: System::Void row8col1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
    textChangedCommon(row8col1, 8, 1);
}

private: System::Void row8col2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
    textChangedCommon(row8col2, 8, 2);
}

private: System::Void row8col3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
    textChangedCommon(row8col3, 8, 3);
}

private: System::Void row8col4_TextChanged(System::Object^ sender, System::EventArgs^ e) {
    textChangedCommon(row8col4, 8, 4);
}

private: System::Void row8col5_TextChanged(System::Object^ sender, System::EventArgs^ e) {
    textChangedCommon(row8col5, 8, 5);
}

private: System::Void row8col6_TextChanged(System::Object^ sender, System::EventArgs^ e) {
    textChangedCommon(row8col6, 8, 6);
}

private: System::Void row8col7_TextChanged(System::Object^ sender, System::EventArgs^ e) {
    textChangedCommon(row8col7, 8, 7);
}

private: System::Void row8col8_TextChanged(System::Object^ sender, System::EventArgs^ e) {
    textChangedCommon(row8col8, 8, 8);
}

};
}
