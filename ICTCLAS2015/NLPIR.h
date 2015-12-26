extern "C" int NLPIR_Init(const char * sDataPath,int encode,const char * sLicenceCode);

extern "C" bool NLPIR_Exit();

extern "C" const char * NLPIR_ParagraphProcess(const char * sParagraph,int bPOStagged);
