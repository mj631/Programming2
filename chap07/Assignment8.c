/* 파일명: assignment-08.c
 * 내용: PA08. 상품 가격이 저장된 정수형 배열에 대항 할인율(%)을 입력받아 하인된 가격을 계산해서 출력하는 프로그램을 작성하시오.
* 날짜: 2025.9.15
 * 버전: v1.0
 */
#include <stdio.h>

int main() {
    int price[5];        
    int discount_price[5]; 
    int i, discount;

    
    printf("상품가 5개를 입력하세요: ");
    for (i = 0; i < 5; i++) {
        scanf("%d", &price[i]);
    }

   
    printf("할인율(%%)? ");
    scanf("%d", &discount);

    
    for (i = 0; i < 5; i++) {
        discount_price[i] = price[i] - (price[i] * discount / 100);
    }

    
    for (i = 0; i < 5; i++) {
        printf("가격: %d  --> 할인가: %d\n", price[i], discount_price[i]);
    }

    return 0;
}