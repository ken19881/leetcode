// https://leetcode.com/problems/compare-version-numbers/

int compareVersion(char* version1, char* version2) {
    char buf1[1024];
	char buf2[1024];
	char* pchv1 = NULL;
	char* pchv2 = NULL;
	char* save1 = NULL;
	char* save2 = NULL;

	strncpy(buf1, version1, sizeof(buf1));
	strncpy(buf2, version2, sizeof(buf1));
	pchv1 = strtok_r(buf1, ".", &save1);
	pchv2 = strtok_r(buf2, ".", &save2);

	while (NULL != pchv1 || NULL != pchv2) {
		int ret = 0;
		if (pchv1 && pchv2) {

		} else if (NULL == pchv1) {
			pchv1 = "0";
		} else if (NULL == pchv2) {
			pchv2 = "0";
		}
		ret = atoi(pchv1) - atoi(pchv2);
		if (0 < ret) {
			return 1;
		} else if (0 > ret) {
			return -1;
		}
		pchv1 = strtok_r(NULL, ".", &save1);
		pchv2 = strtok_r(NULL, ".", &save2);
	}
	return 0;
}
