#include <stdlib.h>
#include <stdio.h>

	 

typedef struct AsciiImageStruct {

	    char **data;
	    int rows;

} AsciiImage;

 

	 

	AsciiImage getSwordImage() {

	    static char *lines[] = {

	        "        _ ",
	        "       ( )",
	        "       |=|",
	        "       |=|",
	        "   /|__|_|__|\\ ",
	        "  (    ( )    )",
	        "   \\|\\/\\\"/\\/|/",
	        "     |  Y  |",
	        "     |  |  |",       
	        "     |  |  |",         
	        "    _|  |  | ",          
	        " __/ |  |  |\\ ",        
	        "/  \\ |  |  |  \\ ",      
	        "   __|  |  |   |  ",    
	        "/\\/  |  |  |   |\\  ",  
	        " <   +\\ |  |\\ />  \\  ",
	        "  >   + \\  | LJ    | ",
	        "       + \\|+  \\  < \\ ",
	        "  (O)      +    |    ) ",
	        "   |             \\  /\\ ",
	        " ( | )   (o)      \\/  )",
	        "_\\\\|//__( | )______)_/ ",
	        "        \\\\|// ",
};


    return (AsciiImage){ lines, sizeof(lines)/sizeof(char*) };

}

void printAsciiImage(AsciiImage img) {
	    int i;
	    for(i=0; i<img.rows; i++) {
	        printf("%s\n", img.data[i]);
	    }
	    printf("\n");
	}
	 
	 
	int main() {
	    printAsciiImage(getSwordImage());
	    return 0;
}
