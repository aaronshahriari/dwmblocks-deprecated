//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"", "/home/aaronshahriari/.local/share/dwmblocks/volume.sh",					0,		1},
	{"", "/home/aaronshahriari/.local/share/dwmblocks/battery.sh",					20,		2},
	{"", "/home/aaronshahriari/.local/share/dwmblocks/date.sh",					60,		0},
};

//sets delimiter between status commands. NULL character ('\0') means no delimiter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
