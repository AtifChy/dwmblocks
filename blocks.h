;//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
//	{"🐧 ", "uname -r",                                                    			0, 		14},
//	{"", "music", 										0, 		1},
//	{"📦 ", "timeout 2 check-updates", 				  			1800, 		2},
	{"🖥️ ", "cpu",									      	 2, 	 	 3},
//	{"🌡️ ", "sensors| awk '/Core 0/ { print $3 }'",             		           	 5,              0},
	{"🧠 ", "memory",		       							10,	    	4},
//	{"💽 ", "df -h / | awk ' /[0-9]/ { print $3\"/\"$2\"(\"$5\")\" }'", 			2000, 		12},
	{"", "network", 									2, 		5},
	{"", "volume", 										0, 		6},
//	{"", "weather", 									3600, 		13},
	{"📆 ", "clock",									30,		7},
};



//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
