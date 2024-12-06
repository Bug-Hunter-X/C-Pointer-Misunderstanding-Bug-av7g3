int main() {
  int x = 10;
  int *ptr = &x;
  *ptr = 20; // Modify value through pointer
  int y = *ptr; // Copy value.  Note: y holds the address of x. 
  *ptr = 30; // Modify value again
  printf("%d %d\n", y, *ptr); // This will print 20, 30 because now we print both copies of x. 
  return 0;
}