### **1. कोड टिप्पणियों के बिना:**
```c
#include <stdio.h>

void greet() {
    printf("Hello, World!\n");
}

int main() {
    greet();
    return 0;
}
```

### **2. कोड टिप्पणियों और व्याख्याओं के साथ:**
```c
#include <stdio.h>   // मानक इनपुट-आउटपुट लाइब्रेरी को शामिल करता है, जिससे printf जैसी फंक्शंस का उपयोग संभव होता है

void greet() {  // 'greet' फ़ंक्शन की परिभाषा, जो कंसोल पर एक संदेश प्रिंट करता है
    printf("Hello, World!\n");  // "Hello, World!" संदेश को कंसोल पर प्रिंट करता है
}

int main() {  // मुख्य फ़ंक्शन जहाँ प्रोग्राम का निष्पादन शुरू होता है
    greet();  // 'greet' फ़ंक्शन को कॉल करता है, जिससे संदेश प्रदर्शित होता है
    return 0;  // 0 लौटाता है, जो सफल प्रोग्राम निष्पादन को संकेत करता है
}
```

### व्याख्या:

- **`#include <stdio.h>`**: यह लाइन `printf` जैसी फंक्शंस के उपयोग के लिए मानक इनपुट-आउटपुट लाइब्रेरी को शामिल करती है।
  
- **`void greet()`**: यह `greet` फ़ंक्शन की परिभाषा है, जो कोई मान नहीं लौटाता है (`void`) और कंसोल पर "Hello, World!" प्रिंट करता है।

- **`printf("Hello, World!\n");`**: यह लाइन "Hello, World!" को कंसोल पर प्रिंट करती है, और `\n` एक नई पंक्ति को दर्शाता है।

- **`int main()`**: यह मुख्य फ़ंक्शन है, जहां से प्रोग्राम का निष्पादन शुरू होता है। 

- **`greet();`**: `main` फ़ंक्शन के अंदर, यह लाइन `greet` फ़ंक्शन को कॉल करती है, जिससे "Hello, World!" प्रदर्शित होता है।

- **`return 0;`**: यह लाइन प्रोग्राम के सफल निष्पादन को संकेत करती है और ऑपरेटिंग सिस्टम को `0` लौटाती है।

यह कोड `greet` नामक एक साधारण फ़ंक्शन को परिभाषित करता है जो एक संदेश प्रिंट करता है और `main` फ़ंक्शन में इसे कॉल करके इसका उपयोग करता है।