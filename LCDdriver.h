#define VERTICAL 0
#define HORIZONTAL 1
#define LCD_ALIGNMENT VERTICAL
//#define LCD_ALIGNMENT HORIZONTAL

#if LCD_ALIGNMENT == VERTICAL
	#define X_RES 240 // 横方向解像度
	#define Y_RES 320 // 縦方向解像度
#else
	#define X_RES 320 // 横方向解像度
	#define Y_RES 240 // 縦方向解像度
#endif

#define LCD_CS 11 //GPIO11
#define LCD_DC 12 //GPIO12
#define LCD_RESET 13 //GPIO13
#define SPICH spi0

void LCD_WriteComm(unsigned char comm);
void LCD_WriteData(unsigned char data);
void LCD_WriteData2(unsigned short data);
void LCD_WriteDataN(unsigned char *b,int n);
void LCD_Init(void);
void LCD_SetCursor(unsigned short x, unsigned short y);
void LCD_Clear(unsigned short color);
void drawPixel(unsigned short x, unsigned short y, unsigned short color);
