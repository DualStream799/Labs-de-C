



int process_pixel(int level, int adjust) {

	int new_level;
    int contrast = level * adjust;

    if (contrast > 255)
    {
        new_level = 255;
    } else {
        new_level = contrast;
    }

	return new_level;
}
