  #include <allegro.h>
 #include <stdio.h>
//funcões
void init();
void deinit();

int colidir (int Ax,int  Ay, int Bx,int  By,int  Aw,int  Ah,int Bw,int Bh); 

int main() 

{

BITMAP *buffer, *flash,*comida ,*comida2,*comida3,*comida4,*comida5,*comida6,*comida7,*comida8 ;	
//iniciação
allegro_init();
install_timer();
install_keyboard();
set_color_depth(32);
set_gfx_mode(GFX_AUTODETECT_WINDOWED, 500, 672,0,0) ;
set_window_title("snake flash");

// variaveis locais
int facex = 100, facey = 100;
int comidax = 200, comiday = 200;
int x =0 , y =0;
int coisa = 0;
int velocidademaca = 1;
int p = 0;
char string [30] = "voce perdeu";

//(imagens, BITMAP)
 buffer = create_bitmap( 500, 672);
 flash = load_bitmap("flash4.bmp",NULL);
 comida = load_bitmap("raioamarelo.bmp",NULL);
 comida2 = load_bitmap("raioamarelo.bmp",NULL);
 comida3 = load_bitmap("raioamarelo.bmp",NULL);
 comida4 = load_bitmap("raioamarelo.bmp",NULL);
 comida5 = load_bitmap("raioamarelo.bmp",NULL);
 comida6 = load_bitmap("raioamarelo.bmp",NULL);
 comida7 = load_bitmap("raioamarelo.bmp",NULL);
 comida8 = load_bitmap("raioamarelo.bmp",NULL);


 struct caixa{ int x, y;};
//estruturas box
 struct caixa box1, box2, box3, box4, box5, box6, box7, box8, box9;
 int cor = 255;
 box1.x = 250; box1.y =640;
 box2.x = 100; box2.y = -150;
 box3.x = 200; box3.y = -300;
 box4.x = 300; box4.y = -500;
 box5.x = 350; box5.y = -700;
 box6.x = 100; box6.y = -900;
 box7.x = 200; box7.y = -1100;
 box8.x = 300; box8.y = -1300;
 box9.x = 350; box9.y = -1400;
	while (!key[KEY_ESC] && !p  ) {
		//Queda dos raios
					if(box5.y < SCREEN_H){
						box2.y += velocidademaca;
						box3.y += velocidademaca;
						box4.y += velocidademaca;
						box5.y += velocidademaca;
						box6.y += velocidademaca;
						box7.y += velocidademaca;
						box8.y += velocidademaca;
						box9.y += velocidademaca;
						if (box2.x = 300);
						printf(":%s", string);
						}
	if (colidir(box1.x, box1.y, box2.x, box2.y, 40, 40, 40, 40)) cor = 100	;//colisao da box 2
	else cor = 200;
	
	if (box2.y >= 672 )
	p = 1 ;
	
	
	  
	
	if (box2.x + 40 > box1.x && box2.x < box1.x + 40 && box2.y + 40 > box1.y && box2.y < box1.y + 40 ){ 
               box2.x = 150;
               box2.y = -99;
             
              
	}

	
	
	
	
	
	
	 if (colidir(box1.x, box1.y, box3.x, box3.y, 40, 40, 40, 40)) cor = 200	;//colisao da box 3
	else cor = 150;  
	
	
	if (box3.y >= 672 )
	p = 1 ;
	
	
 
	if (box3.x + 40 > box1.x && box3.x < box1.x + 40 && box3.y + 40 > box1.y && box3.y < box1.y + 40 ){ //colisao da box 3
               box3.x = 300;
               box3.y = -399;
                 
              
				}
			
	 
	 
	 
	 if (colidir(box1.x, box1.y, box4.x, box4.y, 40, 40, 40, 40)) cor = 200	;//colisao da box 4
	else cor = 150; 
	
	
	if (box4.y >= 672 )
	p = 1 ;
	
	 
 
	if (box4.x + 40 > box1.x && box4.x < box1.x + 40 && box4.y + 40 > box1.y && box4.y < box1.y + 40 ){ 
               box4.x = 200;
               box4.y = -199;
               
			     
                   
			}
			
			
			
			
			
	if (colidir(box1.x, box1.y, box5.x, box5.y, 40, 40, 40, 40)) cor = 200	;//colisao da box 5
	else cor = 150;
	
	
	if (box5.y >= 672 )
	p = 1 ;
	  
 
	if (box5.x + 40 > box1.x && box5.x < box1.x + 40 && box5.y + 40 > box1.y && box5.y < box1.y + 40 ){  
               box5.x = 250;
               box5.y = -299;
			    
                 }
                 if (colidir(box1.x, box1.y, box6.x, box6.y, 40, 40, 40, 40)) cor = 100	;//colisao da box 6
	else cor = 200;
	
	if (box6.y >= 672 )
	p = 1 ;
	
	
	  
	
	if (box6.x + 40 > box1.x && box6.x < box1.x + 40 && box6.y + 40 > box1.y && box6.y < box1.y + 40 ){ 
               box6.x = 150;
               box6.y = -499;
             
              
	}

	
	
	
	
	
	
	 if (colidir(box1.x, box1.y, box7.x, box7.y, 40, 40, 40, 40)) cor = 200	;//colisao da box 7
	else cor = 150;  
	
	
	if (box7.y >= 672 )
	p = 1 ;
	
	
 
	if (box7.x + 40 > box1.x && box7.x < box1.x + 40 && box7.y + 40 > box1.y && box7.y < box1.y + 40 ){
               box7.x = 300;
               box7.y = -599;
                 
              
				}
			
	 
	 
	 
	 if (colidir(box1.x, box1.y, box8.x, box8.y, 40, 40, 40, 40)) cor = 200	;//colisao da box 8
	else cor = 150; 
	
	
	if (box8.y >= 672 )
	p = 1 ;
	
	 
 
	if (box8.x + 40 > box1.x && box8.x < box1.x + 40 && box8.y + 40 > box1.y && box8.y < box1.y + 40 ){ 
               box8.x = 200;
               box8.y = -699;
               
			     
                   
			}
			
			
			
			
			
	if (colidir(box1.x, box1.y, box9.x, box9.y, 40, 40, 40, 40)) cor = 200	;//colisao da box 9
	else cor = 150;
	
	
	if (box9.y >= 672 )
	p = 1 ;
	  
 
	if (box9.x + 40 > box1.x && box9.x < box1.x + 40 && box9.y + 40 > box1.y && box9.y < box1.y + 40 ){  
               box9.x = 250;
               box9.y = -799;
			    
                 }
                 
	
		   
	 (buffer, box2.x, box2.y, box2.x + 40, box2.y + 40, makecol(255,cor,255));
     (buffer, box1.x, box1.y, box1.x + 40, box1.y + 40, makecol(200,100,20));
     (buffer, box3.x, box3.y, box3.x + 40, box3.y + 40, makecol(200,100,20));
     (buffer, box4.x, box4.y, box4.x + 40, box4.y + 40, makecol(200,100,20));
     (buffer, box5.x, box5.y, box5.x + 40, box5.y + 40, makecol(200,100,20));
     (buffer, box6.x, box6.y, box6.x + 40, box6.y + 40, makecol(200,100,20));
     (buffer, box7.x, box7.y, box7.x + 40, box7.y + 40, makecol(200,100,20));
     (buffer, box8.x, box8.y, box8.x + 40, box8.y + 40, makecol(200,100,20));
     (buffer, box9.x, box9.y, box9.x + 40, box9.y + 40, makecol(200,100,20));
//MOVIMENTAÇAO DO FLASH     
    if (key[KEY_RIGHT]&& box1.x<=420){box1.x += 1; }
	if (key[KEY_LEFT]&& box1.x>=-10) {box1.x -= 1;   }
	if (key[KEY_UP]&& box1.y>=-02)   {box1.y -= 1;  }
	if (key[KEY_DOWN]&& box1.y<=620){box1.y += 1; }

//SPRITES
draw_sprite (buffer,comida8, box9.x, box9.y);		
 draw_sprite (buffer,comida7, box8.x, box8.y);		
 draw_sprite (buffer,comida6, box7.x, box7.y);	
 draw_sprite (buffer,comida5, box6.x, box6.y);   
draw_sprite (buffer,comida4, box5.x, box5.y);		
 draw_sprite (buffer,comida3, box4.x, box4.y);		
 draw_sprite (buffer,comida2, box3.x, box3.y);	
 draw_sprite (buffer,comida, box2.x, box2.y);   
 draw_sprite (buffer,flash, box1.x, box1.y);
 
 
 draw_sprite (screen, buffer, 0, 0);
 rest(5) ;
 clear (buffer);
 
  
	}	

destroy_bitmap(buffer);

destroy_bitmap(flash);
	
	deinit();
	
	return 0;
}
END_OF_MAIN()
int colidir (int Ax,int  Ay, int Bx,int  By,int  Aw,int  Ah,int Bw,int Bh) {

if (Ax + Aw > Bx  && Ax < Bx + Bw && Ay + Ah > By && Ay < By + Bh) return 1;
return 0;
}
void init() {
	int depth, res;
	allegro_init();
	depth = desktop_color_depth();
	if (depth == 0) depth = 32;
	set_color_depth(depth);
	res = set_gfx_mode(GFX_AUTODETECT_WINDOWED,  500, 672, 0, 0);
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
