#include <iostream>

using namespace std;


int main()
{
	int dia;
	string n;

for (dia=1; dia<=12; dia++){

	switch(dia)
{
	case 1: n = " first "; break;
	case 2:	n = " second ";break;
	case 3: n = " third ";break;
	case 4: n = " fourth ";break;
	case 5: n = " fifth ";break;
	case 6: n = " sixth ";break;
	case 7:	n =  " seventh ";break;
	case 8: n =  " eighth ";break;
	case 9: n = " ninth ";break;
	case 10: n = " tenth ";break;
	case 11: n = " eleventh ";break;
	case 12: n = " twelfth ";break;


}

	cout << "On the" << n << "day of Christmas" << endl;
	
	
	
	

	switch(dia)

	{

	case 1: n = "my true love sent to me:\nA Partridge in a Pear Tree\n"; break;
	case 2:	n = "my true love sent to me:\nTwo Turtle Doves\n"
                "and a Partridge in a Pear Tree\n";break;
	case 3: n = "my true love sent to me:\nThree French Hens\n"
                "Two Turtle Doves\nand a Partridge in a Pear Tree\n";break;
	case 4: n = "my true love sent to me:\nFour Calling Birds*\n"
                "Three French Hens\nTwo Turtle Doves\n"
                "and a Partridge in a Pear Tree\n ";break;
	case 5: n = "my true love sent to me:\nFive Golden Rings\n"
                "Four Calling Birds\nThree French Hens\n"
                "Two Turtle Doves\n"
                "and a Partridge in a Pear Tree\n";break;
	case 6: n = "my true love sent to me:\nSix Geese a Laying\n"
                "Five Golden Rings\nFour Calling Birds\n"
                "Three French Hens\nTwo Turtle Doves\n"
                "and a Partridge in a Pear Tree\n";break;
	case 7:	n = "my true love sent to me:\nSeven Swans a Swimming\n"
                "Six Geese a Laying\nFive Golden Rings\n"
                "Four Calling Birds\nThree French Hens\n"
                "Two Turtle Doves\nand a Partridge in a Pear Tree";break;
	case 8: n = "my true love sent to me:\nEight Maids a Milking\n"
                "Seven Swans a Swimming\nSix Geese a Laying\n"
                "Five Golden Rings\nFour Calling Birds\n"
                "Three French Hens\nTwo Turtle Doves\n"
                "and a Partridge in a Pear Tree\n";break;
	case 9: n = "my true love sent to me:\n"
                "Nine Ladies Dancing\nEight Maids a Milking\n"
                "Seven Swans a Swimming\nSix Geese a Laying\n"
                "Five Golden Rings\nFour Calling Birds\n"
                "Three French Hens\n"
                "Two Turtle Doves\nand a Partridge in a Pear Tree";break;
	case 10: n = "my true love sent to me:\n"
                 "Ten Lords a Leaping Nine Ladies\n"
                 "Dancing Eight Maids a Milking\nSeven Swans a Swimming\n"
                 "Six Geese a Laying\nFive Golden Rings\n"
                 "Four Calling Birds\nThree French Hens\n"
                 "Two Turtle Doves\n"
                 "and a Partridge in a Pear Tree\n";break;
	case 11: n = "my true love sent to me:\n"
                 "Eleven Pipers Piping\nTen Lords a Leaping\n"
                 "Nine Ladies Dancing\nEight Maids a Milking\n"
                 "Seven Swans a Swimming\nSix Geese a Laying\n"
                 "Five Golden Rings\nFour Calling Birds\nThree French Hens\n"
                 "Two Turtle Doves\nand a Partridge in a Pear Tree\n";break;
	case 12: n = "my true love sent to me:\n12 Drummers Drumming\n"
                "Eleven Pipers Piping\nTen Lords a Leaping\n"
                "Nine Ladies Dancing\nEight Maids a Milking\n"
                "Seven Swans a Swimming\nSix Geese a Laying\n"
                "Five Golden Rings\nFour Calling Birds\nThree French Hens\n"
                "Two Turtle Doves\nand a Partridge in a Pear Tree\n";break;
} // switch

	cout << n << endl;

} // for
	return 0;
} // main
