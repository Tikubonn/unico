#include <unico.h>
#include <stdio.h>
#include <stdlib.h>

#define test(code)\
{ int __code = code;\
if (__code){ printf("success: %s\n", #code); }\
else { printf("failed in %s line at %d: %s\n", __FILE__, __LINE__, #code); exit(1); } }

#define test2(code1, code2)\
{ int __code1 = code1;\
int __code2 = code2;\
if (__code1 == __code2){ printf("success: %s, %s\n", #code1, #code2); }\
else { printf("failed in %s line at %d: %s, %s (%d, %d)\n", __FILE__, __LINE__, #code1, #code2, __code1, __code2); exit(1); } }

#define error(code)\
{ printf("failed: %s\n", #code); exit(1); }

int main (){

  /* make */
  
  {
    unicos *uni = make_unicos(10);
    test2(size_unicos(uni), 0);
    test2(real_size_unicos(uni), 10);
    free_unicos(uni);
  }
  
  /* insert */
  
  {
    unicos *uni = make_unicos(10);
    test2(insert_unicos_manually(0, -1, uni), 0);
    test2(insert_unicos_manually(1, -1, uni), 0);
    test2(insert_unicos_manually(2, -1, uni), 0);
    test2(size_unicos(uni), 3);
    test2(real_size_unicos(uni), 10);
    test2(get_unicos(0, uni), 0);
    test2(get_unicos(1, uni), 1);
    test2(get_unicos(2, uni), 2);
    free_unicos(uni);
  }
  
  {
    unicos *uni = make_unicos(10);
    test2(insert_unicos_manually(0, -1, uni), 0);
    test2(insert_unicos_manually(1, -1, uni), 0);
    test2(insert_unicos_manually(2, -1, uni), 0);
    test2(insert_unicos_manually(10, 1, uni), 0);
    test2(size_unicos(uni), 4);
    test2(real_size_unicos(uni), 10);
    test2(get_unicos(0, uni), 0);
    test2(get_unicos(1, uni), 10);
    test2(get_unicos(2, uni), 1);
    test2(get_unicos(3, uni), 2);
    free_unicos(uni);
  }
  
  {
    unicos *uni = make_unicos(10);
    test2(insert_unicos_manually(0, 0, uni), 0);
    test2(insert_unicos_manually(1, 0, uni), 0);
    test2(insert_unicos_manually(2, 0, uni), 0);
    test2(size_unicos(uni), 3);
    test2(real_size_unicos(uni), 10);
    test2(get_unicos(0, uni), 2);
    test2(get_unicos(1, uni), 1);
    test2(get_unicos(2, uni), 0);
    free_unicos(uni);
  }
  
  /* inserts */

  {
    unico data[] = { 0, 1, 2 };
    unicos *uni = make_unicos(10);
    test2(inserts_unicos_manually(data, sizeof(data) / sizeof(unico), 0, uni), 0);
    test2(size_unicos(uni), 3);
    test2(real_size_unicos(uni), 10);
    test2(get_unicos(0, uni), 0);
    test2(get_unicos(1, uni), 1);
    test2(get_unicos(2, uni), 2);
    free_unicos(uni);
  }

  {
    unico data1[] = { 0, 1, 2 };
    unico data2[] = { 10, 10, 10 };
    unicos *uni = make_unicos(10);
    test2(inserts_unicos_manually(data1, sizeof(data1) / sizeof(unico), 0, uni), 0);
    test2(inserts_unicos_manually(data2, sizeof(data2) / sizeof(unico), 1, uni), 0);
    test2(size_unicos(uni), 6);
    test2(real_size_unicos(uni), 10);
    test2(get_unicos(0, uni), 0);
    test2(get_unicos(1, uni), 10);
    test2(get_unicos(2, uni), 10);
    test2(get_unicos(3, uni), 10);
    test2(get_unicos(4, uni), 1);
    test2(get_unicos(5, uni), 2);
    free_unicos(uni);
  }

  {
    unico data1[] = { 0, 1, 2 };
    unico data2[] = { 10, 10, 10 };
    unicos *uni = make_unicos(10);
    test2(inserts_unicos_manually(data1, sizeof(data1) / sizeof(unico), 0, uni), 0);
    test2(inserts_unicos_manually(data2, sizeof(data2) / sizeof(unico), -1, uni), 0);
    test2(size_unicos(uni), 6);
    test2(real_size_unicos(uni), 10);
    test2(get_unicos(0, uni), 0);
    test2(get_unicos(1, uni), 1);
    test2(get_unicos(2, uni), 2);
    test2(get_unicos(3, uni), 10);
    test2(get_unicos(4, uni), 10);
    test2(get_unicos(5, uni), 10);
    free_unicos(uni);
  }
  
  /* drop */
  
  {
    unico data[] = { 0, 1, 2 };
    unicos *uni = make_unicos(10);
    test2(inserts_unicos_manually(data, sizeof(data) / sizeof(unico), 0, uni), 0);
    drop_unicos(0, uni);
    test2(size_unicos(uni), 2);
    test2(real_size_unicos(uni), 10);
    test2(get_unicos(0, uni), 1);
    test2(get_unicos(1, uni), 2);
    free_unicos(uni);
  }
  
  {
    unico data[] = { 0, 1, 2 };
    unicos *uni = make_unicos(10);
    test2(inserts_unicos_manually(data, sizeof(data) / sizeof(unico), 0, uni), 0);
    drop_unicos(1, uni);
    test2(size_unicos(uni), 2);
    test2(real_size_unicos(uni), 10);
    test2(get_unicos(0, uni), 0);
    test2(get_unicos(1, uni), 2);
    free_unicos(uni);
  }
  
  {
    unico data[] = { 0, 1, 2 };
    unicos *uni = make_unicos(10);
    test2(inserts_unicos_manually(data, sizeof(data) / sizeof(unico), 0, uni), 0);
    drop_unicos(-1, uni);
    test2(size_unicos(uni), 2);
    test2(real_size_unicos(uni), 10);
    test2(get_unicos(0, uni), 0);
    test2(get_unicos(1, uni), 1);
    free_unicos(uni);
  }
  
  /* drops */
  
  {
    unico data[] = { 0, 1, 2, 3, 4, 5 };
    unicos *uni = make_unicos(10);
    test2(inserts_unicos_manually(data, sizeof(data) / sizeof(unico), 0, uni), 0);
    drops_unicos(0, 3, uni);
    test2(size_unicos(uni), 3);
    test2(real_size_unicos(uni), 10);
    test2(get_unicos(0, uni), 3);
    test2(get_unicos(1, uni), 4);
    test2(get_unicos(2, uni), 5);
    free_unicos(uni);
  }
  
  {
    unico data[] = { 0, 1, 2, 3, 4, 5 };
    unicos *uni = make_unicos(10);
    test2(inserts_unicos_manually(data, sizeof(data) / sizeof(unico), 0, uni), 0);
    drops_unicos(1, 3, uni);
    test2(size_unicos(uni), 3);
    test2(real_size_unicos(uni), 10);
    test2(get_unicos(0, uni), 0);
    test2(get_unicos(1, uni), 4);
    test2(get_unicos(2, uni), 5);
    free_unicos(uni);
  }
  
  {
    unico data[] = { 0, 1, 2, 3, 4, 5 };
    unicos *uni = make_unicos(10);
    test2(inserts_unicos_manually(data, sizeof(data) / sizeof(unico), 0, uni), 0);
    drops_unicos(-1, 3, uni);
    test2(size_unicos(uni), 6);
    test2(real_size_unicos(uni), 10);
    test2(get_unicos(0, uni), 0);
    test2(get_unicos(1, uni), 1);
    test2(get_unicos(2, uni), 2);
    test2(get_unicos(3, uni), 3);
    test2(get_unicos(4, uni), 4);
    test2(get_unicos(5, uni), 5);
    free_unicos(uni);
  }
  
  {
    unico data[] = { 0, 1, 2, 3, 4, 5 };
    unicos *uni = make_unicos(10);
    test2(inserts_unicos_manually(data, sizeof(data) / sizeof(unico), 0, uni), 0);
    drops_unicos(0, -1, uni);
    test2(size_unicos(uni), 0);
    test2(real_size_unicos(uni), 10);
    free_unicos(uni);
  }
  
  {
    unico data[] = { 0, 1, 2, 3, 4, 5 };
    unicos *uni = make_unicos(10);
    test2(inserts_unicos_manually(data, sizeof(data) / sizeof(unico), 0, uni), 0);
    drops_unicos(3, -1, uni);
    test2(size_unicos(uni), 3);
    test2(real_size_unicos(uni), 10);
    test2(get_unicos(0, uni), 0);
    test2(get_unicos(1, uni), 1);
    test2(get_unicos(2, uni), 2);
    free_unicos(uni);
  }
  
  {
    unico data[] = { 0, 1, 2, 3, 4, 5 };
    unicos *uni = make_unicos(10);
    test2(inserts_unicos_manually(data, sizeof(data) / sizeof(unico), 0, uni), 0);
    drops_unicos(-1, -1, uni);
    test2(size_unicos(uni), 6);
    test2(real_size_unicos(uni), 10);
    test2(get_unicos(0, uni), 0);
    test2(get_unicos(1, uni), 1);
    test2(get_unicos(2, uni), 2);
    test2(get_unicos(3, uni), 3);
    test2(get_unicos(4, uni), 4);
    test2(get_unicos(5, uni), 5);
    free_unicos(uni);
  }
  
  /* sub */
  
  {
    unico data1[] = { 0, 1, 2, 3, 4, 5 };
    unico data2[] = { 10, 10, 10 };
    unicos *uni = make_unicos(10);
    test2(inserts_unicos_manually(data1, sizeof(data1) / sizeof(unico), 0, uni), 0);
    test2(sub_unicos_manually(data2, sizeof(data2) / sizeof(unico), 0, 0, uni), 0);
    test2(size_unicos(uni), 9);
    test2(real_size_unicos(uni), 10);
    test2(get_unicos(0, uni), 10);
    test2(get_unicos(1, uni), 10);
    test2(get_unicos(2, uni), 10);
    test2(get_unicos(3, uni), 0);
    test2(get_unicos(4, uni), 1);
    test2(get_unicos(5, uni), 2);
    test2(get_unicos(6, uni), 3);
    test2(get_unicos(7, uni), 4);
    test2(get_unicos(8, uni), 5);
    free_unicos(uni);
  }
  
  {
    unico data1[] = { 0, 1, 2, 3, 4, 5 };
    unico data2[] = { 10, 10, 10 };
    unicos *uni = make_unicos(10);
    test2(inserts_unicos_manually(data1, sizeof(data1) / sizeof(unico), 0, uni), 0);
    test2(sub_unicos_manually(data2, sizeof(data2) / sizeof(unico), 0, 3, uni), 0);
    test2(size_unicos(uni), 6);
    test2(real_size_unicos(uni), 10);
    test2(get_unicos(0, uni), 10);
    test2(get_unicos(1, uni), 10);
    test2(get_unicos(2, uni), 10);
    test2(get_unicos(3, uni), 3);
    test2(get_unicos(4, uni), 4);
    test2(get_unicos(5, uni), 5);
    free_unicos(uni);
  }
  
  {
    unico data1[] = { 0, 1, 2, 3, 4, 5 };
    unico data2[] = { 10, 10, 10 };
    unicos *uni = make_unicos(10);
    test2(inserts_unicos_manually(data1, sizeof(data1) / sizeof(unico), 0, uni), 0);
    test2(sub_unicos_manually(data2, sizeof(data2) / sizeof(unico), 0, 6, uni), 0);
    test2(size_unicos(uni), 3);
    test2(real_size_unicos(uni), 10);
    test2(get_unicos(0, uni), 10);
    test2(get_unicos(1, uni), 10);
    test2(get_unicos(2, uni), 10);
    free_unicos(uni);
  }  
  
  {
    unico data1[] = { 0, 1, 2, 3, 4, 5 };
    unico data2[] = { 10, 10, 10 };
    unicos *uni = make_unicos(10);
    test2(inserts_unicos_manually(data1, sizeof(data1) / sizeof(unico), 0, uni), 0);
    test2(sub_unicos_manually(data2, sizeof(data2) / sizeof(unico), 0, -1, uni), 0);
    test2(size_unicos(uni), 3);
    test2(real_size_unicos(uni), 10);
    test2(get_unicos(0, uni), 10);
    test2(get_unicos(1, uni), 10);
    test2(get_unicos(2, uni), 10);
    free_unicos(uni);
  }
    
  {
    unico data1[] = { 0, 1, 2, 3, 4, 5 };
    unico data2[] = { 10, 10, 10 };
    unicos *uni = make_unicos(10);
    test2(inserts_unicos_manually(data1, sizeof(data1) / sizeof(unico), 0, uni), 0);
    test2(sub_unicos_manually(data2, sizeof(data2) / sizeof(unico), 1, 0, uni), 0);
    test2(size_unicos(uni), 9);
    test2(real_size_unicos(uni), 10);
    test2(get_unicos(0, uni), 0);
    test2(get_unicos(1, uni), 10);
    test2(get_unicos(2, uni), 10);
    test2(get_unicos(3, uni), 10);
    test2(get_unicos(4, uni), 1);
    test2(get_unicos(5, uni), 2);
    test2(get_unicos(6, uni), 3);
    test2(get_unicos(7, uni), 4);
    test2(get_unicos(8, uni), 5);
    free_unicos(uni);
  }
  
  {
    unico data1[] = { 0, 1, 2, 3, 4, 5 };
    unico data2[] = { 10, 10, 10 };
    unicos *uni = make_unicos(10);
    test2(inserts_unicos_manually(data1, sizeof(data1) / sizeof(unico), 0, uni), 0);
    test2(sub_unicos_manually(data2, sizeof(data2) / sizeof(unico), 1, 3, uni), 0);
    test2(size_unicos(uni), 6);
    test2(real_size_unicos(uni), 10);
    test2(get_unicos(0, uni), 0);
    test2(get_unicos(1, uni), 10);
    test2(get_unicos(2, uni), 10);
    test2(get_unicos(3, uni), 10);
    test2(get_unicos(4, uni), 4);
    test2(get_unicos(5, uni), 5);
    free_unicos(uni);
  }
  
  {
    unico data1[] = { 0, 1, 2, 3, 4, 5 };
    unico data2[] = { 10, 10, 10 };
    unicos *uni = make_unicos(10);
    test2(inserts_unicos_manually(data1, sizeof(data1) / sizeof(unico), 0, uni), 0);
    test2(sub_unicos_manually(data2, sizeof(data2) / sizeof(unico), 1, 6, uni), 0);
    test2(size_unicos(uni), 4);
    test2(real_size_unicos(uni), 10);
    test2(get_unicos(0, uni), 0);
    test2(get_unicos(1, uni), 10);
    test2(get_unicos(2, uni), 10);
    test2(get_unicos(3, uni), 10);
    free_unicos(uni);
  }
    
  {
    unico data1[] = { 0, 1, 2, 3, 4, 5 };
    unico data2[] = { 10, 10, 10 };
    unicos *uni = make_unicos(10);
    test2(inserts_unicos_manually(data1, sizeof(data1) / sizeof(unico), 0, uni), 0);
    test2(sub_unicos_manually(data2, sizeof(data2) / sizeof(unico), 6, 0, uni), 0);
    test2(size_unicos(uni), 9);
    test2(real_size_unicos(uni), 10);
    test2(get_unicos(0, uni), 0);
    test2(get_unicos(1, uni), 1);
    test2(get_unicos(2, uni), 2);
    test2(get_unicos(3, uni), 3);
    test2(get_unicos(4, uni), 4);
    test2(get_unicos(5, uni), 5);
    test2(get_unicos(6, uni), 10);
    test2(get_unicos(7, uni), 10);
    test2(get_unicos(8, uni), 10);
    free_unicos(uni);
  }
    
  {
    unico data1[] = { 0, 1, 2, 3, 4, 5 };
    unico data2[] = { 10, 10, 10 };
    unicos *uni = make_unicos(10);
    test2(inserts_unicos_manually(data1, sizeof(data1) / sizeof(unico), 0, uni), 0);
    test2(sub_unicos_manually(data2, sizeof(data2) / sizeof(unico), -1, 0, uni), 0);
    test2(size_unicos(uni), 9);
    test2(real_size_unicos(uni), 10);
    test2(get_unicos(0, uni), 0);
    test2(get_unicos(1, uni), 1);
    test2(get_unicos(2, uni), 2);
    test2(get_unicos(3, uni), 3);
    test2(get_unicos(4, uni), 4);
    test2(get_unicos(5, uni), 5);
    test2(get_unicos(6, uni), 10);
    test2(get_unicos(7, uni), 10);
    test2(get_unicos(8, uni), 10);
    free_unicos(uni);
  }
  
  {
    unico data1[] = { 0, 1, 2, 3, 4, 5 };
    unico data2[] = { 10, 10, 10 };
    unicos *uni = make_unicos(10);
    test2(inserts_unicos_manually(data1, sizeof(data1) / sizeof(unico), 0, uni), 0);
    test2(sub_unicos_manually(data2, sizeof(data2) / sizeof(unico), 6, 9, uni), 0);
    test2(size_unicos(uni), 9);
    test2(real_size_unicos(uni), 10);
    test2(get_unicos(0, uni), 0);
    test2(get_unicos(1, uni), 1);
    test2(get_unicos(2, uni), 2);
    test2(get_unicos(3, uni), 3);
    test2(get_unicos(4, uni), 4);
    test2(get_unicos(5, uni), 5);
    test2(get_unicos(6, uni), 10);
    test2(get_unicos(7, uni), 10);
    test2(get_unicos(8, uni), 10);
    free_unicos(uni);
  }
    
  {
    unico data1[] = { 0, 1, 2, 3, 4, 5 };
    unico data2[] = { 10, 10, 10 };
    unicos *uni = make_unicos(10);
    test2(inserts_unicos_manually(data1, sizeof(data1) / sizeof(unico), 0, uni), 0);
    test2(sub_unicos_manually(data2, sizeof(data2) / sizeof(unico), -1, 9, uni), 0);
    test2(size_unicos(uni), 9);
    test2(real_size_unicos(uni), 10);
    test2(get_unicos(0, uni), 0);
    test2(get_unicos(1, uni), 1);
    test2(get_unicos(2, uni), 2);
    test2(get_unicos(3, uni), 3);
    test2(get_unicos(4, uni), 4);
    test2(get_unicos(5, uni), 5);
    test2(get_unicos(6, uni), 10);
    test2(get_unicos(7, uni), 10);
    test2(get_unicos(8, uni), 10);
    free_unicos(uni);
  }
    
  {
    unico data1[] = { 0, 1, 2, 3, 4, 5 };
    unico data2[] = { 10, 10, 10 };
    unicos *uni = make_unicos(10);
    test2(inserts_unicos_manually(data1, sizeof(data1) / sizeof(unico), 0, uni), 0);
    test2(sub_unicos_manually(data2, sizeof(data2) / sizeof(unico), -1, -1, uni), 0);
    test2(size_unicos(uni), 9);
    test2(real_size_unicos(uni), 10);
    test2(get_unicos(0, uni), 0);
    test2(get_unicos(1, uni), 1);
    test2(get_unicos(2, uni), 2);
    test2(get_unicos(3, uni), 3);
    test2(get_unicos(4, uni), 4);
    test2(get_unicos(5, uni), 5);
    test2(get_unicos(6, uni), 10);
    test2(get_unicos(7, uni), 10);
    test2(get_unicos(8, uni), 10);
    free_unicos(uni);
  }

  /* equal */
  
  {
    unico data1[] = { 0, 1, 2, 3, 4, 5 };
    unico data2[] = { 0, 1, 2, 3, 4, 5 };
    unicos *unia = make_unicos(10);
    unicos *unib = make_unicos(10);
    test2(inserts_unicos_manually(data1, sizeof(data1) / sizeof(unico), 0, unia), 0);
    test2(inserts_unicos_manually(data2, sizeof(data2) / sizeof(unico), 0, unib), 0);
    test(equal_unicos(unia, unib));
    free_unicos(unia);
    free_unicos(unib);
  }
  
  {
    unico data1[] = { 0, 1, 2, 3, 4, 5 };
    unico data2[] = { 0, 1, 2, 0, 4, 5 };
    unicos *unia = make_unicos(10);
    unicos *unib = make_unicos(10);
    test2(inserts_unicos_manually(data1, sizeof(data1) / sizeof(unico), 0, unia), 0);
    test2(inserts_unicos_manually(data2, sizeof(data2) / sizeof(unico), 0, unib), 0);
    test(!equal_unicos(unia, unib));
    free_unicos(unia);
    free_unicos(unib);
  }
  
  /* upcase */
  
  {
    unico data[] = { 0x41 };
    unicos *uni = make_unicos(10);
    test2(inserts_unicos_manually(data, sizeof(data) / sizeof(unico), 0, uni), 0);
    test(is_upcase_unicos(0, -1, uni));
    free_unicos(uni);
  }
  
  {
    unico data[] = { 0x61 };
    unicos *uni = make_unicos(10);
    test2(inserts_unicos_manually(data, sizeof(data) / sizeof(unico), 0, uni), 0);
    test(!is_upcase_unicos(0, -1, uni));
    free_unicos(uni);
  }
    
  {
    unico data[] = { 0x46, 0x46 };
    unicos *uni = make_unicos(10);
    test2(inserts_unicos_manually(data, sizeof(data) / sizeof(unico), 0, uni), 0);
    test(is_upcase_unicos(0, -1, uni));
    free_unicos(uni);
  }
  
  {
    unico data[] = { 0xfb00 };
    unicos *uni = make_unicos(10);
    test2(inserts_unicos_manually(data, sizeof(data) / sizeof(unico), 0, uni), 0);
    test(!is_upcase_unicos(0, -1, uni));
    free_unicos(uni);
  }
  
  /* downcase */
  
  {
    unico data[] = { 0x61 };
    unicos *uni = make_unicos(10);
    test2(inserts_unicos_manually(data, sizeof(data) / sizeof(unico), 0, uni), 0);
    test(is_downcase_unicos(0, -1, uni));
    free_unicos(uni);
  }
    
  {
    unico data[] = { 0x41 };
    unicos *uni = make_unicos(10);
    test2(inserts_unicos_manually(data, sizeof(data) / sizeof(unico), 0, uni), 0);
    test(!is_downcase_unicos(0, -1, uni));
    free_unicos(uni);
  }
  
  {
    unico data[] = { 0xfb00 };
    unicos *uni = make_unicos(10);
    test2(inserts_unicos_manually(data, sizeof(data) / sizeof(unico), 0, uni), 0);
    test(is_downcase_unicos(0, -1, uni));
    free_unicos(uni);
  }
  
  {
    unico data[] = { 0x46, 0x46 };
    unicos *uni = make_unicos(10);
    test2(inserts_unicos_manually(data, sizeof(data) / sizeof(unico), 0, uni), 0);
    test(!is_downcase_unicos(0, -1, uni));
    free_unicos(uni);
  }
  
  /* foldcase */

  {
    unico data[] = { 0x61 ,0x02be };
    unicos *uni = make_unicos(10);
    test2(inserts_unicos_manually(data, sizeof(data) / sizeof(unico), 0, uni), 0);
    test(is_foldcase_unicos(0, -1, uni));
    free_unicos(uni);
  }
    
  {
    unico data[] = { 0x1e9a };
    unicos *uni = make_unicos(10);
    test2(inserts_unicos_manually(data, sizeof(data) / sizeof(unico), 0, uni), 0);
    test(!is_foldcase_unicos(0, -1, uni));
    free_unicos(uni);
  }
  
  {
    unico data[] = { 0x66, 0x66 };
    unicos *uni = make_unicos(10);
    test2(inserts_unicos_manually(data, sizeof(data) / sizeof(unico), 0, uni), 0);
    test(is_foldcase_unicos(0, -1, uni));
    free_unicos(uni);
  }
    
  {
    unico data[] = { 0xfb00 };
    unicos *uni = make_unicos(10);
    test2(inserts_unicos_manually(data, sizeof(data) / sizeof(unico), 0, uni), 0);
    test(!is_foldcase_unicos(0, -1, uni));
    free_unicos(uni);
  }
  
  /* title */

  {
    unico data[] = { 0x01f2 };
    unicos *uni = make_unicos(10);
    test2(inserts_unicos_manually(data, sizeof(data) / sizeof(unico), 0, uni), 0);
    test(is_title_unicos(0, -1, uni));
    free_unicos(uni);
  }
    
  {
    unico data[] = { 0x01f1 };
    unicos *uni = make_unicos(10);
    test2(inserts_unicos_manually(data, sizeof(data) / sizeof(unico), 0, uni), 0);
    test(!is_title_unicos(0, -1, uni));
    free_unicos(uni);
  }
  
  /* upcase */
  
  {
    unico data[] = { 0x41 };
    unicos *uni = make_unicos(10);
    test2(inserts_unicos_manually(data, sizeof(data) / sizeof(unico), 0, uni), 0);
    test2(upcase_unicos_manually(0, -1, uni), 0);
    test(is_upcase_unicos(0, -1, uni));
    free_unicos(uni);
  }
  
  {
    unico data[] = { 0x61 };
    unicos *uni = make_unicos(10);
    test2(inserts_unicos_manually(data, sizeof(data) / sizeof(unico), 0, uni), 0);
    test2(upcase_unicos_manually(0, -1, uni), 0);
    test(is_upcase_unicos(0, -1, uni));
    free_unicos(uni);
  }
    
  {
    unico data[] = { 0x46, 0x46 };
    unicos *uni = make_unicos(10);
    test2(inserts_unicos_manually(data, sizeof(data) / sizeof(unico), 0, uni), 0);
    test2(upcase_unicos_manually(0, -1, uni), 0);
    test(is_upcase_unicos(0, -1, uni));
    free_unicos(uni);
  }
  
  {
    unico data[] = { 0xfb00 };
    unicos *uni = make_unicos(10);
    test2(inserts_unicos_manually(data, sizeof(data) / sizeof(unico), 0, uni), 0);
    test2(upcase_unicos_manually(0, -1, uni), 0);
    test(is_upcase_unicos(0, -1, uni));
    free_unicos(uni);
  }
  
  /* downcase */
  
  {
    unico data[] = { 0x61 };
    unicos *uni = make_unicos(10);
    test2(inserts_unicos_manually(data, sizeof(data) / sizeof(unico), 0, uni), 0);
    test2(downcase_unicos_manually(0, -1, uni), 0);
    test(is_downcase_unicos(0, -1, uni));
    free_unicos(uni);
  }
    
  {
    unico data[] = { 0x41 };
    unicos *uni = make_unicos(10);
    test2(inserts_unicos_manually(data, sizeof(data) / sizeof(unico), 0, uni), 0);
    test2(downcase_unicos_manually(0, -1, uni), 0);
    test(is_downcase_unicos(0, -1, uni));
    free_unicos(uni);
  }
  
  {
    unico data[] = { 0xfb00 };
    unicos *uni = make_unicos(10);
    test2(inserts_unicos_manually(data, sizeof(data) / sizeof(unico), 0, uni), 0);
    test2(downcase_unicos_manually(0, -1, uni), 0);
    test(is_downcase_unicos(0, -1, uni));
    free_unicos(uni);
  }
  
  {
    unico data[] = { 0x46, 0x46 };
    unicos *uni = make_unicos(10);
    test2(inserts_unicos_manually(data, sizeof(data) / sizeof(unico), 0, uni), 0);
    test2(downcase_unicos_manually(0, -1, uni), 0);
    test(is_downcase_unicos(0, -1, uni));
    free_unicos(uni);
  }
    
  /* foldcase */
  
  {
    unico data[] = { 0x61 ,0x02be };
    unicos *uni = make_unicos(10);
    test2(inserts_unicos_manually(data, sizeof(data) / sizeof(unico), 0, uni), 0);
    test2(foldcase_unicos_manually(0, -1, uni), 0);
    test(is_foldcase_unicos(0, -1, uni));
    free_unicos(uni);
  }
    
  {
    unico data[] = { 0x1e9a };
    unicos *uni = make_unicos(10);
    test2(inserts_unicos_manually(data, sizeof(data) / sizeof(unico), 0, uni), 0);
    test2(foldcase_unicos_manually(0, -1, uni), 0);
    test(is_foldcase_unicos(0, -1, uni));
    free_unicos(uni);
  }
  
  {
    unico data[] = { 0x66, 0x66 };
    unicos *uni = make_unicos(10);
    test2(inserts_unicos_manually(data, sizeof(data) / sizeof(unico), 0, uni), 0);
    test2(foldcase_unicos_manually(0, -1, uni), 0);
    test(is_foldcase_unicos(0, -1, uni));
    free_unicos(uni);
  }
    
  {
    unico data[] = { 0xfb00 };
    unicos *uni = make_unicos(10);
    test2(inserts_unicos_manually(data, sizeof(data) / sizeof(unico), 0, uni), 0);
    test2(foldcase_unicos_manually(0, -1, uni), 0);
    test(is_foldcase_unicos(0, -1, uni));
    free_unicos(uni);
  }
  
  /* title */
  
  {
    unico data[] = { 0x01f2 };
    unicos *uni = make_unicos(10);
    test2(inserts_unicos_manually(data, sizeof(data) / sizeof(unico), 0, uni), 0);
    test2(title_unicos_manually(0, -1, uni), 0);
    test(is_title_unicos(0, -1, uni));
    free_unicos(uni);
  }
    
  {
    unico data[] = { 0x01f1 };
    unicos *uni = make_unicos(10);
    test2(inserts_unicos_manually(data, sizeof(data) / sizeof(unico), 0, uni), 0);
    test2(title_unicos_manually(0, -1, uni), 0);
    test(is_title_unicos(0, -1, uni));
    free_unicos(uni);
  }
  
  /* nfc */
  
  {
    unico data[] = { 0xc5 };
    unicos *uni = make_unicos(10);
    test2(inserts_unicos_manually(data, sizeof(data) / sizeof(unico), 0, uni), 0);
    test(is_normalize_nfc_unicos(0, -1, uni));
    free_unicos(uni);
  }
    
  {
    unico data[] = { 0x212b };
    unicos *uni = make_unicos(10);
    test2(inserts_unicos_manually(data, sizeof(data) / sizeof(unico), 0, uni), 0);
    test(!is_normalize_nfc_unicos(0, -1, uni));
    free_unicos(uni);
  }
    
  /* nfd */
  
  {
    unico data[] = { 0x41, 0x030a };
    unicos *uni = make_unicos(10);
    test2(inserts_unicos_manually(data, sizeof(data) / sizeof(unico), 0, uni), 0);
    test(is_normalize_nfd_unicos(0, -1, uni));
    free_unicos(uni);
  }
    
  {
    unico data[] = { 0x212b };
    unicos *uni = make_unicos(10);
    test2(inserts_unicos_manually(data, sizeof(data) / sizeof(unico), 0, uni), 0);
    test(!is_normalize_nfd_unicos(0, -1, uni));
    free_unicos(uni);
  }
    
  /* nfkc */
  
  {
    unico data[] = { 0x61 };
    unicos *uni = make_unicos(10);
    test2(inserts_unicos_manually(data, sizeof(data) / sizeof(unico), 0, uni), 0);
    test(is_normalize_nfkc_unicos(0, -1, uni));
    free_unicos(uni);
  }
    
  {
    unico data[] = { 0xaa };
    unicos *uni = make_unicos(10);
    test2(inserts_unicos_manually(data, sizeof(data) / sizeof(unico), 0, uni), 0);
    test(!is_normalize_nfkc_unicos(0, -1, uni));
    free_unicos(uni);
  }
    
  /* nfkd */
  
  {
    unico data[] = { 0x44, 0x5a, 0x030c };
    unicos *uni = make_unicos(10);
    test2(inserts_unicos_manually(data, sizeof(data) / sizeof(unico), 0, uni), 0);
    test(is_normalize_nfkd_unicos(0, -1, uni));
    free_unicos(uni);
  }
    
  {
    unico data[] = { 0x01c4 };
    unicos *uni = make_unicos(10);
    test2(inserts_unicos_manually(data, sizeof(data) / sizeof(unico), 0, uni), 0);
    test(!is_normalize_nfkd_unicos(0, -1, uni));
    free_unicos(uni);
  }
  
  /* nfc */
  
  {
    unico data[] = { 0xc5 };
    unicos *uni = make_unicos(10);
    test2(inserts_unicos_manually(data, sizeof(data) / sizeof(unico), 0, uni), 0);
    test2(normalize_nfc_unicos_manually(0, -1, uni), 0);
    test(is_normalize_nfc_unicos(0, -1, uni));
    free_unicos(uni);
  }
    
  {
    unico data[] = { 0x212b };
    unicos *uni = make_unicos(10);
    test2(inserts_unicos_manually(data, sizeof(data) / sizeof(unico), 0, uni), 0);
    test2(normalize_nfc_unicos_manually(0, -1, uni), 0);
    test(is_normalize_nfc_unicos(0, -1, uni));
    free_unicos(uni);
  }
    
  /* nfd */
  
  {
    unico data[] = { 0x41, 0x030a };
    unicos *uni = make_unicos(10);
    test2(inserts_unicos_manually(data, sizeof(data) / sizeof(unico), 0, uni), 0);
    test2(normalize_nfd_unicos_manually(0, -1, uni), 0);
    test(is_normalize_nfd_unicos(0, -1, uni));
    free_unicos(uni);
  }
    
  {
    unico data[] = { 0x212b };
    unicos *uni = make_unicos(10);
    test2(inserts_unicos_manually(data, sizeof(data) / sizeof(unico), 0, uni), 0);
    test2(normalize_nfd_unicos_manually(0, -1, uni), 0);
    test(is_normalize_nfd_unicos(0, -1, uni));
    free_unicos(uni);
  }
    
  /* nfkc */
  
  {
    unico data[] = { 0x61 };
    unicos *uni = make_unicos(10);
    test2(inserts_unicos_manually(data, sizeof(data) / sizeof(unico), 0, uni), 0);
    test2(normalize_nfkc_unicos_manually(0, -1, uni), 0);
    test(is_normalize_nfkc_unicos(0, -1, uni));
    free_unicos(uni);
  }
    
  {
    unico data[] = { 0xaa };
    unicos *uni = make_unicos(10);
    test2(inserts_unicos_manually(data, sizeof(data) / sizeof(unico), 0, uni), 0);
    test2(normalize_nfkc_unicos_manually(0, -1, uni), 0);
    test(is_normalize_nfkc_unicos(0, -1, uni));
    free_unicos(uni);
  }
    
  /* nfkd */
  
  {
    unico data[] = { 0x44, 0x5a, 0x030c };
    unicos *uni = make_unicos(10);
    test2(inserts_unicos_manually(data, sizeof(data) / sizeof(unico), 0, uni), 0);
    test2(normalize_nfkd_unicos_manually(0, -1, uni), 0);
    test(is_normalize_nfkd_unicos(0, -1, uni));
    free_unicos(uni);
  }
    
  {
    unico data[] = { 0x01c4 };
    unicos *uni = make_unicos(10);
    test2(inserts_unicos_manually(data, sizeof(data) / sizeof(unico), 0, uni), 0);
    test2(normalize_nfkd_unicos_manually(0, -1, uni), 0);
    test(is_normalize_nfkd_unicos(0, -1, uni));
    free_unicos(uni);
  }
  
  /* length */
  
  {
    unico data[] = { 0x41, 0x61, 0x41, 0x61 };
    unicos *uni = make_unicos(10);
    test2(inserts_unicos_manually(data, sizeof(data) / sizeof(unico), 0, uni), 0);
    test2(length_unicos(uni), 4);
    free_unicos(uni);
  }
    
  {
    unico data[] = { 0x41, 0x61, 0x41, 0x300, 0x41, 0x61 };
    unicos *uni = make_unicos(10);
    test2(inserts_unicos_manually(data, sizeof(data) / sizeof(unico), 0, uni), 0);
    test2(length_unicos(uni), 5);
    free_unicos(uni);
  }
  
  /* unicoc */
  
  {
    unico data[] = { 0x41, 0x61, 0x41, 0x300, 0x41, 0x61 };
    unicos *uni = make_unicos(10);
    test2(inserts_unicos_manually(data, sizeof(data) / sizeof(unico), 0, uni), 0);
    unicoc unic;
    test2(get_unicoc_from_unicos(0, uni, &unic), 0);
    test2(size_unicoc(&unic), 1);
    free_unicos(uni);
  }
    
  {
    unico data[] = { 0x41, 0x61, 0x41, 0x300, 0x41, 0x61 };
    unicos *uni = make_unicos(10);
    test2(inserts_unicos_manually(data, sizeof(data) / sizeof(unico), 0, uni), 0);
    unicoc unic;
    test2(get_unicoc_from_unicos(2, uni, &unic), 0);
    test2(size_unicoc(&unic), 2);
    free_unicos(uni);
  }
    
  {
    unico data[] = { 0x41, 0x61, 0x41, 0x300, 0x41, 0x61 };
    unicos *uni = make_unicos(10);
    test2(inserts_unicos_manually(data, sizeof(data) / sizeof(unico), 0, uni), 0);
    unicoc unic;
    test2(get_unicoc_from_unicos(3, uni, &unic), 0);
    test2(size_unicoc(&unic), 1);
    free_unicos(uni);
  }
  
  /* insertion unicoc */
  
  {
    unico data[] = { 0x41, 0x61, 0x41, 0x300, 0x41, 0x61 };
    unicos *uni = make_unicos(10);
    test2(inserts_unicos_manually(data, sizeof(data) / sizeof(unico), 0, uni), 0);
    unicoc unic;
    test2(get_insertion_unicoc_from_unicos(0, uni, &unic), 0);
    test2(size_unicoc(&unic), 0);
    free_unicos(uni);
  }
    
  {
    unico data[] = { 0x41, 0x61, 0x41, 0x300, 0x41, 0x61 };
    unicos *uni = make_unicos(10);
    test2(inserts_unicos_manually(data, sizeof(data) / sizeof(unico), 0, uni), 0);
    unicoc unic;
    test2(get_insertion_unicoc_from_unicos(2, uni, &unic), 0);
    test2(size_unicoc(&unic), 0);
    free_unicos(uni);
  }
    
  {
    unico data[] = { 0x41, 0x61, 0x41, 0x300, 0x41, 0x61 };
    unicos *uni = make_unicos(10);
    test2(inserts_unicos_manually(data, sizeof(data) / sizeof(unico), 0, uni), 0);
    unicoc unic;
    test2(get_insertion_unicoc_from_unicos(3, uni, &unic), 0);
    test2(size_unicoc(&unic), 0);
    free_unicos(uni);
  }
  
  /* unicoc drop */
  
  {
    unico data[] = { 0x41, 0x42, 0x43, 0x44, 0x45 };
    unicos *uni = make_unicos(10);
    test2(inserts_unicos_manually(data, sizeof(data) / sizeof(unico), 0, uni), 0);
    unicoc unic;
    test2(get_unicoc_from_unicos(0, uni, &unic), 0);
    drop_unicoc(0, &unic);
    test2(size_unicoc(&unic), 0);
    test2(size_unicos(uni), 4);
    free_unicos(uni);
  }
  
  {
    unico data[] = { 0x41, 0x42, 0x43, 0x44, 0x45 };
    unicos *uni = make_unicos(10);
    test2(inserts_unicos_manually(data, sizeof(data) / sizeof(unico), 0, uni), 0);
    unicoc unic;
    test2(get_unicoc_from_unicos(0, uni, &unic), 0);
    drop_unicoc(1, &unic);
    test2(size_unicoc(&unic), 1);
    test2(size_unicos(uni), 5);
    free_unicos(uni);
  }
  
  {
    unico data[] = { 0x41, 0x42, 0x43, 0x44, 0x45 };
    unicos *uni = make_unicos(10);
    test2(inserts_unicos_manually(data, sizeof(data) / sizeof(unico), 0, uni), 0);
    unicoc unic;
    test2(get_unicoc_from_unicos(0, uni, &unic), 0);
    drop_unicoc(-1, &unic);
    test2(size_unicoc(&unic), 1);
    test2(size_unicos(uni), 5);
    free_unicos(uni);
  }
  
  /* unicoc drops */
  
  {
    unico data[] = { 0x41, 0x300, 0x300, 0x42, 0x43, 0x44, 0x45 };
    unicos *uni = make_unicos(10);
    test2(inserts_unicos_manually(data, sizeof(data) / sizeof(unico), 0, uni), 0);
    unicoc unic;
    test2(get_unicoc_from_unicos(0, uni, &unic), 0);
    drops_unicoc(0, 1, &unic);
    test2(size_unicoc(&unic), 2);
    test2(size_unicos(uni), 2 + 4);
    test2(get_unicoc(0, &unic), 0x300);
    test2(get_unicoc(1, &unic), 0x300);
    free_unicos(uni);
  }
  
  {
    unico data[] = { 0x41, 0x300, 0x300, 0x42, 0x43, 0x44, 0x45 };
    unicos *uni = make_unicos(10);
    test2(inserts_unicos_manually(data, sizeof(data) / sizeof(unico), 0, uni), 0);
    unicoc unic;
    test2(get_unicoc_from_unicos(0, uni, &unic), 0);
    drops_unicoc(1, 1, &unic);
    test2(size_unicoc(&unic), 2);
    test2(size_unicos(uni), 2 + 4);
    test2(get_unicoc(0, &unic), 0x41);
    test2(get_unicoc(1, &unic), 0x300);
    free_unicos(uni);
  }
  
  {
    unico data[] = { 0x41, 0x300, 0x300, 0x42, 0x43, 0x44, 0x45 };
    unicos *uni = make_unicos(10);
    test2(inserts_unicos_manually(data, sizeof(data) / sizeof(unico), 0, uni), 0);
    unicoc unic;
    test2(get_unicoc_from_unicos(0, uni, &unic), 0);
    drops_unicoc(3, 1, &unic);
    test2(size_unicoc(&unic), 3);
    test2(size_unicos(uni), 3 + 4);
    free_unicos(uni);
  }
  
  {
    unico data[] = { 0x41, 0x300, 0x300, 0x42, 0x43, 0x44, 0x45 };
    unicos *uni = make_unicos(10);
    test2(inserts_unicos_manually(data, sizeof(data) / sizeof(unico), 0, uni), 0);
    unicoc unic;
    test2(get_unicoc_from_unicos(0, uni, &unic), 0);
    drops_unicoc(-1, 1, &unic);
    test2(size_unicoc(&unic), 3);
    test2(size_unicos(uni), 3 + 4);
    free_unicos(uni);
  }
  
  {
    unico data[] = { 0x41, 0x300, 0x300, 0x42, 0x43, 0x44, 0x45 }; // 7 = 3 . 4
    unicos *uni = make_unicos(10);
    test2(inserts_unicos_manually(data, sizeof(data) / sizeof(unico), 0, uni), 0);
    unicoc unic;
    test2(get_unicoc_from_unicos(0, uni, &unic), 0);
    drops_unicoc(0, 3, &unic);
    test2(size_unicoc(&unic), 0);
    test2(size_unicos(uni), 4);
    free_unicos(uni);
  }
  
  {
    unico data[] = { 0x41, 0x300, 0x300, 0x42, 0x43, 0x44, 0x45 };
    unicos *uni = make_unicos(10);
    test2(inserts_unicos_manually(data, sizeof(data) / sizeof(unico), 0, uni), 0);
    unicoc unic;
    test2(get_unicoc_from_unicos(0, uni, &unic), 0);
    drops_unicoc(0, -1, &unic);
    test2(size_unicoc(&unic), 0);
    test2(size_unicos(uni), 4);
    free_unicos(uni);  
  }
    
  /* unicoc insert */
  
  {
    unico data[] = { 0x41, 0x42, 0x43 };
    unicos *uni = make_unicos(10);
    test2(inserts_unicos_manually(data, sizeof(data) / sizeof(unico), 0, uni), 0);
    unicoc unic;
    test2(get_unicoc_from_unicos(0, uni, &unic), 0);
    test2(insert_unicoc_manually(0x41, 0, &unic), 0);
    test2(size_unicoc(&unic), 2);
    test2(size_unicos(uni), 4);
    free_unicos(uni);
  }
    
  {
    unico data[] = { 0x41, 0x42, 0x43 };
    unicos *uni = make_unicos(10);
    test2(inserts_unicos_manually(data, sizeof(data) / sizeof(unico), 0, uni), 0);
    unicoc unic;
    test2(get_unicoc_from_unicos(0, uni, &unic), 0);
    test2(insert_unicoc_manually(0x300, 1, &unic), 0);
    test2(size_unicoc(&unic), 2);
    test2(size_unicos(uni), 4);
    free_unicos(uni);
  }
  
  {
    unico data[] = { 0x41, 0x42, 0x43 };
    unicos *uni = make_unicos(10);
    test2(inserts_unicos_manually(data, sizeof(data) / sizeof(unico), 0, uni), 0);
    unicoc unic;
    test2(get_unicoc_from_unicos(0, uni, &unic), 0);
    test2(insert_unicoc_manually(0x300, -1, &unic), 0);
    test2(size_unicoc(&unic), 2);
    test2(size_unicos(uni), 4);
    free_unicos(uni);
  }
  
  /* unicoc inserts */
  
  {
    unico data1[] = { 0x41, 0x42, 0x43 };
    unico data2[] = { 0x00, 0x00 };
    unicos *uni = make_unicos(10);
    test2(inserts_unicos_manually(data1, sizeof(data1) / sizeof(unico), 0, uni), 0);
    unicoc unic;
    test2(get_unicoc_from_unicos(0, uni, &unic), 0);
    test2(inserts_unicoc_manually(data2, sizeof(data2) / sizeof(unico), 0, &unic), 0);
    test2(size_unicoc(&unic), 3);
    test2(size_unicos(uni), 2 + 3);
    free_unicos(uni);
  }
  
  {
    unico data1[] = { 0x41, 0x42, 0x43 };
    unico data2[] = { 0x00, 0x00 };
    unicos *uni = make_unicos(10);
    test2(inserts_unicos_manually(data1, sizeof(data1) / sizeof(unico), 0, uni), 0);
    unicoc unic;
    test2(get_unicoc_from_unicos(0, uni, &unic), 0);
    test2(inserts_unicoc_manually(data2, sizeof(data2) / sizeof(unico), 1, &unic), 0);
    test2(size_unicoc(&unic), 3);
    test2(size_unicos(uni), 2 + 3);
    free_unicos(uni);
  }
  
  {
    unico data1[] = { 0x41, 0x42, 0x43 };
    unico data2[] = { 0x00, 0x00 };
    unicos *uni = make_unicos(10);
    test2(inserts_unicos_manually(data1, sizeof(data1) / sizeof(unico), 0, uni), 0);
    unicoc unic;
    test2(get_unicoc_from_unicos(0, uni, &unic), 0);
    test2(inserts_unicoc_manually(data2, sizeof(data2) / sizeof(unico), -1, &unic), 0);
    test2(size_unicoc(&unic), 3);
    test2(size_unicos(uni), 2 + 3);
    free_unicos(uni);
  }
  
  /* unicoc sub */
  
  {
    unico data1[] = { 0x41, 0x42, 0x43 };
    unico data2[] = { 0x00, 0x00 };
    unicos *uni = make_unicos(10);
    test2(inserts_unicos_manually(data1, sizeof(data1) / sizeof(unico), 0, uni), 0);
    unicoc unic;
    test2(get_unicoc_from_unicos(0, uni, &unic), 0);
    test2(sub_unicoc_manually(data2, sizeof(data2) / sizeof(unico), 0, 0, &unic), 0);
    test2(size_unicoc(&unic), 3);
    test2(size_unicos(uni), 3 + 2);
    free_unicos(uni);
  }
  
  {
    unico data1[] = { 0x41, 0x42, 0x43 };
    unico data2[] = { 0x00, 0x00 };
    unicos *uni = make_unicos(10);
    test2(inserts_unicos_manually(data1, sizeof(data1) / sizeof(unico), 0, uni), 0);
    unicoc unic;
    test2(get_unicoc_from_unicos(0, uni, &unic), 0);
    test2(sub_unicoc_manually(data2, sizeof(data2) / sizeof(unico), 0, 1, &unic), 0);
    test2(size_unicoc(&unic), 2);
    test2(size_unicos(uni), 2 + 2);
    free_unicos(uni);
  }
  
  {
    unico data1[] = { 0x41, 0x42, 0x43 };
    unico data2[] = { 0x00, 0x00 };
    unicos *uni = make_unicos(10);
    test2(inserts_unicos_manually(data1, sizeof(data1) / sizeof(unico), 0, uni), 0);
    unicoc unic;
    test2(get_unicoc_from_unicos(0, uni, &unic), 0);
    test2(sub_unicoc_manually(data2, sizeof(data2) / sizeof(unico), 0, -1, &unic), 0);
    test2(size_unicoc(&unic), 2);
    test2(size_unicos(uni), 2 + 2);
    free_unicos(uni);
  }
  
  {
    unico data1[] = { 0x41, 0x42, 0x43 };
    unico data2[] = { 0x00, 0x00 };
    unicos *uni = make_unicos(10);
    test2(inserts_unicos_manually(data1, sizeof(data1) / sizeof(unico), 0, uni), 0);
    unicoc unic;
    test2(get_unicoc_from_unicos(0, uni, &unic), 0);
    test2(sub_unicoc_manually(data2, sizeof(data2) / sizeof(unico), 1, 0, &unic), 0);
    test2(size_unicoc(&unic), 3);
    test2(size_unicos(uni), 3 + 2);
    free_unicos(uni);
  }
  
  {
    unico data1[] = { 0x41, 0x42, 0x43 };
    unico data2[] = { 0x00, 0x00 };
    unicos *uni = make_unicos(10);
    test2(inserts_unicos_manually(data1, sizeof(data1) / sizeof(unico), 0, uni), 0);
    unicoc unic;
    test2(get_unicoc_from_unicos(0, uni, &unic), 0);
    test2(sub_unicoc_manually(data2, sizeof(data2) / sizeof(unico), 1, 1, &unic), 0);
    test2(size_unicoc(&unic), 3);
    test2(size_unicos(uni), 3 + 2);
    free_unicos(uni);
  }
  
  {
    unico data1[] = { 0x41, 0x42, 0x43 };
    unico data2[] = { 0x00, 0x00 };
    unicos *uni = make_unicos(10);
    test2(inserts_unicos_manually(data1, sizeof(data1) / sizeof(unico), 0, uni), 0);
    unicoc unic;
    test2(get_unicoc_from_unicos(0, uni, &unic), 0);
    test2(sub_unicoc_manually(data2, sizeof(data2) / sizeof(unico), -1, -1, &unic), 0);
    test2(size_unicoc(&unic), 3);
    test2(size_unicos(uni), 3 + 2);
    free_unicos(uni);
  }
  
  /* utf8 */
  
  {
    unicos *uni = make_unicos(128);
    unicop_utf8 unip;
    init_unicop_utf8(uni, &unip);
    
    FILE *stream = fopen("test/utf8.txt", "r");
    int character;
    while ((character = fgetc(stream)) != EOF)
      test2(put_unicop_utf8(character, &unip), 0);
    fclose(stream);
    
    print_unicos_as_utf8_ln(uni, stdout);
    free_unicos(uni);
  }
  
  {
    unicos *uni = make_unicos(128);
    unicop_utf8 unip;
    init_unicop_utf8(uni, &unip);
    
    FILE *stream = fopen("test/utf8n.txt", "r");
    int character;
    while ((character = fgetc(stream)) != EOF)
      test2(put_unicop_utf8(character, &unip), 0);
    fclose(stream);
    
    print_unicos_as_utf8_ln(uni, stdout);
    free_unicos(uni);
  }
  
  /* utf16 */
  
  {
    unicos *uni = make_unicos(128);
    unicop_utf16 unip;
    init_unicop_utf16(uni, UNICOP_UTF16_BOM_ENDIAN, &unip);
    
    FILE *stream = fopen("test/utf16.txt", "r");
    int character;
    while ((character = fgetc(stream)) != EOF)
      test2(put_unicop_utf16(character, &unip), 0);
    fclose(stream);
    
    print_unicos_as_utf8_ln(uni, stdout);
    free_unicos(uni);
  }
  
  {
    unicos *uni = make_unicos(128);
    unicop_utf16 unip;
    init_unicop_utf16(uni, UNICOP_UTF16_BOM_ENDIAN, &unip);
    
    FILE *stream = fopen("test/utf16-2.txt", "r");
    int character;
    while ((character = fgetc(stream)) != EOF)
      test2(put_unicop_utf16(character, &unip), 0);
    fclose(stream);
    
    print_unicos_as_utf8_ln(uni, stdout);
    free_unicos(uni);
  }
  
  {
    unicos *uni = make_unicos(128);
    unicop_utf16 unip;
    init_unicop_utf16(uni, UNICOP_UTF16_BIG_ENDIAN, &unip);
    
    FILE *stream = fopen("test/utf16be.txt", "r");
    int character;
    while ((character = fgetc(stream)) != EOF)
      test2(put_unicop_utf16(character, &unip), 0);
    fclose(stream);
    
    print_unicos_as_utf8_ln(uni, stdout);
    free_unicos(uni);
  }
  
  {
    unicos *uni = make_unicos(128);
    unicop_utf16 unip;
    init_unicop_utf16(uni, UNICOP_UTF16_LITTLE_ENDIAN, &unip);
    
    FILE *stream = fopen("test/utf16le.txt", "r");
    int character;
    while ((character = fgetc(stream)) != EOF)
      test2(put_unicop_utf16(character, &unip), 0);
    fclose(stream);
    
    print_unicos_as_utf8_ln(uni, stdout);
    free_unicos(uni);
  }
  
  /* utf32 */

  {
    unicos *uni = make_unicos(128);
    unicop_utf32 unip;
    init_unicop_utf32(uni, UNICOP_UTF32_BOM_ENDIAN, &unip);
    
    FILE *stream = fopen("test/utf32.txt", "r");
    int character;
    while ((character = fgetc(stream)) != EOF)
      test2(put_unicop_utf32(character, &unip), 0);
    fclose(stream);
    
    print_unicos_as_utf8_ln(uni, stdout);
    free_unicos(uni);
  }
  
  {
    unicos *uni = make_unicos(128);
    unicop_utf32 unip;
    init_unicop_utf32(uni, UNICOP_UTF32_BOM_ENDIAN, &unip);
    
    FILE *stream = fopen("test/utf32-2.txt", "r");
    int character;
    while ((character = fgetc(stream)) != EOF)
      test2(put_unicop_utf32(character, &unip), 0);
    fclose(stream);
    
    print_unicos_as_utf8_ln(uni, stdout);
    free_unicos(uni);
  }
  
  {
    unicos *uni = make_unicos(128);
    unicop_utf32 unip;
    init_unicop_utf32(uni, UNICOP_UTF32_BIG_ENDIAN, &unip);
    
    FILE *stream = fopen("test/utf32be.txt", "r");
    int character;
    while ((character = fgetc(stream)) != EOF)
      test2(put_unicop_utf32(character, &unip), 0);
    fclose(stream);
    
    print_unicos_as_utf8_ln(uni, stdout);
    free_unicos(uni);
  }
  
  {
    unicos *uni = make_unicos(128);
    unicop_utf32 unip;
    init_unicop_utf32(uni, UNICOP_UTF32_LITTLE_ENDIAN, &unip);
    
    FILE *stream = fopen("test/utf32le.txt", "r");
    int character;
    while ((character = fgetc(stream)) != EOF)
      test2(put_unicop_utf32(character, &unip), 0);
    fclose(stream);
    
    print_unicos_as_utf8_ln(uni, stdout);
    free_unicos(uni);
  }
  
  return 0;
  
}
