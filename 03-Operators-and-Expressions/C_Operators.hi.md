### **1. Code without comments:**
```c
#include <stdio.h>

int main() {
    int a = 10, b = 20;
    int sum = a + b;
    printf("Sum: %d\n", sum);
    return 0;
}
```

### **2. Code with comments and explanations:**
```c
#include <stdio.h>  // मानक इनपुट-आउटपुट लाइब्रेरी को शामिल करता है, जो printf जैसे फ़ंक्शन प्रदान करता है

int main() {  // मुख्य फ़ंक्शन जहां प्रोग्राम निष्पादन शुरू होता है
    int a = 10, b = 20;  // दो पूर्णांक चर 'a' और 'b' को घोषित करता है और उन्हें क्रमशः 10 और 20 का मान सौंपता है
    int sum = a + b;  // एक पूर्णांक चर 'sum' को घोषित करता है और 'a + b' के परिणाम को इसमें स्टोर करता है

    // 'sum' के मान को %d प्रारूप विनिर्देशक का उपयोग करके प्रिंट करता है
    printf("Sum: %d\n", sum);  // 'a + b' का परिणाम कंसोल पर आउटपुट करता है

    return 0;  // 0 लौटाता है, यह सूचित करता है कि प्रोग्राम सफलतापूर्वक निष्पादित हुआ है
}
```

### Explanation

- `#include <stdio.h>` निर्देश मानक I/O लाइब्रेरी को शामिल करता है, जो `printf` जैसे आउटपुट संचालन के लिए फ़ंक्शन प्रदान करता है।
- `main` फ़ंक्शन वह मुख्य बिंदु है जहां प्रोग्राम का निष्पादन शुरू होता है।
- दो पूर्णांक चर `a` और `b` को घोषित और क्रमशः `10` और `20` के मान से प्रारंभ किया गया है।
- एक पूर्णांक चर `sum` को घोषित किया गया है जो `a` और `b` को जोड़ने के परिणाम को संग्रहीत करता है।
- `printf` फ़ंक्शन `sum` का मान कंसोल पर प्रिंट करता है। `%d` प्रारूप विनिर्देशक पूर्णांक मानों को प्रदर्शित करने के लिए उपयोग किया जाता है।
- प्रोग्राम `return 0;` के साथ समाप्त होता है, जो सफल निष्पादन को सूचित करता है और ऑपरेटिंग सिस्टम को नियंत्रण लौटाता है।