#### Mục lục
1. [Giới thiệu](#gioi-thieu)
2. [Tính năng](#tinh-nang)
3. [Cách chơi](#choi)
4. [Cài đặt](#cai-dat)
5. [Hướng phát triển](#phat-trien)
6. [Đóng góp](#dong-gop)
6. [Tài liệu](#tham-khao)

# Giới thiệu <a name="gioi-thieu"></a>

* Trò chơi được lấy ý tưởng dựa trên game [Flappy Bird](https://wikipedia.org/wiki/Flappy_Bird) - trò chơi nổi tiếng của Việt Nam được phát triển bởi Nguyễn Hà Đông vào năm 2013.
* FlappyBird được viết bằng ngôn ngữ C++ sử dụng thư viện [SDL2](https://www.libsdl.org/download-2.0.php).

_* Các tài nguyên được sử dụng trong trò chơi đều được lấy trên mạng, hình ảnh trong game tham khảo của [Maneko](https://spritedatabase.net/game/2597)._

<p align="center">
<img width="1080" height="600" src="https://i.imgur.com/ujtC7XA.png">
</p>

# Tính năng <a name="tinh-nang"></a>

**1. Game play**
* Xử lý va chạm giữa nhân vật và ống, mặt đất và viền trên cửa sổ.
* Xử lý các hành động bàn phím/ chuột của người chơi.
* Hiển thị điểm số người chơi, lưu lại điểm số cao nhất.
* Hiển thị Start screen, Pause tab, GameOver Menu. 
* Mặt đất và các cột di chuyển.
* Giới hạn FPS để tương thích với tất cả các thiết bị, cả các thiết bị không hỗ trợ vsync, đồng thời giúp ổn định tốc độ khung hình cũng như tốc độ game trên các máy có tốc độ khung hình khác nhau (tránh khung hình làm mới quá nhanh khiến tốc độ game bị thay đổi).

**2. TabPause**
* Tạm dừng bằng nút Escape khi cần.
* Bấm SPACE hoặc nút Play để tiếp tục chơi.

**3. TabGameOver**
* Hiển thị số điểm đạt được.
* Hiển thị huy chương tương ứng với số điểm.
* Hiển thị điểm số cao nhất.

# Cách chơi <a name="choi"></a>
* Click chuột hoặc nhấn phím SPACE để chơi.
* Khi game bắt đầu, bấm space hoặc click chuột để giúp chú chim bay lên cao một khoảng.
* Điều khiển chú chim vượt qua các ống, mỗi ống vượt qua sẽ cộng một điểm.
* Nhấn phím ESC để tạm dừng, nhấn nút Play hoặc SPACE để tiếp tục.
* Cố gắng đạt được điểm số cao nhất và ghi danh tại Best Score nhé.

# Cài đặt <a name="cai-dat"></a>

Download [FlappyBird.7z](https://github.com/tranduytoan/FlappyBird/releases/download/v1.0/FlappyBird.7z), sau đó giải nén và chạy file **FlappyBird.exe** để bắt đầu chơi.

Bạn cũng có thể download mã nguồn và chạy file **make.bat** để build file exe. Bạn sẽ cần cài đặt [Mingw64](https://sourceforge.net/projects/mingw-w64/files/Toolchains%20targetting%20Win64/Personal%20Builds/mingw-builds/8.1.0/threads-win32/seh/x86_64-8.1.0-release-win32-seh-rt_v6-rev0.7z/download), [SDL2](https://www.libsdl.org/download-2.0.php), [SDL_Image](https://www.libsdl.org/projects/SDL_image), [SDL_TTF](https://www.libsdl.org/projects/SDL_ttf), và [SDL_Mixer](https://www.libsdl.org/projects/SDL_mixer), add to path các file để có thể build. Các file include và lib đã được bao gồm sẵn trong mã nguồn và không cần thao tác gì thêm.

# Dự định phát triển <a name="phat-trien"></a>

Game mới chỉ là dự án đầu tiên của mình nên vẫn chưa hoàn thiện các tính năng so với game gốc. Mình đang có dự định tiếp tục phát triển các tính năng về Main Menu (với các setting về âm thanh, theme, độ khó, xem lịch sử chơi,xem điểm số cao nhất), Tab Pause (Mute/Unmute, đổi theme, thoát ra Main Menu).

# Đóng góp <a name="đong-gop"></a>

Nếu bạn muốn đóng góp cho dự dán, đừng ngại tạo một PR. Mình rất cảm ơn bất kể đóng góp nào của các bạn.

# Tài liệu tham khảo <a name="tham-khao"></a>

[Flappy Bird](https://wikipedia.org/wiki/Flappy_Bird) 

[SDL2](https://wiki.libsdl.org/SDL2/FrontPage)

[Mingw64](https://www.mingw-w64.org/)

[Game asprite](https://spritedatabase.net/game/2597)

[SDL Tutorial](https://youtube.com/playlist?list=PLICuKRn8LCNT2rPm9QVm7qNcQQ-FEAV8N)

[LazyFoo](https://lazyfoo.net/tutorials/SDL/)