### **1. Code without comments:**
```c
#include <stdio.h>

int main() {
    int number = 10;
    printf("Address of number: %p\n", &number);
    return 0;
}
```

### **2. Code with comments and explanations:**
```c
#include <stdio.h>  // इनपुट-आउटपुट कार्यों के लिए मानक लाइब्रेरी शामिल करता है

int main() {  // मुख्य फ़ंक्शन जहां प्रोग्राम निष्पादन शुरू होता है
    int number = 10;  // एक पूर्णांक वेरिएबल 'number' घोषित करता है और इसे 10 का मान असाइन करता है

    // 'number' वेरिएबल का मेमोरी पता प्रिंट करता है, %p प्रारूप निर्देशक का उपयोग करके जो प्वाइंटर (पता) को प्रिंट करता है
    printf("Address of number: %p\n", &number);  // &number 'number' वेरिएबल के मेमोरी पते को प्राप्त करता है

    return 0;  // सफल प्रोग्राम निष्पादन को सूचित करने के लिए 0 लौटाता है
}
```

### Explanation:

- `#include <stdio.h>`: यह मानक इनपुट-आउटपुट लाइब्रेरी को शामिल करता है, जो `printf` जैसे फ़ंक्शंस के लिए आवश्यक है।
- `int number = 10;`: यह `number` नामक एक पूर्णांक वेरिएबल को घोषित करता है और इसे `10` का मान असाइन करता है।
- `printf("Address of number: %p\n", &number);`: `printf` का उपयोग करके `number` वेरिएबल का मेमोरी पता प्रिंट करता है:
  - `%p` प्रारूप निर्देशक प्वाइंटर (पता) को प्रिंट करने के लिए उपयोग किया जाता है।
  - `&number` वेरिएबल `number` का मेमोरी पता देता है।
- `return 0;`: `main` से 0 लौटाता है, जो बताता है कि प्रोग्राम सफलतापूर्वक निष्पादित हुआ है।