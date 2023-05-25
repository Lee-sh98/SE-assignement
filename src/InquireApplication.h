#pragma once

#include "Applicant.h"
#include "InquireApplicationUI.h"

class InquireApplication {
private:
	InquireApplicationUI* inquireApplicationUI;	// InquireApplicationUI�� ����ϴ� InquireApplication boundary ��ü 
public:
	InquireApplication();	// InquireApplication Ŭ���� ������
	InquireApplicationUI* getInquireApplicationUI();	// inquireApplicationUI*�� ��ȯ�Ѵ�
	ApplicationCollection* showApplication(Applicant* applicant);	// �ڽ��� ������ ������ ��ȸ�Ѵ�

};