int change(string s){//����string���Ͳ��� 

	string a("һ"); 
	string b("��"); 
	string c("��"); 
	string d("��"); 
	string e("��"); 
	string f("��");  
	if (s.substr(0,2)==a||s.substr(0,2)==b)
		return 1; //һ���꼶����1 
	if (s.substr(0,2)==c||s.substr(0,2)==d)
		return 2; //�����꼶����2 
	if (s.substr(0,2)==e||s.substr(0,2)==f)
		return 3;//�����꼶����3 
}
