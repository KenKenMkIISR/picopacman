# PACMAN for Raspberry Pi Pico
ラズベリーPi PicoにQVGAの液晶を接続して動作する本格的なパックマンです。  
小型スピーカーを接続して音声も鳴らせます。  
とてもシンプルな回路なので、簡単に製作することができます。  
液晶は240x320ドット、コントローラにILI9341を搭載したSPI接続のものに対応しています。  
<a href="https://youtu.be/7A9lEnYir20" target="_blank">動画はこちら</a>  
  
## 実行方法
ラズベリーPi PicoのBOOTSELボタンを押しながらPCのUSBポートに接続し、バイナリーファイル lcd-pacman.uf2 をラズベリーPi Picoにコピーしてください。  
  
## ソースプログラムのビルド方法
ソースプログラムのビルドにはRP2040に対応したコンパイラの他、CMake、pico-sdkが必要です。  
SDKが使用できる環境設定をした上で、ダウンロードした拡張子が.c .h .txt .cmakeのファイルを同じフォルダに入れてビルドしてください。  
![](picopacman1.JPG)  
![](picopacman2.JPG)  
![](picopacman_schematic.png)  
