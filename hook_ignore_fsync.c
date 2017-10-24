// gcc -nostdlib -static -shared -fPIC  hook_ignore_fsync.c -o hook_ignore_fsync.so
// LD_PRELOAD="hook_ignore_fsync.so"
int fsync(int fd)
{
  //write(1,"fsync ignored\n",14);
  return 0;
}

int fdatasync(int fd)
{
  //write(1,"fdatasync ignored\n",18);
  return 0;
}
