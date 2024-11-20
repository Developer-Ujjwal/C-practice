// There is a person, who is asked to enter the alphanumeric password for registering into 
//an ecommerce website for purchasing products from website. But he is not aware about, 
//what does Alphanumeric mean. So, he tries entering various combinations 5 times, but 
//he fails to create such password. So let us help him by writing a C program to validate 
//his password. Constraints for writing password are it should have combination of 
//lowercase, uppercase and digit.

#include <stdio.h>

int main() {
    char password[100];
    int i, hasUpper, hasLower, hasDigit,hassymbol;

    do {
        hasUpper = hasLower = hasDigit=hassymbol=0;

        printf("Enter your password: ");
        scanf("%s", password);

        for(i = 0; password[i] != '\0'; i++) {
            if(password[i] >= 'A' && password[i] <= 'Z') hasUpper = 1;
          else  if(password[i] >= 'a' && password[i] <= 'z') hasLower = 1;
          else  if(password[i] >= '0' && password[i] <= '9') hasDigit = 1;
          else hassymbol=1;
        }

        if(hasUpper && hasLower && hasDigit && hassymbol) {
            printf("Password accepted!\n");
            break;
        } else {
            printf("Invalid password. Please make sure your password contains at least one uppercase letter, one lowercase letter, and one digit.\n");
        }
    } while(1);

    return 0;
}
