/**
 * @Auther: yls
 * @Date: 2020/10/19 13:11
 * @Description:  
 * @Version 1.0
 */

#include <stdio.h>


/**
 * �������������\��:
 * һ����ͨ��д��һ�������ϡ����������̫����һ���������ɲ��£���ʹ�ú������������\��
 */
/**
 * �ַ����������������#��:
 * �ں궨���У�����Ҫ��һ����Ĳ���ת��Ϊ�ַ�������ʱ��
 * ��ʹ���ַ����������������#�����ں���ʹ�õĸ��������һ���ض��Ĳ���������б�
 */
#define message_for(a,b)\
    printf(#a " and " #b ": We love you!\n")

/**
 * ���ճ���������##��:
 * �궨���ڵı��ճ���������##����ϲ������������������ں궨�������������ı�Ǳ��ϲ�Ϊһ����ǡ�
 */
#define  tokenpaster(n) printf("token" #n " = %d",token##n)

/**
 * defined() �����:
 * Ԥ������ defined ����������ڳ������ʽ�еģ�����ȷ��һ����ʶ���Ƿ��Ѿ�ʹ�� #define �������
 * ���ָ���ı�ʶ���Ѷ��壬��ֵΪ�棨���㣩�����ָ���ı�ʶ��δ���壬��ֵΪ�٣��㣩��
 */
#if !defined(MESSAGE)
    #define MESSAGE "You wish!"
#endif

/**
 * �������ĺ꣺
 * ��ʹ�ô��в����ĺ�֮ǰ������ʹ�� #define ָ��塣
 * �����б�������Բ�����ڣ��ұ�������ں����Ƶĺ�ߡ�
 * �����ƺ���Բ����֮�䲻�����пո�
 */
#define MAX(x,y) ((x) > (y) ? (x) : (y))


void main(){
    printf("File :%s\n",__FILE__);
    printf("Date :%s\n",__DATE__);
    printf("Time :%s\n",__TIME__);
    printf("Line :%d\n",__LINE__);
    printf("ANSI :%d\n",__STDC__);

    message_for(Carole,Debra);

    int token34 = 40;

    tokenpaster(34);

    printf("\n");
    printf("Here is the message: %s\n",MESSAGE);

    printf("Max between 20 and 10 is %d\n",MAX(10,20));
}