



int process_pixel(int level, int adjust) {

	int new_level;
    int bright = level + adjust;

    if (bright > 255)
    {
        new_level = 255;
    } else {
        new_level = bright;
    }

	return new_level;
}
