#include "Dollar.h"
#include"MyForm.h"
#include"Euro.h"
#include"Functions.h"





System::Void vklad::Dollar::checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
{
	MyForm^ form = gcnew MyForm();
	this->Hide();
	form->Show();
}

System::Void vklad::Dollar::����������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	MessageBox::Show("����������, � ������� �� ������ ��������������� ���� �����.", "���������� � ����������");
}

System::Void vklad::Dollar::checkBox3_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
{
	Euro^ form = gcnew Euro();
	this->Hide();
	form->Show();
}

void vklad::Dollar::efrash() {

	if (checkBox4->Checked) {
		
		textBox1->Text = Convert::ToString((trackBar2->Value) * 100);

		if (trackBar1->Value == 1) {

			textBox2->Text = Convert::ToString(6) + " �������";
			textBox3->Text = Convert::ToString(countingForPensionersDollar((trackBar2->Value * 100), 6)) + " $";
			textBox4->Text = Convert::ToString(countingForPensionersDollar((trackBar2->Value * 100), 6) - (trackBar2->Value) * 100) + " $";
			textBox5->Text = Convert::ToString(0.11) + "%";

		}
		if (trackBar1->Value == 2) {

			textBox2->Text = Convert::ToString(1) + " ���";
			textBox3->Text = Convert::ToString(countingForPensionersDollar((trackBar2->Value * 100), 1)) + " $";
			textBox4->Text = Convert::ToString(countingForPensionersDollar((trackBar2->Value * 100), 1) - (trackBar2->Value) * 100) + " $";
			textBox5->Text = Convert::ToString(0.11) + "%";
		}
	}

	else {

		textBox1->Text = Convert::ToString((trackBar2->Value) * 100);
		if (trackBar1->Value == 1) {

			textBox2->Text = Convert::ToString(6) + " �������";
			textBox3->Text = Convert::ToString(countingDollar((trackBar2->Value * 100), 6)) + " $";
			textBox4->Text = Convert::ToString(countingDollar((trackBar2->Value * 100), 6) - (trackBar2->Value) * 100) + " $";
			textBox5->Text = Convert::ToString(0.01) + "%";
		}
		if (trackBar1->Value == 2) {
			
			textBox2->Text = Convert::ToString(1) + " ���";
			textBox3->Text = Convert::ToString(countingDollar((trackBar2->Value * 100), 1)) + " $";
			textBox4->Text = Convert::ToString(countingDollar((trackBar2->Value * 100), 1) - (trackBar2->Value) * 100) + " $";
			textBox5->Text = Convert::ToString(0.01) + "%";
		}
	}

}


System::Void vklad::Dollar::trackBar2_Scroll(System::Object^ sender, System::EventArgs^ e)
{
	vklad::Dollar::efrash();

	/*textBox1->Text = Convert::ToString((trackBar2->Value) * 100);
	if (trackBar1->Value == 1) {

		textBox3->Text = Convert::ToString(countingDollar((trackBar2->Value * 100), 6)) + " $";
		textBox4->Text = Convert::ToString(countingDollar((trackBar2->Value * 100), 6) - (trackBar2->Value) * 100) + " $";

	}
	if (trackBar1->Value == 2) {

		textBox3->Text = Convert::ToString(countingDollar((trackBar2->Value * 100), 1)) + " $";
		textBox4->Text = Convert::ToString(countingDollar((trackBar2->Value * 100), 1) - (trackBar2->Value) * 100) + " $";
	}*/
}

System::Void vklad::Dollar::trackBar1_Scroll(System::Object^ sender, System::EventArgs^ e)
{

	vklad::Dollar::efrash();

	///*if (trackBar1->Value == 1) textBox2->Text = Convert::ToString(6) + " �������";
	//if (trackBar1->Value == 2) textBox2->Text = Convert::ToString(1) + " ���";*/
	//if (trackBar1->Value == 1) {

	//	textBox2->Text = Convert::ToString(6) + " �������";
	//	textBox3->Text = Convert::ToString(countingDollar((trackBar2->Value * 100), 6)) + " $";
	//	textBox4->Text = Convert::ToString(countingDollar((trackBar2->Value * 100), 6) - (trackBar2->Value) * 100) + " $";

	//}
	//if (trackBar1->Value == 2) {

	//	textBox2->Text = Convert::ToString(1) + " ���";
	//	textBox3->Text = Convert::ToString(countingDollar((trackBar2->Value * 100), 1)) + " $";
	//	textBox4->Text = Convert::ToString(countingDollar((trackBar2->Value * 100), 1) - (trackBar2->Value) * 100) + " $";
	//}
}

System::Void vklad::Dollar::checkBox4_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
{
	vklad::Dollar::efrash();

	/*if (checkBox4->Checked == true) {

		if (trackBar1->Value == 1) {

			textBox2->Text = Convert::ToString(6) + " �������";
			textBox3->Text = Convert::ToString(countingForPensionersDollar((trackBar2->Value * 100), 6)) + " $";
			textBox4->Text = Convert::ToString(countingForPensionersDollar((trackBar2->Value * 100), 6) - (trackBar2->Value) * 100) + " $";
			textBox5->Text = Convert::ToString(0.11) + "%";

		}
		if (trackBar1->Value == 2) {

			textBox2->Text = Convert::ToString(1) + " ���";
			textBox3->Text = Convert::ToString(countingForPensionersDollar((trackBar2->Value * 100), 1)) + " $";
			textBox4->Text = Convert::ToString(countingForPensionersDollar((trackBar2->Value * 100), 1) - (trackBar2->Value) * 100) + " $";
			textBox5->Text = Convert::ToString(0.11) + "%";
		}

	}

	else {

		if (trackBar1->Value == 1) {

			textBox2->Text = Convert::ToString(6) + " �������";
			textBox3->Text = Convert::ToString(countingDollar((trackBar2->Value * 100), 6)) + " $";
			textBox4->Text = Convert::ToString(countingDollar((trackBar2->Value * 100), 6) - (trackBar2->Value) * 100) + " $";

		}
		if (trackBar1->Value == 2) {

			textBox2->Text = Convert::ToString(1) + " ���";
			textBox3->Text = Convert::ToString(countingDollar((trackBar2->Value * 100), 1)) + " $";
			textBox4->Text = Convert::ToString(countingDollar((trackBar2->Value * 100), 1) - (trackBar2->Value) * 100) + " $";
		}

	}*/
	

}

System::Void vklad::Dollar::������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	MessageBox::Show("����� ������������ ���������� ������ ��� �����������, ������� �������� �������, � ����� ��������� ������� ����� � ��������������� �����.", "������");
}
