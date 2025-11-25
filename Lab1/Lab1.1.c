#include <stdio.h>

int main() {
    int N, i; // ประกาศตัวเเปรจำนวนเต็ม N เก็บค่าป้อนเข้า เเละ i ตัวนับลูป
    printf("Enter an number: "); // เเสดงข้อความให้ใส่ตัวเลข
    scanf("%d", &N); // รับค่าตัวเลขจำนวนเต็ม

    for (i = 0; i < N; i++) { // ลูปซำ้ตั้งเเต่ i = 0 ถึง i = N-1 รวมเป็น N รอบ
        printf("Hello Loop\n"); // ในเเต่ละรอบจะพิมพ์ข้อความ "Hello Loop"
    }

    return 0; // จบโปรแกรม
}