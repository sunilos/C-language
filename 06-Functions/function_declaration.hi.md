### **1. कोड टिप्पणियों के बिना:**
```c
#include <stdio.h>

void greet();

int main() {
    greet();
    return 0;
}

void greet() {
    printf("Hello from a declared function!\n");
}
```

### **2. कोड टिप्पणियों और व्याख्याओं के साथ:**
```c
#include <stdio.h>  // प्रीप्रोसेसर निर्देश जो मानक इनपुट/आउटपुट लाइब्रेरी को शामिल करता है

// 'greet' के लिए फ़ंक्शन प्रोटोटाइप डिक्लेरेशन
void greet();

int main() {
    // 'greet' फ़ंक्शन को कॉल करना
    greet();
    return 0;  // यह संकेत करता है कि प्रोग्राम सफलतापूर्वक समाप्त हुआ
}

// 'greet' के लिए फ़ंक्शन परिभाषा
void greet() {
    // कंसोल पर एक संदेश प्रिंट करता है
    printf("Hello from a declared function!\n");
}
```

### व्याख्या:

1. **`#include <stdio.h>`**: यह लाइन कंपाइलर को बताती है कि मानक इनपुट/आउटपुट लाइब्रेरी को शामिल किया जाए। यह लाइब्रेरी `printf()` जैसी फंक्शंस के उपयोग के लिए आवश्यक है, जिसका उपयोग टेक्स्ट को कंसोल पर प्रिंट करने के लिए किया जाता है।

2. **`void greet();`**: यह एक फ़ंक्शन प्रोटोटाइप है। यह घोषित करता है कि `greet` नाम का एक फ़ंक्शन है जो कोई आर्ग्युमेंट नहीं लेता और कोई मान नहीं लौटाता (`void`)। यह कंपाइलर को बताता है कि `greet` नाम का फ़ंक्शन बाद में कोड में परिभाषित किया जाएगा।

3. **`int main()`**: यह मुख्य फ़ंक्शन है जहां प्रोग्राम निष्पादन शुरू होता है। हर C प्रोग्राम में एक `main` फ़ंक्शन होना चाहिए। यह एक पूर्णांक लौटाता है, जिसमें `0` आमतौर पर यह संकेत करता है कि प्रोग्राम सफलतापूर्वक चला है।

4. **`greet();`**: `main` फ़ंक्शन के अंदर, यह लाइन `greet` फ़ंक्शन को कॉल करती है। जब `greet` को कॉल किया जाता है, तो प्रोग्राम `greet` फ़ंक्शन की परिभाषा पर जाता है और उसके अंदर के कोड को निष्पादित करता है।

5. **`return 0;`**: यह लाइन इंगित करती है कि `main` फ़ंक्शन एक मान `0` ऑपरेटिंग सिस्टम को लौटा रहा है। यह एक पारंपरिक तरीका है यह संकेत करने का कि प्रोग्राम सफलतापूर्वक समाप्त हुआ है।

6. **`void greet()`**: यह `greet` फ़ंक्शन की परिभाषा है। यह निर्दिष्ट करता है कि `greet` कोई पैरामीटर नहीं लेता और कोई मान नहीं लौटाता है।

7. **`printf("Hello from a declared function!\n");`**: `greet` फ़ंक्शन के अंदर, यह लाइन `"Hello from a declared function!\n"` स्ट्रिंग को कंसोल पर प्रिंट करती है। `\n` एक न्यूलाइन कैरेक्टर है जो स्ट्रिंग प्रिंट करने के बाद कर्सर को अगले लाइन पर ले जाता है।

टिप्पणियाँ और व्याख्याएँ कोड के प्रत्येक भाग के उद्देश्य और कार्यक्षमता को स्पष्ट करने का प्रयास करती हैं ताकि बेहतर समझ हो सके।
