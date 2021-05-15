void set_palette(unsigned char n,unsigned char b,unsigned char r,unsigned char g);
//グラフィック用カラーパレット設定

void pset(int x,int y,unsigned char c);
// (x,y)の位置にカラーcで点を描画

void putbmpmn(int x,int y,unsigned char m,unsigned char n,const unsigned char bmp[]);
// 横m*縦nドットのキャラクターを雍Wx,yに表示
// unsigned char bmp[m*n]配列に、単純にカラー番号を髞ﾗる
// カラー番号が0の部分は透明色として扱う

void clrbmpmn(int x,int y,unsigned char m,unsigned char n);
// 縦m*横nドットのキャラクター習雕
// カラー0で塗りつぶし

void gline(int x1,int y1,int x2,int y2,unsigned char c);
// (x1,y1)-(x2,y2)にカラーcで線分を描画

void hline(int x1,int x2,int y,unsigned char c);
// (x1,y)-(x2,y)への水平ラインを高速描画

void circle(int x0,int y0,unsigned int r,unsigned char c);
// (x0,y0)を中心に、半径r、カラーcの円を描画

void boxfill(int x1,int y1,int x2,int y2,unsigned char c);
// (x1,y1),(x2,y2)を対角線とするカラーcで塗られた長方形を描画

void circlefill(int x0,int y0,unsigned int r,unsigned char c);
// (x0,y0)を中心に、半径r、カラーcで塗られた円を描画

void putfont(int x,int y,unsigned char c,int bc,unsigned char n);
//8*8ドットのアルファベットフォント表示
//座標（x,y)、カラー番号c
//bc:バックグランドカラー、負数の場合無視
//n:文字番号

void printstr(int x,int y,unsigned char c,int bc,unsigned char *s);
//座標(x,y)からカラー番号cで文字列sを表示、bc:バックグランドカラー

void printnum(int x,int y,unsigned char c,int bc,unsigned int n);
//座標(x,y)にカラー番号cで数値nを表示、bc:バックグランドカラー

void printnum2(int x,int y,unsigned char c,int bc,unsigned int n,unsigned char e);
//座標(x,y)にカラー番号cで数値nを表示、bc:バックグランドカラー、e桁で表示

void init_graphic(void);
//グラフィックLCD使用開始

extern unsigned short palette[];
//パレット用配列
