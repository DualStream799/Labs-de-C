

int process_pixel(int level, int adjust) {

	int new_level;

    if (level >= adjust) {
        new_level = 255;
    } else {
        new_level = 0;
    }

	return new_level;
}
