#include "InquireApplication.h"
#include <iostream>

InquireApplication::InquireApplication() {
}

/*
	�Լ� �̸� : InquireApplication::getInquireApplicationUI()
	���	  : InquireApplication control�� attribute�� �ϳ��� inquireApplicationUI*�� ��ȯ�Ѵ�
	���� ���� : ����
	��ȯ��    : InquireApplication �� ������
*/
InquireApplicationUI* InquireApplication::getInquireApplicationUI() {

	return this->inquireApplicationUI;
}


/*
	�Լ� �̸� : InquireApplication::showApplication()
	���	  : �ڽ��� ������ ������ ��ȸ�Ѵ�
	���� ���� : applicant->Applicant �� ������
	��ȯ��    : ApplicationCollection �� ������
*/
ApplicationCollection* InquireApplication::showApplication(Applicant* applicant) {
	return applicant->listApplications();
}