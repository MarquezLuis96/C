#pragma once


/*
								  ....
								.'' .'''
.                             .'   :
\\                          .:    :
 \\                        _:    :       ..----.._
  \\                    .:::.....:::.. .'         ''.
   \\                 .'  #-. .-######'     #        '.
	\\                 '.##'/ ' ################       :
	 \\                  #####################         :
	  \\               ..##.-.#### .''''###'.._        :
	   \\             :--:########:            '.    .' :
		\\..__...--.. :--:#######.'   '.         '.     :
		:     :  : : '':'-:'':'::        .         '.  .'
		'---'''..: :    ':    '..'''.      '.        :'
		   \\  :: : :     '      ''''''.     '.      .:
			\\ ::  : :     '            '.      '      :
			 \\::   : :           ....' ..:       '     '.
			  \\::  : :    .....####\\ .~~.:.             :
			   \\':.:.:.:'#########.===. ~ |.'-.   . '''.. :
				\\    .'  ########## \ \ _.' '. '-.       '''.
				:\\  :     ########   \ \      '.  '-.        :
			   :  \\'    '   #### :    \ \      :.    '-.      :
			  :  .'\\   :'  :     :     \ \       :      '-.    :
			 : .'  .\\  '  :      :     :\ \       :        '.   :
			 ::   :  \\'  :.      :     : \ \      :          '. :
			 ::. :    \\  : :      :    ;  \ \     :           '.:
			  : ':    '\\ :  :     :     :  \:\     :        ..'
				 :    ' \\ :        :     ;  \|      :   .'''
				 '.   '  \\:                         :.''
				  .:..... \\:       :            ..''
				 '._____|'.\\......'''''''.:..'''
							\\


  @  \@/ |@__ \@         __@   @/  @/ __@|
/|\  |   |    |\          /|   |  /|    |
/ \ / \ / \  / \          / \ /|\ / \  / \


*/


//HEADER


//CONSTS & TYPEDEFINITIONS
const short BUFFER = 100;
typedef char NAME[BUFFER];
typedef char WIZZARDTYPE[BUFFER];
typedef short HP;
typedef int POSITION[2];


class Wizzard
{
	private:
		NAME name;
		WIZZARDTYPE type;
		HP hp;
		POSITION pos;

	public:


		//DEFAULT CONSTRUCTOR
		Wizzard() {
			setName("Gandalf");
			setType("Maia");
			setHP(150);
			setPos(0, 0);
		}


		//FIRST CONSTRUCTOR
		Wizzard(const char* name, const char* type) {
			setName(name);
			setType(type);

			if (type == "Maia") {
				setHP(150);
			}
			else {
				setHP(100);
			}

			setPos(0, 0);

		}


		//SETTERS
		void setName(const char* n) {
			*name = *n;
		}


		void setType(const char* t) {
			*type = *t;
		}


		void setHP(short h) {
			hp = h;
		}


		void setPos(int i, int j) {
			pos[0] = i;
			pos[1] = j;
		}


		//GETTERS
		char* getName() {
			return name;
		}


		char* getType() {
			return type;
		}


		short getHP() {
			return hp;
		}


		int* getPos() {
			return pos;
		}

};