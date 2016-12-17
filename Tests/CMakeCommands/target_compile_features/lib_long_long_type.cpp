
int getLLTypeImpl(long long &l)
{
  int i = 64;
  while(l) {
    if(l & 1)
      i--;
    l >>= 1;
  }
  return i;
}
