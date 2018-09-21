#include < stdio.h > 
#include < math.h >

int checkPrime(int num);

int main() {
  int num = 0;
  int res = 0;
  printf("Enter number to check prime : ");
  scanf("%d", & num);
  res = checkPrime(num);
  if (res) {
    printf("Entered number %d is prime.\n");
  } else {
    printf("Entered number %d is not prime.\n");
  }

  return 0;
}

int checkPrime(int num) {
  int ii = 2;
  int max = 0;

  if (num <= 1) {
    return 0;
  }

  if (num != 2 && num % 2 == 0) {
    return 0;
  }

  max = sqrt(num);
  for (ii = 3; ii <= max;) {
    if (num % ii == 0) {
      return 0;
    }
    ii += 2;
  }
  return 1;
}
