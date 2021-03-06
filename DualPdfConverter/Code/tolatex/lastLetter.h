/*class containing the information about the last letter read from the pdf text*/

#ifndef LAST_LETTER_H
#define LAST_LETTER_H


class lastLetter{

	char letter;          //last character 
	double xCoord;        //x coordinate of the last character
	double yCoord;        //y coordinate of the last character
	double letterWidth;   //width of the last character

public:

	void setLastLetter(char let , double X , double Y , double W){
		letter = let;
		xCoord = X;
		yCoord = Y;
		letterWidth = W;
	}

	char getLetter(){
		return letter;
	}

	double getXCoord(){
		return xCoord;
	}

	double getYCoord(){
		return yCoord;
	}

	double getLetterWidth(){
		return letterWidth;
	}

	void setLetter(char c){
		letter = c;
	}

};

#endif
