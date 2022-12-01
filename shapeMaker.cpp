#include <iostream>
using namespace std;

int main() {
	
	bool repeat = true;
	
	while (repeat)
	{
	    int shape, isFilled, length, precedence = 0;
	    string tryAgain;
	    
	    //gets input for shape
	    
	    while (true)
	    {
	        cout << "********************************************\n";
        	cout << "*                                          *\n";
        	cout << "*          Welcome to SHAPE MAKER          *\n";
        	cout << "*                                          *\n";
        	cout << "*           Enter type of shape            *\n";
        	cout << "*    1-Equilateral  Triangle 2-Square      *\n";
        	cout << "*                3-Circle                  *\n";
        	cout << "*    4-Right Triangle  5-Left Triangle     *\n";
        	cout << "*                                          *\n";
        	cout << "********************************************\n";
        	cout << "Your choice for shape: ";
        	
        	cin >>  shape;
        	
        	if (shape >= 1 && shape <=5)
        	{
        	    break;
        	}
        	
        	cout << "Choice out of selection range. Enter a valid number.\n";
	    }
	    
	    //gets input for length
	    
	    while (true)
	    {
        	cout << "********************************************\n";
        	cout << "*                                          *\n";
        	cout << "*           Please enter length            *\n";
        	cout << "*                                          *\n";
        	cout << "********************************************\n";
        	cout << "Your choice for length: ";
        	
        	cin >> length;
        	
        	if (length > 0)
        	{
        	    break;
        	}
        	
        	cout << "Length cannot be less than or equals 0. Enter a valid length.\n";
	    }
	    
	    //gets input for fill type
	    
	    while (true)
	    {
        	cout << "********************************************\n";
        	cout << "*                                          *\n";	
        	cout << "*          Please enter fill type          *\n";
        	cout << "*          1-filled  2-non-filled          *\n";
        	cout << "*                                          *\n";
        	cout << "********************************************\n";		
        	cout << "Your choice for fill type: ";
        	
        	cin >> isFilled;
        	
        	if (isFilled == 1 || isFilled == 2)
        	{
        	    break;
        	}
        	
        	cout << "Choice out of selection range. Enter a valid number.\n";
	    }
    
	    //handles drawing of equilateral triangles
        if (shape == 1)
	    {
	        if (isFilled == 1)
	        {
                for (int row = 0; row < length; row++)
                {
                    for (int space = row + 1; space < length; space++)
                    {
                        cout << " ";
                    }
                    for (int hash = row; hash >= 0; hash--)
                    {
                        cout << "#";
                    }
                    for (int hash = row; hash > 0; hash--)
                    {
                        cout << "#";
                    }
                    cout << "\n";
	            }
	        }
	        else if (isFilled == 2)
	        {
                for (int row = 0; row < length; row++)
                {
                    for (int space = row + 1; space < length; space++)
                    {
                        cout << " ";
                    }
                    for (int hash = row; hash >= 0; hash--)
                    {
                        if (hash == row)
                        {
                            if (precedence == length -1)
                            {
                                cout << " ";
                            }
                            else
                            {
                                cout << "#";
                            }
                        }
                        else if (precedence != length - 1)
                        {
                            cout << " ";
                        }
                        else
                        {
                            cout << "#";
                        }
                    }
            
                    for (int hash = row; hash > 0; hash--)
                    {
                        if (hash > 1)
                        {
                            if (precedence == length -1)
                            {
                                cout << "#";
                            }
                            else
                            {
                                cout << " ";
                            }
                        }
                        else
                        {
                            cout << "#";
                        }
                    }
                    cout << "\n";
                    precedence++;
	            }
	        }
        }
        
        //handles drawing of squares
        else if (shape == 2)
        {
            if (isFilled == 1)
            {
                for (int row = 0; row < length; row++)
                {
                    for (int hash = 0; hash < length; hash++)
                    {
                        cout << "#";
                    }
                    cout << "\n";
                }
            }
            else if (isFilled == 2)
            {
                for (int row = 0; row < length; row++)
                {
                    for (int hash = 0; hash < length; hash++)
                    {
                        if (precedence != 0 && precedence != length-1)
                        {
                            if (hash == 0 || hash == length-1)
                            {
                                cout << "#";
                            }
                            else
                            {
                                cout << " ";
                            }
                        }
                        else
                        {
                            cout << "#";
                        }
                    }
                    
                    cout << "\n";
                    precedence++;
                }
            }
        }
        
        //handles drawing of circles
        else if (shape == 3)
        {
            if (isFilled == 1)
            {
                for (int row = 0; row < length; row++)
                {
                    for (int hash = 0; hash < length; hash++)
                    {
                        if (precedence != 0 && precedence != length-1)
                        {
                            cout << "#";
                        }
                        else
                        {
                            if (hash == 0 || hash == length-1)
                            {
                                cout << " ";
                            }
                            else
                            {
                                cout << "#";
                            }
                        }
                    }
                    cout << "\n";
                    precedence++;
                }
            }
            else if (isFilled == 2)
            {
                for (int row = 0; row < length; row++)
                {
                    for (int hash = 0; hash < length; hash++)
                    {
                        if (precedence != 0 && precedence != length-1)
                        {
                            if (hash == 0 || hash == length-1)
                            {
                                cout << "#";
                            }
                            else
                            {
                                cout << " ";
                            }
                        }
                        else
                        {
                            if (hash == 0 || hash == length-1)
                            {
                                cout << " ";
                            }
                            else
                            {
                                cout << "#";
                            }
                        }
                    }
                    
                    cout << "\n";
                    precedence++;
                }
            }
        }
        
        //handles drawing right triangles
        else if (shape == 4)
        {
            if (isFilled == 1)
            {
                for (int row = 0; row < length; row++)
                {
                    for (int space = row + 1; space < length; space++)
                    {
                        cout << " ";
                    }
                    for (int hash = row; hash >= 0; hash--)
                    {
                        cout << "#";
                    }
                    cout << "\n";
                }
            }
            else if (isFilled == 2)
            {
                for (int row = 0; row < length; row++)
                {
                    for (int space = row + 1; space < length; space++)
                    {
                        cout << " ";
                    }
                    for (int hash = row; hash >= 0; hash--)
                    {
                        if (hash == row)
                        {
                            cout << "#";
                        }
                        else if (precedence != length - 1)
                        {
                            if (hash == 0)
                            {
                                cout << "#";
                            }
                            else
                            {
                                cout << " ";
                            }
                        }
                        else
                        {
                            cout << "#";
                        }
                    }
                    cout << "\n";
                    precedence++;
                }
            }
        }
        
        //handles drawing left triangles
        else if (shape == 5)
        {
            if (isFilled == 1)
            {
                for (int row = 0; row < length; row++)
                {
                    for (int hash = row; hash >= 0; hash--)
                    {
                        cout << "#";
                    }
                    cout << "\n";
                }
            }
            else if (isFilled == 2)
            {
                for (int row = 0; row < length; row++)
                {
                    for (int hash = row; hash >= 0; hash--)
                    {
                        if (hash == row || hash == length)
                        {
                            cout << "#";
                        }
                        else if (precedence != length - 1)
                        {
                            if (hash == 0)
                            {
                                cout << "#";
                            }
                            else
                            {
                                cout << " ";
                            }
                        }
                        else
                        {
                            cout << "#";
                        }
                    }
                    cout << "\n";
                    precedence++;
                }
            }
        }
        cout << "Would you like to try again? (y/n): ";
        cin >> tryAgain;
        if (tryAgain == "n" || tryAgain == "N")
        {
            repeat = false;
        }
    }   
}
