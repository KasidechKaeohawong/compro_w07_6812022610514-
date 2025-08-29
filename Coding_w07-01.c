#include <stdio.h>
 int main() {
   int score; // ประกาศตัวแปร score
    printf("Enter your score: "); // แสดงข้อความ Enter your score: รับค่าคะแนน
    scanf("%d", &score); // เก็บค่าคะแนนที่รับมาในตัวแปร score 


     if (score >= 50) { // ถ้าคะแนนมากกว่าหรือเท่ากับ 50
            printf("score\n"); 
           score = score + ( 5 % 100); // เพิ่มคะแนน 5% ของคะแนนที่มีอยู่
     }

     printf("End of evaluation: %d\n", score);  // แสดงผลคะแนนที่ได้จากการรับมา
    return 0;
     }