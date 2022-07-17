#include "Euro.h"
#include"Dollar.h"
#include"MyForm.h"
#include"Functions.h"

System::Void vklad::Euro::оѕрограммеToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	MessageBox::Show("ѕриложение, в котором вы можете спрогнозировать свой вклад.", "»нформаци€ о приложении");
}

System::Void vklad::Euro::checkBox2_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
{
	Dollar^ form = gcnew Dollar();
	this->Hide();
	form->Show();
}

System::Void vklad::Euro::checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
{
	MyForm^ form = gcnew MyForm();
	this->Hide();
	form->Show();
}


void vklad::Euro::efrash() {

	if (checkBox4->Checked) {
		//	vklad::Euro::checkBox4->Checked == true;
		textBox1->Text = Convert::ToString((trackBar3->Value) * 100);

		if (trackBar1->Value == 1) {

			textBox2->Text = Convert::ToString(1) + " год";
			textBox3->Text = Convert::ToString(countingForPensionersEuro((trackBar3->Value * 100), 1)) + " И";
			textBox4->Text = Convert::ToString(countingForPensionersEuro((trackBar3->Value * 100), 1) - (trackBar3->Value) * 100) + " И";
			textBox5->Text = Convert::ToString(0.11) + "%";

		}
		if (trackBar1->Value == 2) {
			textBox2->Text = Convert::ToString(1.5) + " года";
			textBox3->Text = Convert::ToString(countingForPensionersEuro((trackBar3->Value * 100), 1.5)) + " И";
			textBox4->Text = Convert::ToString(countingForPensionersEuro((trackBar3->Value * 100), 1.5) - (trackBar3->Value) * 100) + " И";
			textBox5->Text = Convert::ToString(0.11) + "%";
		}
	}

	else {

		textBox1->Text = Convert::ToString((trackBar3->Value) * 100);
		if (trackBar1->Value == 1) {

			textBox2->Text = Convert::ToString(1) + " год";
			textBox3->Text = Convert::ToString(countingEuro((trackBar3->Value * 100), 1)) + " И";
			textBox4->Text = Convert::ToString(countingEuro((trackBar3->Value * 100), 1) - (trackBar3->Value) * 100) + " И";
			textBox5->Text = Convert::ToString(0.01) + "%";
		}
		if (trackBar1->Value == 2) {
			textBox2->Text = Convert::ToString(1.5) + " года";
			textBox3->Text = Convert::ToString(countingEuro((trackBar3->Value * 100), 1.5)) + " И";
			textBox4->Text = Convert::ToString(countingEuro((trackBar3->Value * 100), 1.5) - (trackBar3->Value) * 100) + " И";
			textBox5->Text = Convert::ToString(0.01) + "%";
		}
	}

}


System::Void vklad::Euro::trackBar2_Scroll(System::Object^ sender, System::EventArgs^ e)
{
	vklad::Euro::efrash();

	/*textBox1->Text = Convert::ToString((trackBar3->Value) * 100);
	if (trackBar1->Value == 1) {

		textBox3->Text = Convert::ToString(countingEuro((trackBar3->Value * 100), 1)) + " И";
		textBox4->Text = Convert::ToString(countingEuro((trackBar3->Value * 100), 1) - (trackBar3->Value) * 100) + " И";

	}
	if (trackBar1->Value == 2) {

		textBox3->Text = Convert::ToString(countingEuro((trackBar3->Value * 100), 1.5)) + " И";
		textBox4->Text = Convert::ToString(countingEuro((trackBar3->Value * 100), 1.5) - (trackBar3->Value) * 100) + " И";
	}*/

}

System::Void vklad::Euro::trackBar1_Scroll(System::Object^ sender, System::EventArgs^ e)
{

	vklad::Euro::efrash();
	//if (trackBar1->Value == 1) textBox2->Text = Convert::ToString(1) + " год";
	/*if (trackBar1->Value == 1) {

		textBox2->Text = Convert::ToString(1) + " год";
		textBox3->Text = Convert::ToString(countingEuro((trackBar3->Value * 100), 1)) + " И";
		textBox4->Text = Convert::ToString(countingEuro((trackBar3->Value * 100), 1) - (trackBar3->Value) * 100) + " И";

	}
	if (trackBar1->Value == 2) {
		textBox2->Text = Convert::ToString(1.5) + " года";
		textBox3->Text = Convert::ToString(countingEuro((trackBar3->Value * 100), 1.5)) + " И";
		textBox4->Text = Convert::ToString(countingEuro((trackBar3->Value * 100), 1.5) - (trackBar3->Value) * 100) + " И";
	} */
}

System::Void vklad::Euro::checkBox4_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
{
	vklad::Euro::efrash();

	/*if (checkBox4->Checked == true) {

		if (trackBar1->Value == 1) {

			textBox2->Text = Convert::ToString(1) + " год";
			textBox3->Text = Convert::ToString(countingForPensionersEuro((trackBar3->Value * 100), 1)) + " И";
			textBox4->Text = Convert::ToString(countingForPensionersEuro((trackBar3->Value * 100), 1) - (trackBar3->Value) * 100) + " И";
			textBox5->Text = Convert::ToString(0.11) + "%";

		}
		if (trackBar1->Value == 2) {
			textBox2->Text = Convert::ToString(1.5) + " года";
			textBox3->Text = Convert::ToString(countingForPensionersEuro((trackBar3->Value * 100), 1.5)) + " И";
			textBox4->Text = Convert::ToString(countingForPensionersEuro((trackBar3->Value * 100), 1.5) - (trackBar3->Value) * 100) + " И";
			textBox5->Text = Convert::ToString(0.11) + "%";
		}

	}

	else {

		if (trackBar1->Value == 1) {

			textBox2->Text = Convert::ToString(1) + " год";
			textBox3->Text = Convert::ToString(countingEuro((trackBar3->Value * 100), 1)) + " И";
			textBox4->Text = Convert::ToString(countingEuro((trackBar3->Value * 100), 1) - (trackBar3->Value) * 100) + " И";

		}
		if (trackBar1->Value == 2) {
			textBox2->Text = Convert::ToString(1.5) + " года";
			textBox3->Text = Convert::ToString(countingEuro((trackBar3->Value * 100), 1.5)) + " И";
			textBox4->Text = Convert::ToString(countingEuro((trackBar3->Value * 100), 1.5) - (trackBar3->Value) * 100) + " И";
		}

	}*/
	

}

System::Void vklad::Euro::помощьToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	MessageBox::Show("„тобы использовать повышенную ставку дл€ пенсионеров, сначала выберите услови€, а после поставьте галочку р€дом с соответствующим полем.", "ѕомощь");
}
