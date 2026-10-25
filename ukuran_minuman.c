#include <stdio.h>

// 1. Deklarasi Enum
typedef enum { SMALL = 1, MEDIUM, LARGE, ULTRA_PRO_MAX_LARGE } Ukuran;

// 2. Main Function & Conditions
int main() {
    int pilihan;
    
	printf("----------KAFE SUKA-SUKA----------\n");
    printf("Pilih ukuran minuman\n1. Small\n2. Medium\n3. Large\n4. Ultra Pro Max Large\n) ");
    scanf("%d", &pilihan);

    Ukuran ukuran = (Ukuran)pilihan;

    switch (ukuran) {
        case SMALL:  
		printf("Small  - Harganya Rp 50000\n"); 
		break;
		
        case MEDIUM: 
		printf("Medium - Harganya Rp 100000\n"); 
		break;
		
        case LARGE:  
		printf("Large  - Harganya Rp 200000\n"); 
		break;
		
		case ULTRA_PRO_MAX_LARGE:
		printf("Ultra Pro Max Large - Harganya Rp500000\n");
		break;
		
        default:     
		printf("Pilihan tidak valid!\n");
    }

    return 0;
}