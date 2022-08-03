#include <stdio.h>
int main(){
    int num, digit, count = 0;
    int arr[30];
    scanf("%d", &num);
    if (num != 0)
    {
        while (num != 1)
        {
            digit = num % 2; //เอาLSBใส่ลงในarrayไปก่อน แล้วตอนปริ้นออกค่อนปริ้นจากarrayท้ายๆมา(MSB)
            arr[count] = digit;
            num = num / 2;
            count += 1;
        }
        arr[count] = 1; //ใส่1ก็เพราะว่า จะมีcountที่บวกเพิ่มเข้ามาเกินก็คือตัวหน้าสุด(MSB)
        for (int i = count; i >= 0; i--)
        {
            printf("%d", arr[i]);
        }
    }else
    {
        printf("0");
    }
} //6410406649 ธัญรดา สอนนาคงเจริญ