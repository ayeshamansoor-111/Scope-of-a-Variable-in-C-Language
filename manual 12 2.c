#include <stdio.h> 
void trackattempts(void);  
int main () {
    trackattempts(); 
    trackattempts(); 
    trackattempts(); 
    return 0; 
}
void trackattempts() {
    static int attempts = 0; 
    attempts++; 
    if (attempts < 3) {
         printf("Attempt # %d: Access denied. (%d remaining before lockout!)\n", attempts, 3 - attempts);
    } else { printf("Attempt 3: Account locked!\n");  } 
} 