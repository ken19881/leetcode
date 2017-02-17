# https://leetcode.com/problems/compare-version-numbers/

class Solution(object):
    def compareVersion(self, version1, version2):
        """
        :type version1: str
        :type version2: str
        :rtype: int
        """
        v1 = version1.split('.')
        v2 = version2.split('.')
        i = 0;

        while (len(v1) != len(v2)):
            if (len(v1) < len(v2)):
                v1.append('0')
            else:
                v2.append('0')

        while i < len(v1):
            delta = int(v1[i]) - int(v2[i]);
            if 0 < delta:
                return 1
            elif 0 > delta:
                return -1
            i += 1
        return 0
