# 📚 Hệ thống Quản lý Thư viện

## 📖 Giới thiệu

Hệ thống quản lý thư viện là một ứng dụng console được viết bằng C++ để quản lý độc giả, sách và các hoạt động mượn trả sách trong thư viện. Ứng dụng sử dụng cấu trúc dữ liệu cây nhị phân tìm kiếm (BST) để lưu trữ thông tin độc giả và danh sách liên kết để quản lý sách.

## ✨ Tính năng chính

### 👥 Quản lý Độc giả
- **Thêm độc giả mới**: Tự động tạo mã thẻ độc giả duy nhất
- **Xóa độc giả**: Xóa thông tin độc giả khỏi hệ thống
- **Chỉnh sửa thông tin**: Cập nhật thông tin cá nhân của độc giả
- **Danh sách độc giả**: 
  - Xem danh sách theo tên (A-Z)
  - Xem danh sách theo mã thẻ
  - Danh sách độc giả quá hạn trả sách

### 📚 Quản lý Mượn/Trả Sách
- **Mượn sách**: 
  - Kiểm tra giới hạn mượn sách (tối đa 3 cuốn)
  - Ghi nhận ngày mượn
  - Cập nhật trạng thái sách
- **Trả sách**: 
  - Ghi nhận ngày trả
  - Cập nhật trạng thái sách về có sẵn
- **Lịch sử mượn trả**: Xem toàn bộ lịch sử mượn trả của độc giả

### 📖 Quản lý Đầu Sách
- **Thêm đầu sách mới**: Nhập thông tin chi tiết về sách
- **Tìm kiếm theo thể loại**: Lọc sách theo thể loại
- **Tìm kiếm theo tên**: Tìm sách theo tên
- **Danh sách yêu thích**: Hiển thị các sách được mượn nhiều nhất

## 🛠️ Cấu trúc dự án

```
📁 Library Management System/
├── 📄 main.cpp          # File chính chứa menu và logic điều khiển
├── 📄 Font.h            # Header file xử lý font và hiển thị
├── 📄 Back.h            # Header file xử lý backend và cấu trúc dữ liệu
├── 📄 data/             # Thư mục chứa file dữ liệu
└── 📄 README.md         # File hướng dẫn này
```

## 🏗️ Cấu trúc dữ liệu

### Độc giả (DocGia)
- Mã thẻ (MaThe)
- Họ và tên
- Giới tính
- Trạng thái thẻ
- Danh sách mượn trả

### Đầu sách (DauSach)
- Mã đầu sách
- Tên sách
- Tác giả
- Thể loại
- Năm xuất bản
- Danh sách các cuốn sách

### Mượn trả (MuonTra)
- Mã sách
- Ngày mượn
- Ngày trả
- Trạng thái

## 🎮 Hướng dẫn sử dụng

### Điều khiển
- **↑/↓**: Di chuyển trong menu
- **Enter**: Chọn chức năng
- **ESC**: Quay lại menu trước
- **Y/N**: Xác nhận các thao tác

### Menu chính
1. **Quản lý Độc giả**
   - Thêm độc giả
   - Xóa độc giả
   - Chỉnh sửa thông tin
   - Danh sách theo tên
   - Danh sách theo mã
   - Danh sách quá hạn

2. **Quản lý Mượn/Trả**
   - Mượn sách
   - Trả sách
   - Lịch sử mượn trả

3. **Quản lý Đầu sách**
   - Thêm đầu sách
   - Tìm theo thể loại
   - Tìm theo tên
   - Danh sách yêu thích

## 💻 Yêu cầu hệ thống

- **Hệ điều hành**: Windows (sử dụng Windows.h)
- **Trình biên dịch**: GCC, Visual Studio, hoặc tương tự
- **Ngôn ngữ**: C++
- **Thư viện**: 
  - `<iostream>`
  - `<vector>`
  - `<string>`
  - `<Windows.h>`

## 🚀 Cài đặt và chạy

1. **Clone repository**:
   ```bash
   git clone [URL_REPOSITORY]
   cd library-management-system
   ```

2. **Biên dịch**:
   ```bash
   g++ -o library_management main.cpp
   ```

3. **Chạy ứng dụng**:
   ```bash
   ./library_management
   ```

## 📊 Tính năng nổi bật

- **Giao diện console thân thiện**: Menu điều hướng trực quan
- **Quản lý dữ liệu hiệu quả**: Sử dụng cây BST cho tìm kiếm nhanh
- **Kiểm tra dữ liệu**: Validation đầu vào để đảm bảo tính chính xác
- **Tự động hóa**: Tự động tạo mã thẻ độc giả và kiểm tra trạng thái
- **Báo cáo**: Thống kê và danh sách theo nhiều tiêu chí

## 🔧 Tùy chỉnh

Bạn có thể tùy chỉnh các tham số sau trong file `main.cpp`:
- `set_x`, `set_y`: Vị trí hiển thị menu
- `set_thong_bao_x`, `set_thong_bao_y`: Vị trí hiển thị thông báo
- Giới hạn số sách mượn (hiện tại: 3 cuốn)

## 🤝 Đóng góp

Mọi đóng góp đều được chào đón! Vui lòng:
1. Fork dự án
2. Tạo feature branch (`git checkout -b feature/AmazingFeature`)
3. Commit thay đổi (`git commit -m 'Add some AmazingFeature'`)
4. Push to branch (`git push origin feature/AmazingFeature`)
5. Tạo Pull Request

## 📝 Ghi chú

- Dữ liệu được lưu trữ trong file và được đọc khi khởi động ứng dụng
- Hệ thống hỗ trợ tiếng Việt có dấu
- Tất cả thao tác đều có xác nhận để tránh thao tác nhầm

## 📜 License

Dự án này được phát hành dưới [MIT License](LICENSE).

## 👨‍💻 Tác giả

- **Tên tác giả**: Nguyễn Thành Nam
- **Email**: ntnam.rock@gmail.com
- **GitHub**: ThanhNam-42

---

💡 **Lưu ý**: Đây là phiên bản console của hệ thống quản lý thư viện. Các phiên bản GUI có thể được phát triển trong tương lai.
