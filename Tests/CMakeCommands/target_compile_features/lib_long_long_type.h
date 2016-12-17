
int getLLTypeImpl(long long &);

int getLLType(int i)
{
  long long l = i;
  return getLLTypeImpl(l);
}
