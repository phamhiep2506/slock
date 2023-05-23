/* user and group to drop privileges to */
static const char *user  = "nobody";
static const char *group = "nogroup";

static const char *colorname[NUMCOLS] = {
    // Theme Gruvbox
	[INIT] =   "#1D2021",     /* after initialization */
	[INPUT] =  "#005577",     /* during input */
	[FAILED] = "#CC241D",     /* wrong password */
};

/* lock screen opacity */
static const float alpha = 0.5;

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;

/* default message */
static const char * message = "Enter password to unlock";

/* text color */
static const char * text_color = "#EBDBB2";

/* text size (must be a valid size) */
static const char * font_name = "-misc-dejavu sans mono-medium-r-normal--0-0-0-0-m-0-iso10646-1";
