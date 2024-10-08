Here's the provided C code with Hindi comments and explanations added:

```c
#include <stdio.h>  // मानक इनपुट-आउटपुट लाइब्रेरी को शामिल करता है, जो printf जैसी फ़ंक्शन को उपलब्ध कराता है

int main() {  // मुख्य फ़ंक्शन जहाँ से प्रोग्राम का निष्पादन शुरू होता है

    // कंसोल पर "Hello, World!" संदेश प्रिंट करता है और नई पंक्ति पर जाता है
    printf("Hello, World!\n");  // %s जैसे फ़ॉर्मेट स्पेसिफायर की आवश्यकता नहीं है क्योंकि यह सीधे स्ट्रिंग लिटरल है

    return 0;  // 0 रिटर्न करता है, यह संकेत देता है कि प्रोग्राम सफलतापूर्वक समाप्त हो गया है
}
```

### **मुख्य बिंदुओं की व्याख्या:**

1. **मानक I/O लाइब्रेरी**: `#include <stdio.h>` C में इनपुट-आउटपुट ऑपरेशन करने के लिए आवश्यक फ़ंक्शंस को शामिल करता है, जैसे कि `printf`।
2. **मुख्य फ़ंक्शन**: `int main()` C में प्रोग्राम के निष्पादन का मुख्य प्रवेश बिंदु है।
3. **कंसोल पर प्रिंट करना**: `printf("Hello, World!\n");` कथन कंसोल पर "Hello, World!" संदेश प्रिंट करता है और नई पंक्ति पर चला जाता है `\n` के साथ।
4. **सीधे स्ट्रिंग लिटरल**: चूंकि प्रिंट करने के लिए टेक्स्ट सीधे स्ट्रिंग लिटरल के रूप में प्रदान किया गया है, इसलिए `%s` जैसे फ़ॉर्मेट स्पेसिफायर की आवश्यकता नहीं है।
5. **रिटर्न स्टेटमेंट**: `return 0;` संकेत करता है कि प्रोग्राम सफलतापूर्वक निष्पादित हो गया है और ऑपरेटिंग सिस्टम को नियंत्रण वापस लौटाता है।
