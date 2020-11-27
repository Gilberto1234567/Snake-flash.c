 #include <allegro.h>

void init();
void deinit();

int main() {
	

	allegro_init();
install_timer();
install_keyboard();
set_color_depth(32);
set_gfx_mode(GFX_AUTODETECT_WINDOWED,744,672,0,0) ;
set_window_title("snake flash");
int x = 100, y = 100;
BITMAP* buffer = create_bitmap(744,672);
BITMAP* boneco1 = load_bitmap("flash1.bmp",NULL);
BITMAP* boneco2 = load_bitmap("flash2.bmp",NULL);
BITMAP* boneco3 = load_bitmap("flash3.bmp",NULL);
BITMAP* face = load_bitmap("flash4.bmp",NULL);
BITMAP* face1 = load_bitmap("flash4.bmp",NULL);
BITMAP* fundo = load_bitmap("image.bmp",NULL);
	while (!key[KEY_ESC]) {
		/* put your code here */
    if (key[KEY_RIGHT]&& x<=580){x += 1; face = boneco3;}
	if (key[KEY_LEFT]&& x>=-100) {x -= 1;  face = boneco2;}
	if (key[KEY_UP]&& y>=-90)   {y -= 1; face = face1;}
	if (key[KEY_DOWN]&& y<=510){y += 1; face = boneco1;}
    
 
 

 draw_sprite(buffer, fundo, 0, 0);
 draw_sprite(buffer, face, 100 + x, 100 + y);
 draw_sprite (screen, buffer, 0, 0);
 rest(10) ;
 clear (buffer);
 
  
	}
destroy_bitmap(fundo);
destroy_bitmap(buffer);
destroy_bitmap(boneco1);
destroy_bitmap(boneco2);
destroy_bitmap(boneco3);
destroy_bitmap(face);
	deinit();
	return 0;
}
END_OF_MAIN()

void init() {
	int depth, res;
	allegro_init();
	depth = desktop_color_depth();
	if (depth == 0) depth = 32;
	set_color_depth(depth);
	res = set_gfx_mode(GFX_AUTODETECT_WINDOWED, 640, 480, 0, 0);
	if (res != 0) {
		allegro_message(allegro_error);
		exit(-1);
	}

	install_timer();
	install_keyboard();
	install_mouse();
	/* add other initializations here */
}

void deinit() {
	clear_keybuf();
	/* add other deinitializations here */
}
