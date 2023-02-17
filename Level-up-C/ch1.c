#include <stdio.h>

char *ordinal(int v)
{
if(v==11||v==12||v==13)
return("th");
 v%=10;
 if(v==1)
return("st");
 if(v==2)
return("nd");
 if(v==3)
return("rd");
 else
 return("th");

}

int main()
{
	int c;

	/* output a table of 100 numbers */
	for( c=1; c<=10; c++ )
	{
		printf("%3d%s\t%3d%s\t%3d%s\t%3d%s\t%3d%s\t%3d%s\t%3d%s\t%3d%s\t%d%s\t%d%s\n",
				c, ordinal(c),
				c+10, ordinal(c+10),
				c+20, ordinal(c+20),
				c+30, ordinal(c+30),
				c+40, ordinal(c+40),
				c+50, ordinal(c+50),
				c+60, ordinal(c+60),
				c+70, ordinal(c+70),
				c+80, ordinal(c+80),
				c+90, ordinal(c+90)
			  );
	}

	return(0);
}
