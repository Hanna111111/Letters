///6) A C E G  G E C A  A C E G  G E C A  A C E G  G E C A  A C E G  G E C A
#include <iostream>
using namespace std;


int
main ()
{

  char letter = 65;
  int size;
  bool goUp = true;

  cout << "Please, enter the size of array: " << endl;
  cin >> size;

  char array[size];


  //input
  for (int i = 0; i < size; i++) {
      //внешний if
      if (goUp) {
	    
	    // внутренний if
	    if (letter <= 71) {
	      array[i] = letter;
	      letter = letter + 2;
	    } else {
	      letter = 71;
	      goUp = false;
	    }
	    
      }
      
      //внешний if
      if (goUp == false) {
          // внутренний if
	    if (letter > 65) {
	      array[i] = letter;
	      letter = letter - 2;
	      
	    } else {
	      array[i] = letter;
	      goUp = true;
	    }
          
      }

 
    }

  //output numbers in array
  for (int i = 0; i < size; i++)
    {
      cout << array[i] << " ";
    }


  return 0;
}
