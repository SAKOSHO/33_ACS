/* 
 * File:   ACS.h
 * Author: ���X����
 *
 * Created on 2021/06/30, 17:34
 */

#ifndef ACS_H
#define	ACS_H

/*---ACS CAN Message---*/
/* SIDH */
#define SIDH_READ   0b10000000                                                  //���[�h��p
#define SIDH_MODE   0b10000001                                                  //���[�h���
#define SIDH_DATA1  0b10001011                                                  //����ʃf�[�^

/* SIDL */
#define SIDL_W      0b00001001                                                  //W�̎���ID
#define SIDL_R      0b00001000                                                  //R�̎���ID

/* EID8 */
#define EID8_READ   0b00000000
#define EID8_MODE   0b00000000
#define EID8_DATA1  0b00000000
        
/* EID0 */
#define EID0_READ   0b00000000
#define EID0_MODE   0b00000011
#define EID0_DATA1  0b00010000
        
/* Filter */
#define Sub_Filt    0b10000000


/*---Modebit---*/
#define _ChargeMode                          0b00000001
#define _COMMMode                            0b00000010
#define _StanbyMode                          0b00000011
#define _MissionMode                         0b00000100
#define _SafetyMode                          0b00000101

#endif


