void io_hlt(void);
void write_mem8(int addr, int data);
void wait(int x) {
    x *= 1000;
    while (x--);
}
void HariMain(void)
{
    char *i; /* �ϐ��錾�Bi�Ƃ����ϐ��́A32�r�b�g�̐����^ */
    int cnt;
    while (1) {
        for (i = (char*)0xa0000; i <= (char*)0xaffff; i++) {
            *i = (((int)i - cnt) >> 1) & 0x0f; 
        }
        cnt = (cnt + 1) & 0xffff;
        wait(100000);
    }
}