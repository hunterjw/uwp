//---------------------------------------------------------------------
// Names:   John W Hunter, Scott Schroeder
// Project: Program 4
// Purpose: Main form file
//---------------------------------------------------------------------

#pragma once
#include <string>
#include <vector>
#include <msclr\marshal_cppstd.h>
using namespace msclr::interop;
using namespace std;

#include "Trial.h"
#include "TrialChildren.h"

namespace Prog5 {

   const int ITCONST = 1000;
   enum Structure { LIST, VECTOR, DEQUE, MULTISET, MULTIMAP };

   using namespace System;
   using namespace System::ComponentModel;
   using namespace System::Collections;
   using namespace System::Windows::Forms;
   using namespace System::Data;
   using namespace System::Drawing;

   /// <summary>
   /// Summary for Form1
   /// </summary>
   public ref class Form1 : public System::Windows::Forms::Form
   {
   public:

   private: System::Windows::Forms::Label^  ErrorLabel;
   private: System::Windows::Forms::ListBox^  listBox1;
   private: System::Windows::Forms::TextBox^  textBox1;
   private: System::Windows::Forms::Button^  button2;
   private: System::Windows::Forms::Button^  button3;
   public: 

   public: 
      Structure structure;
      int numIts;
      Trial::TrialType trialType;
      Form1(void)
      {
         structure = LIST;
         trialType = Trial::TrialType::FRONT_FRONT;
         numIts = ITCONST;
         InitializeComponent();
         //
         //TODO: Add the constructor code here
         //
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
   private: System::Windows::Forms::TrackBar^  trackBar1;
   protected: 
   private: System::Windows::Forms::Label^  label1;
   private: System::Windows::Forms::Label^  label2;
   private: System::Windows::Forms::Label^  label3;
   private: System::Windows::Forms::Label^  label4;
   private: System::Windows::Forms::Label^  label5;
   private: System::Windows::Forms::TrackBar^  trackBar2;
   private: System::Windows::Forms::Label^  label6;
   private: System::Windows::Forms::Label^  label7;
   private: System::Windows::Forms::Label^  label8;
   private: System::Windows::Forms::Label^  label9;
   private: System::Windows::Forms::Label^  label10;


   private: System::Windows::Forms::Label^  label11;

   private: System::Windows::Forms::Label^  label12;
   private: System::Windows::Forms::Label^  label13;
   private: System::Windows::Forms::Label^  label14;
   private: System::Windows::Forms::Button^  button1;
   private: System::Windows::Forms::TrackBar^  trackBar3;
   private: System::Windows::Forms::Label^  label15;
   private: System::Windows::Forms::Label^  label16;
   private: System::Windows::Forms::Label^  label17;
   private: System::Windows::Forms::Label^  label18;

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
         this->trackBar1 = (gcnew System::Windows::Forms::TrackBar());
         this->label1 = (gcnew System::Windows::Forms::Label());
         this->label2 = (gcnew System::Windows::Forms::Label());
         this->label3 = (gcnew System::Windows::Forms::Label());
         this->label4 = (gcnew System::Windows::Forms::Label());
         this->label5 = (gcnew System::Windows::Forms::Label());
         this->trackBar2 = (gcnew System::Windows::Forms::TrackBar());
         this->label6 = (gcnew System::Windows::Forms::Label());
         this->label7 = (gcnew System::Windows::Forms::Label());
         this->label8 = (gcnew System::Windows::Forms::Label());
         this->label9 = (gcnew System::Windows::Forms::Label());
         this->label10 = (gcnew System::Windows::Forms::Label());
         this->label11 = (gcnew System::Windows::Forms::Label());
         this->label12 = (gcnew System::Windows::Forms::Label());
         this->label13 = (gcnew System::Windows::Forms::Label());
         this->label14 = (gcnew System::Windows::Forms::Label());
         this->button1 = (gcnew System::Windows::Forms::Button());
         this->trackBar3 = (gcnew System::Windows::Forms::TrackBar());
         this->label15 = (gcnew System::Windows::Forms::Label());
         this->label16 = (gcnew System::Windows::Forms::Label());
         this->label17 = (gcnew System::Windows::Forms::Label());
         this->label18 = (gcnew System::Windows::Forms::Label());
         this->ErrorLabel = (gcnew System::Windows::Forms::Label());
         this->listBox1 = (gcnew System::Windows::Forms::ListBox());
         this->textBox1 = (gcnew System::Windows::Forms::TextBox());
         this->button2 = (gcnew System::Windows::Forms::Button());
         this->button3 = (gcnew System::Windows::Forms::Button());
         (cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->trackBar1))->BeginInit();
         (cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->trackBar2))->BeginInit();
         (cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->trackBar3))->BeginInit();
         this->SuspendLayout();
         // 
         // trackBar1
         // 
         this->trackBar1->Location = System::Drawing::Point(559, 26);
         this->trackBar1->Maximum = 4;
         this->trackBar1->Name = L"trackBar1";
         this->trackBar1->Orientation = System::Windows::Forms::Orientation::Vertical;
         this->trackBar1->Size = System::Drawing::Size(45, 217);
         this->trackBar1->TabIndex = 0;
         this->trackBar1->ValueChanged += gcnew System::EventHandler(this, &Form1::trackBar1_ValueChanged);
         // 
         // label1
         // 
         this->label1->AutoSize = true;
         this->label1->Location = System::Drawing::Point(600, 178);
         this->label1->Name = L"label1";
         this->label1->Size = System::Drawing::Size(38, 13);
         this->label1->TabIndex = 1;
         this->label1->Text = L"Vector";
         // 
         // label2
         // 
         this->label2->AutoSize = true;
         this->label2->Location = System::Drawing::Point(600, 221);
         this->label2->Name = L"label2";
         this->label2->Size = System::Drawing::Size(23, 13);
         this->label2->TabIndex = 2;
         this->label2->Text = L"List";
         // 
         // label3
         // 
         this->label3->AutoSize = true;
         this->label3->Location = System::Drawing::Point(600, 129);
         this->label3->Name = L"label3";
         this->label3->Size = System::Drawing::Size(39, 13);
         this->label3->TabIndex = 3;
         this->label3->Text = L"Deque";
         // 
         // label4
         // 
         this->label4->AutoSize = true;
         this->label4->Location = System::Drawing::Point(600, 83);
         this->label4->Name = L"label4";
         this->label4->Size = System::Drawing::Size(43, 13);
         this->label4->TabIndex = 4;
         this->label4->Text = L"Multiset";
         // 
         // label5
         // 
         this->label5->AutoSize = true;
         this->label5->Location = System::Drawing::Point(600, 36);
         this->label5->Name = L"label5";
         this->label5->Size = System::Drawing::Size(49, 13);
         this->label5->TabIndex = 5;
         this->label5->Text = L"Multimap";
         // 
         // trackBar2
         // 
         this->trackBar2->LargeChange = 1;
         this->trackBar2->Location = System::Drawing::Point(508, 26);
         this->trackBar2->Maximum = 5;
         this->trackBar2->Minimum = 1;
         this->trackBar2->Name = L"trackBar2";
         this->trackBar2->Orientation = System::Windows::Forms::Orientation::Vertical;
         this->trackBar2->RightToLeft = System::Windows::Forms::RightToLeft::No;
         this->trackBar2->Size = System::Drawing::Size(45, 217);
         this->trackBar2->TabIndex = 6;
         this->trackBar2->TickStyle = System::Windows::Forms::TickStyle::TopLeft;
         this->trackBar2->Value = 1;
         this->trackBar2->ValueChanged += gcnew System::EventHandler(this, &Form1::trackBar2_ValueChanged);
         // 
         // label6
         // 
         this->label6->AutoSize = true;
         this->label6->Location = System::Drawing::Point(466, 36);
         this->label6->Name = L"label6";
         this->label6->Size = System::Drawing::Size(36, 13);
         this->label6->TabIndex = 7;
         this->label6->Text = L"x5000";
         // 
         // label7
         // 
         this->label7->AutoSize = true;
         this->label7->Location = System::Drawing::Point(466, 83);
         this->label7->Name = L"label7";
         this->label7->Size = System::Drawing::Size(36, 13);
         this->label7->TabIndex = 8;
         this->label7->Text = L"x4000";
         // 
         // label8
         // 
         this->label8->AutoSize = true;
         this->label8->Location = System::Drawing::Point(466, 129);
         this->label8->Name = L"label8";
         this->label8->Size = System::Drawing::Size(36, 13);
         this->label8->TabIndex = 9;
         this->label8->Text = L"x3000";
         // 
         // label9
         // 
         this->label9->AutoSize = true;
         this->label9->Location = System::Drawing::Point(466, 178);
         this->label9->Name = L"label9";
         this->label9->Size = System::Drawing::Size(36, 13);
         this->label9->TabIndex = 10;
         this->label9->Text = L"x2000";
         // 
         // label10
         // 
         this->label10->AutoSize = true;
         this->label10->Location = System::Drawing::Point(466, 221);
         this->label10->Name = L"label10";
         this->label10->Size = System::Drawing::Size(36, 13);
         this->label10->TabIndex = 11;
         this->label10->Text = L"x1000";
         // 
         // label11
         // 
         this->label11->AutoSize = true;
         this->label11->Location = System::Drawing::Point(187, 8);
         this->label11->Name = L"label11";
         this->label11->Size = System::Drawing::Size(121, 13);
         this->label11->TabIndex = 14;
         this->label11->Text = L"Enter one string per line:";
         // 
         // label12
         // 
         this->label12->AutoSize = true;
         this->label12->Location = System::Drawing::Point(35, 8);
         this->label12->Name = L"label12";
         this->label12->Size = System::Drawing::Size(146, 13);
         this->label12->TabIndex = 16;
         this->label12->Text = L"Select which tests to preform:";
         // 
         // label13
         // 
         this->label13->AutoSize = true;
         this->label13->Location = System::Drawing::Point(449, 8);
         this->label13->Name = L"label13";
         this->label13->Size = System::Drawing::Size(104, 13);
         this->label13->TabIndex = 17;
         this->label13->Text = L"Number of iterations:";
         // 
         // label14
         // 
         this->label14->AutoSize = true;
         this->label14->Location = System::Drawing::Point(559, 8);
         this->label14->Name = L"label14";
         this->label14->Size = System::Drawing::Size(101, 13);
         this->label14->TabIndex = 18;
         this->label14->Text = L"STL Container type:";
         // 
         // button1
         // 
         this->button1->Location = System::Drawing::Point(452, 249);
         this->button1->Name = L"button1";
         this->button1->Size = System::Drawing::Size(208, 23);
         this->button1->TabIndex = 19;
         this->button1->Text = L"Run Test";
         this->button1->UseVisualStyleBackColor = true;
         this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
         // 
         // trackBar3
         // 
         this->trackBar3->LargeChange = 1;
         this->trackBar3->Location = System::Drawing::Point(12, 36);
         this->trackBar3->Maximum = 3;
         this->trackBar3->Name = L"trackBar3";
         this->trackBar3->Orientation = System::Windows::Forms::Orientation::Vertical;
         this->trackBar3->Size = System::Drawing::Size(45, 217);
         this->trackBar3->TabIndex = 20;
         this->trackBar3->ValueChanged += gcnew System::EventHandler(this, &Form1::trackBar3_ValueChanged);
         // 
         // label15
         // 
         this->label15->AutoSize = true;
         this->label15->Location = System::Drawing::Point(53, 39);
         this->label15->Name = L"label15";
         this->label15->Size = System::Drawing::Size(127, 13);
         this->label15->TabIndex = 21;
         this->label15->Text = L"Add Rear - Remove Rear";
         // 
         // label16
         // 
         this->label16->AutoSize = true;
         this->label16->Location = System::Drawing::Point(54, 230);
         this->label16->Name = L"label16";
         this->label16->Size = System::Drawing::Size(129, 13);
         this->label16->TabIndex = 22;
         this->label16->Text = L"Add Front - Remove Front";
         // 
         // label17
         // 
         this->label17->AutoSize = true;
         this->label17->Location = System::Drawing::Point(53, 169);
         this->label17->Name = L"label17";
         this->label17->Size = System::Drawing::Size(128, 13);
         this->label17->TabIndex = 23;
         this->label17->Text = L"Add Front - Remove Rear";
         // 
         // label18
         // 
         this->label18->AutoSize = true;
         this->label18->Location = System::Drawing::Point(52, 107);
         this->label18->Name = L"label18";
         this->label18->Size = System::Drawing::Size(128, 13);
         this->label18->TabIndex = 24;
         this->label18->Text = L"Add Rear - Remove Front";
         // 
         // ErrorLabel
         // 
         this->ErrorLabel->AutoSize = true;
         this->ErrorLabel->ForeColor = System::Drawing::Color::Red;
         this->ErrorLabel->Location = System::Drawing::Point(12, 254);
         this->ErrorLabel->Name = L"ErrorLabel";
         this->ErrorLabel->Size = System::Drawing::Size(262, 13);
         this->ErrorLabel->TabIndex = 25;
         this->ErrorLabel->Text = L"*** Mulimap and Multiset can only preform sorted tests.";
         this->ErrorLabel->Visible = false;
         // 
         // listBox1
         // 
         this->listBox1->FormattingEnabled = true;
         this->listBox1->Location = System::Drawing::Point(190, 26);
         this->listBox1->Name = L"listBox1";
         this->listBox1->Size = System::Drawing::Size(247, 199);
         this->listBox1->TabIndex = 26;
         // 
         // textBox1
         // 
         this->textBox1->Location = System::Drawing::Point(190, 227);
         this->textBox1->Name = L"textBox1";
         this->textBox1->Size = System::Drawing::Size(116, 20);
         this->textBox1->TabIndex = 27;
         // 
         // button2
         // 
         this->button2->Location = System::Drawing::Point(312, 225);
         this->button2->Name = L"button2";
         this->button2->Size = System::Drawing::Size(125, 23);
         this->button2->TabIndex = 28;
         this->button2->Text = L"Add to list";
         this->button2->UseVisualStyleBackColor = true;
         this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
         // 
         // button3
         // 
         this->button3->Location = System::Drawing::Point(312, 249);
         this->button3->Name = L"button3";
         this->button3->Size = System::Drawing::Size(125, 23);
         this->button3->TabIndex = 29;
         this->button3->Text = L"Remove selected item";
         this->button3->UseVisualStyleBackColor = true;
         this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
         // 
         // Form1
         // 
         this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
         this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
         this->ClientSize = System::Drawing::Size(678, 297);
         this->Controls->Add(this->button3);
         this->Controls->Add(this->button2);
         this->Controls->Add(this->textBox1);
         this->Controls->Add(this->listBox1);
         this->Controls->Add(this->ErrorLabel);
         this->Controls->Add(this->label18);
         this->Controls->Add(this->label17);
         this->Controls->Add(this->label16);
         this->Controls->Add(this->label15);
         this->Controls->Add(this->trackBar3);
         this->Controls->Add(this->button1);
         this->Controls->Add(this->label14);
         this->Controls->Add(this->label13);
         this->Controls->Add(this->label12);
         this->Controls->Add(this->label11);
         this->Controls->Add(this->label10);
         this->Controls->Add(this->label9);
         this->Controls->Add(this->label8);
         this->Controls->Add(this->label7);
         this->Controls->Add(this->label6);
         this->Controls->Add(this->trackBar2);
         this->Controls->Add(this->label5);
         this->Controls->Add(this->label4);
         this->Controls->Add(this->label3);
         this->Controls->Add(this->label2);
         this->Controls->Add(this->label1);
         this->Controls->Add(this->trackBar1);
         this->Name = L"Form1";
         this->Text = L"STL Container Tester";
         this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &Form1::Form1_FormClosed);
         this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
         (cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->trackBar1))->EndInit();
         (cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->trackBar2))->EndInit();
         (cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->trackBar3))->EndInit();
         this->ResumeLayout(false);
         this->PerformLayout();

      }
