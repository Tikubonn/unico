#include <unico.h>

int put_bom_unicob_as_utf32be_manually (unicob *uniout){
  unsigned char data[] = { 0x00, 0x00, 0xfe, 0xff };
  return write_unicob_manually(data, sizeof(data), uniout);
}

int put_bom_unicob_as_utf32le_manually (unicob *uniout){
  unsigned char data[] = { 0xff, 0xfe, 0x00, 0x00 };
  return write_unicob_manually(data, sizeof(data), uniout);
}
