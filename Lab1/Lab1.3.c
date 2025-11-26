#include <stdio.h>

int main() {
    // num1 เเละ num2 เก็บค่าตัวเลขจำนวนเต็มที่ผู้ใช้ป้อนเข้า
    // operationCode เก็บค่ารหัสการดำเนินการทางคณิตศาสตร์ที่ผู้ใช้ป้อนเข้า
    // result เก็บค่าผลลัพธ์ของการดำเนินการทางคณิตศาสตร์
    int num1, num2, operationCode, result;
    // รับค่าจากผู้ใช้ num1, num2 เเละ operationCode
    // ถ้ารับข้อมูลไม่ได้ครบ 3 คำให้โปรเเกรมจบทันที
    if (scanf("%d %d %d", &num1, &num2, &operationCode) != 3) {
        return 1; // ถ้ารับค่าผิดให้จบโปรเเกรมทันที
    }
    // ตรวจสอบ operationCode เพื่อเลือกการคำนวณ
    switch (operationCode)
    {
    case 1:
        // กรณีเลือกคำสั่ง 1: บวก
        result = num1 + num2;
        printf("%d\n", result);
        break;

    case 2:
        // กรณีเลือกคำสั่ง 2: ลบ
        result = num1 - num2;
        printf("%d\n", result);
        break;
    
    case 3:
        // กรณีเลือกคำสั่ง 3: คูณ
        result = num1 * num2;
        printf("%d\n", result);
        break;

    case 4:
        // กรณีเลือกคำสั่ง 4: หาร
        result = num1 / num2;
        printf("%d\n", result);
        break;

    default:
        printf("Invalid operation\n");
        break;
    }

    return 0; // จบโปรแกรม
}