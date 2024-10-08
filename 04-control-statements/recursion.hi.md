### **1. कोड बिना टिप्पणियों के:**
```c
#include <stdio.h>

int factorial(int n) {
    if (n == 0) return 1;
    else return n * factorial(n - 1);
}

int main() {
    int number = 5;
    printf("Factorial of %d is %d\n", number, factorial(number));
    return 0;
}
```

### **2. कोड टिप्पणियों और व्याख्याओं के साथ:**
```c
#include <stdio.h>  // मानक इनपुट-आउटपुट लाइब्रेरी को शामिल करता है जो इनपुट-आउटपुट कार्यों के लिए आवश्यक है

/**
 * @brief एक दिए गए गैर-नकारात्मक पूर्णांक का फैक्टोरियल पुनरावृत्ति का उपयोग करके गणना करता है।
 * 
 * यह फ़ंक्शन 'n' के फैक्टोरियल की गणना करने के लिए स्वयं को पुनरावृत्त करता है।
 * 
 * @param n वह पूर्णांक जिसके लिए फैक्टोरियल गणना किया जाना है।
 * @return int पूर्णांक 'n' का फैक्टोरियल।
 */
int factorial(int n) {
    if (n == 0) return 1;  /**< आधार केस: 0 का फैक्टोरियल 1 है। */
    else return n * factorial(n - 1);  /**< पुनरावृत्त केस: n को (n - 1) का फैक्टोरियल से गुणा करता है। */
}

int main() {
    int number = 5;  /**< पूर्णांक वेरिएबल जिसे 5 से प्रारंभ किया गया है। */

    // फैक्टोरियल फ़ंक्शन को कॉल करता है और परिणाम प्रिंट करता है
    printf("Factorial of %d is %d\n", number, factorial(number));  /**< 'number' का फैक्टोरियल प्रिंट करता है। */

    return 0;   /**< सफल निष्पादन को सूचित करने के लिए 0 लौटाता है। */
}
```

### व्याख्या

- **`#include <stdio.h>`**: यह निर्देश मानक I/O लाइब्रेरी को शामिल करता है, जो `printf` जैसे आउटपुट कार्यों के लिए आवश्यक है।
- **`int factorial(int n)`**: यह फ़ंक्शन एक दिए गए गैर-नकारात्मक पूर्णांक का फैक्टोरियल गणना करता है।
  - यदि `n` `0` है, तो फ़ंक्शन `1` लौटाता है, जो पुनरावृत्ति का आधार केस है।
  - किसी अन्य मान के लिए, फ़ंक्शन `n` को `(n - 1)` के फैक्टोरियल से गुणा करता है, जिसे पुनरावृत्ति के माध्यम से गणना की जाती है।
- **`int main()`**: यह प्रोग्राम की शुरुआत का बिंदु है।
  - एक पूर्णांक वेरिएबल `number` को `5` से प्रारंभ किया गया है।
  - `printf` फ़ंक्शन का उपयोग `factorial` फ़ंक्शन के परिणाम को प्रिंट करने के लिए किया जाता है, जो `number` का फैक्टोरियल गणना करता है।
- प्रोग्राम **`return 0;`** के साथ समाप्त होता है, जो सफल निष्पादन को सूचित करता है और ऑपरेटिंग सिस्टम को नियंत्रण लौटाता है।
