#include <stdio.h>

int main() {
    int x, y;

    // รับค่า x และ y
    printf("กรอกค่า x: ");
    scanf("%d", &x);
    printf("กรอกค่า y: ");
    scanf("%d", &y);

    // เปรียบเทียบค่า x และ y
    if (x > y) { // ถ้า x มากกว่า y
        printf("x มากกว่า y\n"); // แสดงผลว่า x มากกว่า y
    } else if (x < y) { // ถ้า x น้อยกว่า y
        printf("x น้อยกว่า y\n"); // แสดงผลว่า x น้อยกว่า y
    } else { // ถ้า x และ y ไม่เข้า 2 กรณีแรก
        printf("x เท่ากับ y\n"); // แสดงผลว่า x เท่ากับ y
    }

    return 0;
}