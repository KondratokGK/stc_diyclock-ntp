/* https://github.com/Kyle-xq/AutoSW/blob/master/soft/serial/serial.c
 * 
 * 
 * 
 * */

#define FOSC    11059200L		
#define BAUD 57600             


#define NONE_PARITY     0       //��У��
#define ODD_PARITY      1       //��У��
#define EVEN_PARITY     2       //żУ��
#define MARK_PARITY     3       //���У��
#define SPACE_PARITY    4       //�հ�У��

#define PARITYBIT NONE_PARITY   //����У��λ

#define S1_S0 0x40              //P_SW1.6
#define S1_S1 0x80              //P_SW1.7

//~ void serial_init ();
//~ char serial_ReciveData();
//~ void serial_SendData(char dat);
//~ void serial_SendString(char *s);
