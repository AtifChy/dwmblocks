;//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
//	{"🐧 ", "uname -r",                                                    			0, 		1},
        {"📦 ", "check-updates", 				  				1800, 		2},
	{"🖥️ ", "cpu",									      	 2, 	 	 3},
//	{"🌡️ ", "sensors| awk '/Core 0/ { print $3 }'",             		           	 5,              0},
	{"🧠 ", "free -h | awk '/^Mem/ { print $3\"/\"$2 }'",		       			3,	    	5},
//	{"💽 ", "df -h / | awk ' /[0-9]/ { print $3\"/\"$2\"(\"$5\")\" }'", 			2000, 		11},
//	{"", "network-traffic", 								1, 		14},
	{"", "volume", 										0, 		7},
	{"", "weather", 									9000, 		13},
	{"📆 ", "clock",									30,		6},
//	{"😃", "emoji", 									0, 		8},
//	{"📋", "clipboard", 									0, 		9},
//	{"📴 |", "power", 									0, 		10},
};



//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;