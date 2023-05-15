#### Mục lục
1. [Giới thiệu](#gioi-thieu)
2. [Tính năng](#tinh-nang)
3. [Cách chơi](#choi)
4. [Cài đặt](#caidat)

# Giới thiệu <a name="gioi-thieu"></a>

* Trò chơi được lấy ý tưởng dựa trên game [Flappy Bird](https://wikipedia.org/wiki/Flappy_Bird) - trò chơi nổi tiếng của Việt Nam được phát triển bởi Nguyễn Hà Đông vào năm 2013.
* FlappyBird được viết bằng ngôn ngữ C++ sử dụng thư viện [SDL2](https://www.libsdl.org/download-2.0.php).

_* Các tài nguyên được sử dụng trong trò chơi đều được lấy trên mạng, hình ảnh trong game tham khảo của [Maneko](https://spritedatabase.net/game/2597)._

<p align="center">
<img width="350" height="620" src="https://i.imgur.com/fqziNMO.png">
</p>

# Tính năng <a name="tinh-nang"></a>

**1. GameWindow**
* Xử lý va chạm giữa nhân vật và ống, mặt đất và viền trên cửa sổ.
* Xử lý các hành động bàn phím/ chuột của người chơi.
* Hiển thị điểm số, biểu tượng trạng thái trò chơi (chơi/ tạm dừng).
* Mặt đất và các nhân vật di chuyển giúp trò chơi trở nên thực tế hơn.
* Giới hạn FPS để tương thích với tất cả các thiết bị (nếu không, khi chạy trò chơi trên máy cấu hình cao, hình ảnh sẽ được vẽ quá nhanh, gây ra hiệu ứng "tiến nhanh").

**2. TabPause**
* Tạm dừng bằng nút Escape khi cần
* Bấm nút Play để tiếp tục chơi.

**3. TabGameOver**
* Hiển thị huy chương tương ứng với số điểm.
* Hiển thị điểm số cao nhất.

# 4. Cách chơi <a name="choi"></a>
* Click chuột hoặc nhấn phím SPACE để chơi.
* Nhấn phím ESC để tạm dừng, nhấn nút Play hoặc SPACE để tiếp tục.


# Cài đặt <a name="caidat"></a>

Download [FlappyBird.zip](https://github.com/tranduytoan/FlappyBird/releases/download/v1.0/FlappyBird.zip), sau đó giải nén và chạy file **FlappyBird.exe** để bắt đầu chơi.

Bạn cũng có thể download mã nguồn và chạy file **make.bat** để build file exe. Bạn sẽ cần cài đặt [Mingw64](https://sourceforge.net/projects/mingw-w64/files/Toolchains%20targetting%20Win64/Personal%20Builds/mingw-builds/8.1.0/threads-win32/seh/x86_64-8.1.0-release-win32-seh-rt_v6-rev0.7z/download), [SDL2](https://www.libsdl.org/download-2.0.php), [SDL_Image](https://www.libsdl.org/projects/SDL_image), [SDL_TTF](https://www.libsdl.org/projects/SDL_ttf), và [SDL_Mixer](https://www.libsdl.org/projects/SDL_mixer), add to path các file .dll để có thể build. Các file include và lib đã được bao gồm sẵn trong mã nguồn và không cần thao tác gì thêm