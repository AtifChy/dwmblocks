//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"🐧 ", "uname -r",                                                             	0, 		0},
        {"📦 ", "checkupdates | wc -l",  							1800, 		0},
	{"🖥️ ", "$HOME/.local/share/dwmblocks/cpu",					      	2, 		0},
	{"🌡️ ", "sensors | awk '/Core 0/ {print $3}'",                		          	 5,              0},
	{"🧠 ", "free -h | awk '/^Mem/ { print $3\"/\"$2 }'",		       			30,	    	0},
	{"💽 ", "df -h / | awk ' /[0-9]/ {print $3\"/\"$2\"(\"$5\")\"}'", 			1800, 		0},
	{"📆 ", "$HOME/.local/share/dwmblocks/clock",						60,		0},
};



//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
