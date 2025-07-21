#include <stdio.h>
float f(int n){
    for(int i=1;i<n;i++){
        int sum = 0;
        sum += i;
        float res = 1/(float)sum;
    }
}
uint32_t little_to_big_endian32(uint32_t num) {
    if (!is_little_endian()) {
        return num;  // 系统是大端序，直接返回
    }
    return ((num >> 24) & 0xFF) |        // 移动最高字节到最低位
           ((num >> 8) & 0xFF00) |       // 移动次高字节
           ((num << 8) & 0xFF0000) |     // 移动次低字节
           ((num << 24) & 0xFF000000);   // 移动最低字节到最高位
}
#include <stdio.h>
#include <string.h>

char* max_common_substring(const char* s1, const char* s2) {
    int max_len = 0;
    int end_pos = 0;
    int len1 = strlen(s1);
    int len2 = strlen(s2);

    // 遍历所有可能的起始位置
    for (int i = 0; i < len1; i++) {
        for (int j = 0; j < len2; j++) {
            int k = 0;
            // 比较从当前位置开始的字符
            while (i + k < len1 && j + k < len2 && s1[i + k] == s2[j + k]) {
                k++;
            }
            // 更新最大长度和位置
            if (k > max_len) {
                max_len = k;
                end_pos = i;
            }
        }
    }
    // 提取结果
    char* result = malloc(max_len + 1);
    strncpy(result, s1 + end_pos, max_len);
    result[max_len] = '\0';
    return result;
}

int main() {
    char* s1 = "adbccadebbca";
    char* s2 = "edabccadece";
    char* res = max_common_substring(s1, s2);
    printf("最大公共子串: %s\n", res);  // 输出 "bccade"
    free(res);
    return 0;
}