# MorseToChar

# Giới thiệu
Điện tín là phương tiên đầu tiên giúp con người truyền dữ liệu qua khoảng cách lớn. Các
thông tin được mã hóa sử dụng Morse code, tương ứng mỗi ký tự alphabet với một mã xác
định gồm tập hợp của các dấu . và - . Phương pháp này ứng dụng hiệu ứng âm thanh, với
dấu . ứng với âm ngắn và dấu - ứng với âm dài. Người ta còn dùng phương pháp này cho hệ
thống gửi tín hiệu qua đường ánh sáng, hoặc dùng cờ hiệu.
Phương pháp mã hóa chuẩn Morse sẽ giải mã mỗi ký hiệu là một tập từ 1 tới 5 dấu . -. Các
ký tự đặc biệt sẽ được hiểu là tập của 2, tới 3 ký tự và tương ứng sẽ bao gồm từ 6 dấu . hoặc
-. Ví dụ, dấu phẩy , sẽ được hiểu là MIM và sẽ được mã là (--..--). Tám dấu chấm liên tục
(........) sẽ hiểu là lỗi và xóa đi ký tự vừa đánh vào trước.

# Mô tả
Chương trình sẽ mở một file vào và tìm hiểu xem file đấy là file dữ liệu hay file Morse.
Sau đó chương trình sẽ chuyển đổi dữ liệu sang dạng tương ứng và kết quả lưu sang file đầu
ra xác định

# Yêu cầu kỹ thuật

Chương trình sẽ bao gồm các chức năng sau:
```
• Chương trình sẽ chạy từ dòng lệnh (command – line), với tên file chạy là
morse, sau đấy tên của 2 file: file đầu vào và file dữ liệu đầu ra.
• Chương trình sẽ kiểm tra dạng của file đầu vào và chuyển đổi dữ liệu sang
dạng khác và gửi ra file đầu ra.
• Khi kiểm tra file đầu vào, nếu file chỉ chứa các ký tự (.), (-), (/) và dầu cách
(whitespace), thì đó là file Morse, còn lại nếu file có chứa bất cứ ký tự nào khác thì
đấy sẽ là file text.
• Các ký tự trong Morse code là cách nhau bởi dấu cách (space)
• Các từ trong Morse code thì cách nhau bởi ký tự /
• Các từ trong file text thì cách nhau bởi dấu cách
• File text chỉ chứa các ký tự thường (ví dụ A tương đương với a). File đầu ra
cũng chỉ hiển thị các ký tự thường.
• Các dòng kết thúc bởi dấu \n, và các từ khi in ra không được tràn lên 2 dòng.
• Một dòng đầu vào có thể có chiều dài không giới hạn. Và mỗi dòng đầu vào
cần được dịch ra một dòng đầu ra tương ứng.
```
## Note: Mã lỗi Morse code (........) , sẽ được chuyển sang thành ký tự #. Nếu nó xuất hiện ở giữa
một từ, thì ký tự đấy sẽ được chèn vào từ cần chuyển đổi (ví dụ plai#n-text). Vì thế mà mã lỗi
của Morse code sẽ được chuyển đổi thành ký tự bình thường, giống như các mã khác. Tuy
nhiên cho file text, ký tự # sẽ được hiểu là lỗi.

# Morse convert list

```
Alphanumeric characters.
.- A --. G -- M ... S -.—Y ..... 5
-... B .... H -. N - T --.. Z -.... 6
-.-. C .. I --- O ..- U .---- 1 --... 7
-.. D .--- J .--. P ...- V ..--- 2 ---.. 8
. E -.- K --.- Q .-- W ...—3 ----. 9
..-. F .-.. L .-. R -..- X ....- 4 ----- 0
Các dấu
Point (.) .-.-.- (AAA) Comma (,) --..-- (MIM)
Question mark (?) ..--.. (IMI) Colon (:) ---... (OS)
Hyphen (-) -....- (BA) Error ........
```

**Try_Work_Hard**
