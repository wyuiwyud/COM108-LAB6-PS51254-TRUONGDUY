# NHẬT KÝ THỰC HIỆN LAB 6 (LOGBOOK)

* **Họ và tên:** Lê Trương Duy
* **Mã sinh viên:** PS51254
* **Link Repository cá nhân:** https://github.com/wyuiwyud/COM108-LAB6-PS51254-TRUONGDUY

> [!NOTE]
> **HƯỚNG DẪN DÀNH CHO KỶ NGUYÊN AI:**  
> Bạn được khuyến khích sử dụng AI (Cursor, Copilot, ChatGPT, Claude) như một trợ lý lập trình. Tuy nhiên, AI thường xuyên sinh mã lỗi đối với các trường hợp biên (biên mảng, số âm, tràn chỉ số). Hãy ghi lại trung thực quá trình bạn phát hiện và khắc phục lỗi của AI.

---

### Lần 1: Bài 1 - Bộ Lọc Làm Mịn Tín Hiệu (Moving Average)
- Trạng thái: FAILED (Test 2)
- Prompt hỏi AI (nếu có): "Viết hàm lamMinTinHieu(float raw[], float smooth[], int n) lọc trung bình trượt cửa sổ k=3 cho mảng float trong C, xử lý 2 đầu mút chia 2 và ở giữa chia 3"
- Lỗi phát hiện qua Test (nếu có): FAILED Test 2 (Bay AI bien n=1): Expected 42.00, Actual 21.00. Do AI sinh code không kiểm tra trường hợp n=1 khiến truy cập tràn mảng raw[1].
- Cách sửa / Bài học: Cần tự kiểm tra trường hợp biên n=1. Bổ sung điều kiện kiểm tra if (n == 1) { smooth[0] = raw[0]; return; } ở đầu hàm.


### Lần 2: Bài 1
- Trạng thái: Sửa lỗi lần 2 (Đã PASS test cục bộ)
- Lỗi / Cách sửa: Bổ sung if (n == 1) smooth[0] = raw[0]; và chạy test_bai1.c cục bộ đã PASS 100% tất cả test cases.


### Lần 3: Bài 1 (Dự phòng)
- Trạng thái: Không cần dùng
- Lỗi / Cách sửa: 


---

### Lần 4: Bài 2 - Nén Sai Phân Dữ Liệu IoT (Delta Encoding)
- Trạng thái: Hoàn thành (PASS)
- Prompt hỏi AI (nếu có): "Viết hai hàm nenDelta(int goc[], int delta[], int n) và giaiNenDelta(int delta[], int khoiPhuc[], int n) trong C. Chú ý xử lý đúng mảng n=1 và số âm."
- Lỗi phát hiện qua Test (nếu có): Không có. Rút kinh nghiệm sâu sắc từ Bài 1, em đã tự tay rà soát và kiểm tra cẩn thận trường hợp n=1 và giá trị âm trước khi nộp.
- Cách sửa / Bài học: Hiểu rõ thuật toán nén sai phân: delta[i] = goc[i] - goc[i-1], giải nén bằng cách cộng dồn lũy kế khoiPhuc[i] = khoiPhuc[i-1] + delta[i].


### Lần 5: Bài 2
- Trạng thái: Chờ kiểm thử bổ sung
- Lỗi / Cách sửa: 


### Lần 6: Bài 2 (Dự phòng)
- Trạng thái: 
- Lỗi / Cách sửa: 


---

### Lần 7: Bài 3 - Bộ Lọc Làm Mờ Điểm Ảnh (Box Blur Filter 3x3)
- Trạng thái: 
- Prompt hỏi AI (nếu có): 
- Lỗi phát hiện qua Test (nếu có): 
- Cách sửa / Bài học: 


### Lần 8: Bài 3
- Trạng thái: 
- Lỗi / Cách sửa: 


### Lần 9: Bài 3 (Dự phòng)
- Trạng thái: 
- Lỗi / Cách sửa: 


---

### Lần 10: Bài 4 - Radar Dò Điểm Nóng (Thermal Peak Detection)
- Trạng thái: 
- Prompt hỏi AI (nếu có): 
- Lỗi phát hiện qua Test (nếu có): 
- Cách sửa / Bài học: 


### Lần 11: Bài 4
- Trạng thái: 
- Lỗi / Cách sửa: 


### Lần 12: Bài 4 (Dự phòng)
- Trạng thái: 
- Lỗi / Cách sửa: 


### Lần 13: Bài 4 (Dự phòng)
- Trạng thái: 
- Lỗi / Cách sửa: 

