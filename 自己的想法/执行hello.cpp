/*
2015Äê4ÔÂ30ÈÕ14:35:08 
*/
#include<stdio.h>  
    main()  
    {  
    FILE * fp =fdopen(0,"w+");  
    fprintf(fp,"%s\n","hello!"); 
	    
	fclose(fp);  
    }  

