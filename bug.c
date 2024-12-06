int main() {
  int x = 10;
  int *ptr = &x;
  *ptr = 20; // Modify value through pointer
  int y = *ptr; // Copy value
  *ptr = 30; // Modify value again
  printf("%d\n", y); // This will print 20, not 30
}