#pragma endregion

            //---------------------------------------------------------------------
            // button1_click handler
            // Method to handle the clicking of the "Run Test" button.
            //---------------------------------------------------------------------
   private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) 
            {
               vector<string> strings;
               for(int i = 0; i < listBox1->Items->Count; i++)
               {
                  listBox1->SetSelected( i, true );
                  String ^item = listBox1->SelectedItem->ToString();
                  string stdItem = marshal_as<std::string>(item); 
                  strings.push_back(stdItem);
               }

               Trial * temp;

               if (structure == Structure::DEQUE)
               {
                  temp = new DequeTrial(strings, numIts, trialType);
               }
               else if (structure == Structure::LIST)
               {
                  temp = new ListTrial(strings, numIts, trialType);
               }
               else if (structure == Structure::MULTIMAP)
               {
                  temp = new MultimapTrial(strings, numIts, trialType);
               }
               else if (structure == Structure::MULTISET)
               {
                  temp = new MultisetTrial(strings, numIts, trialType);
               }
               else if (structure == Structure::VECTOR)
               {
                  temp = new VectorTrial(strings, numIts, trialType);
               }

               int time = temp->Run();

               MessageBox::Show("Time (microseconds): " + time);
               delete temp;
            }

            //---------------------------------------------------------------------
            // trackbar1_ValueChanged handler
            // Method to handle the changing of the "Container" trackbar.
            //---------------------------------------------------------------------
   private: System::Void trackBar1_ValueChanged(System::Object^  sender, System::EventArgs^  e) 
            {
               structure = (Structure) trackBar1->Value;
               if (structure == Structure::MULTIMAP || structure == Structure::MULTISET)
               {
                  trackBar3->Enabled = false;
                  trialType = Trial::TrialType::SORTED;
                  ErrorLabel->Visible = true;
               }
               else
               {
                  trackBar3->Enabled = true;
                  trialType = (Trial::TrialType)trackBar3->Value;
                  ErrorLabel->Visible = false;
               }
            }

            //---------------------------------------------------------------------
            // trackbar2_ValueChanged handler
            // Method to handle the changing of the "Iteration" trackbar.
            //---------------------------------------------------------------------
   private: System::Void trackBar2_ValueChanged(System::Object^  sender, System::EventArgs^  e) 
            {
               numIts = ITCONST * trackBar2->Value;
            }

            //---------------------------------------------------------------------
            // tackbar3_valueChanged handler
            // Method to handle the changing of the "Test type" trackbar.
            //---------------------------------------------------------------------
   private: System::Void trackBar3_ValueChanged(System::Object^  sender, System::EventArgs^  e) 
            {
               trialType = (Trial::TrialType) trackBar3->Value;
            }

            //---------------------------------------------------------------------
            // button3_Click handler
            // Method to handle the click event on the "Remove" button.
            //---------------------------------------------------------------------
   private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) 
            {
               try
               {
                  listBox1->Items->RemoveAt(listBox1->SelectedIndex);
               }
               catch (...)
               {
               }
            }

            //---------------------------------------------------------------------
            // button2_Click handler
            // Method to handle the click event on the "Add" button.
            //---------------------------------------------------------------------
   private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) 
            {
               if (!textBox1->Text->IsNullOrWhiteSpace(textBox1->Text))
               {
                  listBox1->Items->Add(textBox1->Text);
                  textBox1->Clear();
               }
            }

            //---------------------------------------------------------------------
            // Form1_FormClosed handler
            // Method to handle the closing of the form.
            //---------------------------------------------------------------------
   private: System::Void Form1_FormClosed(System::Object^  sender, System::Windows::Forms::FormClosedEventArgs^  e) 
            {
               _CrtDumpMemoryLeaks();
            }
   private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
            }
};
}

