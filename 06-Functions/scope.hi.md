### **1. कोड टिप्पणियों के बिना:**
```c
#include <stdio.h>

int globalVar = 10;

void display() {
    int localVar = 20;
    printf("Global Variable: %d\n", globalVar);
    printf("Local Variable: %d\n", localVar);
}

int main() {
    display();
    return 0;
}
```

### **2. कोड टिप्पणियों और व्याख्याओं के साथ:**
```c
#include <stdio.h>  // मानक इनपुट-आउटपुट लाइब्रेरी को शामिल करता है, जिससे printf जैसी फंक्शंस का उपयोग संभव होता है

int globalVar = 10;  // एक ग्लोबल वेरिएबल 'globalVar' घोषित करता है और उसे 10 मान देता है

// ग्लोबल और लोकल वेरिएबल्स को डिस्प्ले करने वाला फंक्शन
void display() {
    int localVar = 20;  // एक लोकल वेरिएबल 'localVar' घोषित करता है और उसे 20 मान देता है

    // ग्लोबल वेरिएबल 'globalVar' का मान प्रिंट करता है
    printf("Global Variable: %d\n", globalVar);

    // लोकल वेरिएबल 'localVar' का मान प्रिंट करता है
    printf("Local Variable: %d\n", localVar);
}

int main() {  // मुख्य फ़ंक्शन जहां प्रोग्राम का निष्पादन शुरू होता है
    display();  // 'display' फंक्शन को कॉल करता है ताकि ग्लोबल और लोकल वेरिएबल्स प्रिंट हो सकें
    return 0;   // 0 लौटाता है, जो सफल प्रोग्राम निष्पादन को संकेत करता है
}
```

### व्याख्या:

- **`#include <stdio.h>`**: यह लाइब्रेरी `printf` जैसी इनपुट-आउटपुट फंक्शंस का उपयोग करने के लिए आवश्यक है।

- **`int globalVar = 10;`**: यह एक ग्लोबल वेरिएबल `globalVar` को 10 मान देता है, जिसे प्रोग्राम के किसी भी फंक्शन द्वारा एक्सेस किया जा सकता है।

- **`void display()`**: यह फंक्शन ग्लोबल और लोकल वेरिएबल्स को प्रिंट करता है। इसमें `int localVar = 20;` लोकल वेरिएबल `localVar` को 20 मान देता है, जो केवल `display` फंक्शन के अंदर उपयोग किया जा सकता है।

- **`printf("Global Variable: %d\n", globalVar);`**: यह ग्लोबल वेरिएबल `globalVar` का मान प्रिंट करता है।

- **`printf("Local Variable: %d\n", localVar);`**: यह लोकल वेरिएबल `localVar` का मान प्रिंट करता है।

- **`int main()`**: यह मुख्य फ़ंक्शन है जहां प्रोग्राम का निष्पादन शुरू होता है। इसमें `display()` फंक्शन को कॉल किया जाता है ताकि दोनों वेरिएबल्स का मान प्रिंट किया जा सके। प्रोग्राम `return 0;` के साथ समाप्त होता है, जो सफल निष्पादन को संकेत करता है।
