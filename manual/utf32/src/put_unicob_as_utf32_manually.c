#include <unico.h>

int put_unicob_as_utf32be_manually (unico code, unicob *uniout){
  unsigned char data[] = {
    (code >>  0) & 0xff,
    (code >>  8) & 0xff,
    (code >> 16) & 0xff,
    (code >> 24) & 0xff 
  };
  return write_unicob_manually(data, sizeof(data), uniout);
}

int put_unicob_as_utf32le_manually (unico code, unicob *uniout){
  unsigned char data[] = {  
    (code >> 24) & 0xff,
    (code >> 16) & 0xff,
    (code >>  8) & 0xff,
    (code >>  0) & 0xff 
  };
  return write_unicob_manually(data, sizeof(data), uniout);
}
