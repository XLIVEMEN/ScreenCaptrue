#ifndef __CryptKeyUtils_H_20131030_
#define __CryptKeyUtils_H_20131030_

///*
//	���ܣ����ܻ����һ������
//	������
//		szPud	   - ��Ʒ��ʶ��¼��ϵͳΪ��"KHR"
//		pIn	     - ��������
//		nIn  	   - �������ݳ���
//    pOut     - ������ݻ���
//    nOut 	   - ������ݻ��峤��
//    bEncrypt - ���ܻ����
//	���أ��ɹ�����������ݳ���, ʧ�ܷ���0
// */
//
//unsigned Crypt(const char *szPud, unsigned char *pIn, unsigned nIn, unsigned char *pOut, unsigned nOut, bool bEncrypt);
//
///*
//	���ܣ���Ȩ����
//	������
//		szPud	- ��Ʒ��ʶ��¼��ϵͳΪ��"KHR"
//		pBuf	- ʶ���루�����룬�忨ID�ȵȣ�
//		nLen	- ʶ���볤��(�ַ���������������0,ʹ��strlen��ȡ���ȼ���)
//		szKey	- ע����
//	���أ����ɹ�����true,ʧ�ܷ���false 
//	ʾ����CryptKeyCheck("KHR", "111", 3, "KHR-C0D6-7127-4E7F3A21");
// */
//
//bool CryptKeyCheck(const char *szPud, const void *pBuf, int nLen, const char *szKey);
//
///*
//	���ܣ���ȡ������ʶ
//	������
//		szID	- ������ʶ��
//	���أ����ػ�����ʶ��ʵ�ʳ��ȣ�ʧ�ܷ���0
// */
//
//int GetSysID(char szID[64]);
//
///*
//	���ܣ����ܹ����
//	������
//		szPud	- ��Ʒ��ʶ��¼��ϵͳΪ��"KHR"
//	���أ��ɹ�����TRUE��ʧ�ܷ���FALSE
// */
//
//bool DogCheck(const char *szPud);

#endif //__CryptKeyUtils_H_20131030_