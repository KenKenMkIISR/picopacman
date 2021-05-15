//グラフィック版パックマン用ヘッダーファイル for pic32mx150f/250f

//　方向の値
#define DIR_UP 0
#define DIR_RIGHT 1
#define DIR_DOWN 2
#define DIR_LEFT 3

//各種値の定義
#define MAPXSIZE 21 //通路の横サイズ
#define MAPYSIZE 27 //通路の縦サイズ
#define STAGEMAX 21 //データ定義されたステージ数の最大、以降は同一内容の繰り返し
#define FRUITTIME1 130 //各ステージの1つ目フルーツ出現時の残りえさ数
#define FRUITTIME2 55 //各ステージの2つ目フルーツ出現時の残りえさ数
#define FRUITX 10 //フルーツ表示位置X
#define FRUITY 15 //フルーツ表示位置Y
#define MONSTERHOUSEX 10 //モンスターハウスX座標
#define MONSTERHOUSEY 12 //モンスターハウスY座標
#define NAWABARIAKABEIX 15 //アカベイの縄張り目標X
#define NAWABARIAKABEIY 3 //アカベイの縄張り目標Y
#define NAWABARIPINKYX 1 //ピンキーの縄張り目標X
#define NAWABARIPINKYY 3 //ピンキーの縄張り目標Y
#define NAWABARIAOSUKEX 17 //アオスケの縄張り目標X
#define NAWABARIAOSUKEY 18 //アオスケの縄張り目標Y
#define NAWABARIGUZUTAX 3 //グズタの縄張り目標X
#define NAWABARIGUZUTAY 21 //グズタの縄張り目標Y
#define ONEWAY1X 9 //一方通行1のX座標
#define ONEWAY1Y 9 //一方通行1のY座標
#define ONEWAY2X 11 //一方通行2のX座標
#define ONEWAY2Y 9 //一方通行2のY座標
#define ONEWAY3X 9 //一方通行3のX座標
#define ONEWAY3Y 19 //一方通行3のY座標
#define ONEWAY4X 11 //一方通行4のX座標
#define ONEWAY4Y 19 //一方通行4のY座標
#define WARPX1 4 //ワープゾーンのX座標1
#define WARPX2 16 //ワープゾーンのX座標2
#define WARPY 13 //ワープゾーンのY座標
#define POWERCOOKIEX1 1
#define POWERCOOKIEY1 3
#define POWERCOOKIEX2 19
#define POWERCOOKIEY2 3
#define POWERCOOKIEX3 1
#define POWERCOOKIEY3 20
#define POWERCOOKIEX4 19
#define POWERCOOKIEY4 20

#define XWIDTH_PACMAN 14
#define YWIDTH_PACMAN 14
#define XWIDTH_MONSTER 14
#define YWIDTH_MONSTER 13
#define XWIDTH_SCORE 16
#define YWIDTH_SCORE 7

//各種キャラクターコード定義
#define CODE_WALL1 0x80
#define CODE_WALL2 0x8d
#define CODE_COOKIE 0x90
#define CODE_POWERCOOKIE 0x91
#define CODE_DOOR 0x8e

//マップ配列上の配置物定義
#define MAP_NONE 0 //何もなし
#define MAP_WALL 1 //壁
#define MAP_COOKIE 2 //えさ
#define MAP_POWERCOOKIE 3 //パワーえさ
#define MAP_FRUIT 4 //フルーツあり
#define MAP_DOOR 5 //ドア

//カラー定義
#define COLOR_WALL 11
#define COLOR_COOKIE 6
#define COLOR_POWERCOOKIE 13
#define COLOR_DOOR 7
#define COLOR_PACMAN 6
#define COLOR_AKABEI 2
#define COLOR_PINKY 10
#define COLOR_AOSUKE 5
#define COLOR_GUZUTA 9
#define COLOR_ORANGE 12
#define COLOR_MONSTERNUDE 14

// 各種時間長さ設定
#define TIMER_OIKAKE 1200 //追いかけモード時間
#define TIMER_NAWABARI 600 //縄張りモード時間
#define TIMER_FRUIT 600 //フルーツ表示時間
#define TIMER_HUNTEDSTOP 60 //イジケを食・ｽときの停止時間
#define TIMER_FRUITSCORE 120 //フルーツのスコア表示時間

// モンスターのモード（status）
#define NAWABARI 1
#define OIKAKE 2
#define IJIKE 3
#define MEDAMA 4
#define TAIKI 5
#define TAIKI2 6

// モンスター番号
#define AKABEI 0
#define AOSUKE 1
#define GUZUTA 2
#define PINKY 3

//_Character構造体定義
//パックマン、モンスター4匹のオブジェクト
typedef struct {
	unsigned short x; // x座標（下位8ビットは小数点以下）
	unsigned short y; // y座標（下位8ビットは小数点以下）
	unsigned short oldx; // 前回x座標（下位8ビットは小数点以下）
	unsigned short oldy; // 前回y座標（下位8ビットは小数点以下）
	unsigned short speed; // 移動速度
	unsigned char no; // モンスターの番号
	unsigned char status; // 現在のモード
	unsigned char dir; // 移動方向 0:上、1:右、2:下、3:左
	unsigned char turn; // 方向変更したフラグ、小数点以上の移動をするまでクリアしない
	unsigned char animvalue; // アニメーション値
	unsigned char animcount; // アニメーションカウンター、減らしていき0になったらアニメーション値を更新
	unsigned char animcount0; // アニメーションカウンター初期値
	unsigned short modecount; // 現在のモードのカウンター
} _Character;

//_Music構造体定義
typedef struct {
	unsigned char *p; //曲配列の演奏中の位置
	unsigned char count; //発音中の音カウンタ
	unsigned char stop; //0:演奏中、1:終了
} _Music;

extern const unsigned char FontData[]; //フォントパターン定義
extern const unsigned char Pacmanbmp[][14*14]; //パックマンビットマップ
extern const unsigned char Pacmandeadbmp[][14*14]; //パックマンビットマップ
extern const unsigned char Monsterbmp[][14*13]; //モンスタービットマップ
extern const unsigned char Ijikebmp[][14*13]; //イジケビットマップ
extern const unsigned char Medamabmp[][14*13]; //目玉ビットマップ
extern const unsigned char Fruitbmp[][12*14]; //フルーツビットマップ
extern const unsigned char Scorebmp[][16*7]; //スコアビットマップ
extern const unsigned char Bigpacbmp[][31*31]; //巨大パックマンビットマップ
extern const unsigned char Pinbmp[]; //白いピンビットマップ
extern const unsigned char Yabukebmp[][22*13]; //破けモンスタービットマップ
extern const unsigned char Yabuke2bmp[][14*13]; //破けモンスター2ビットマップ
extern const unsigned char Hadakabmp[][22*13]; //裸モンスタービットマップ
extern const unsigned char Titlelogobmp[][114]; //タイトルロゴビットマップ



