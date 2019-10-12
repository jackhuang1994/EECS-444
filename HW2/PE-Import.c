#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int main(int argc, char *argv[]) {	

	
	if( access( "E:\\PE-1.txt", F_OK ) != -1 ) 
	{ // file exists
		FILE *fp; 
		int line_num = 1;
		int find_result = 0;
		char temp[512];
		char result[64];
		
		// open the file "PE-1.txt.txt" for writing
		fp = fopen("E:\\PE-1.txt", "r"); 
		
		while(fgets(temp, 512, fp) != NULL)
		{
			if((strstr(temp, "I want to learn PE file format!.")) != NULL)
			// if we find the string we want in the file
			{
				printf("Find a match on line: %d\n", line_num);
				// print out the finding information
				find_result++;
				strcat(result, temp);
				// append the string in file to the result
			}
			line_num++;
		}
		
		if(find_result == 0)
		{
			// Write to the file
			fprintf(fp, "I want to learn PE file format!.");
		}
		else
		{
			// print the content in the file to stdout
			printf(result);
		}

	
		// Close the file
		fclose(fp);
	} 
	else { // file doesn't exist
		printf("file PE-1.txt does not exist.\n");
    	// create a FILE typed pointer
		FILE *fp; 
		
		// open the file "name_of_file.txt" for writing
		fp = fopen("E:\\PE-1.txt", "w"); 
		
		// Write to the file
		fprintf(fp, "I want to learn PE file format!.");
	
		// Close the file
		fclose(fp);
	}
	return 0;
}
