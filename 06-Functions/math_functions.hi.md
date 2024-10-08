### **1. कोड टिप्पणियों के बिना:**
```c
#include <stdio.h>
#include <math.h>

int main() {
    double num = 9.0;
    printf("Square root of %.2f is %.2f\n", num, sqrt(num));
    return 0;
}
```

### **2. कोड टिप्पणियों और व्याख्याओं के साथ:**
```c
#include <stdio.h>   // मानक इनपुट-आउटपुट लाइब्रेरी को शामिल करता है, जिससे printf जैसी फंक्शंस का उपयोग संभव होता है
#include <math.h>    // गणितीय फंक्शंस जैसे sqrt() का उपयोग करने के लिए गणित लाइब्रेरी को शामिल करता है

int main() {  // मुख्य फ़ंक्शन जहां प्रोग्राम का निष्पादन शुरू होता है
    double num = 9.0;  // 'num' नामक डबल प्रकार का वेरिएबल घोषित करता है और उसे 9.0 मान देता है

    // 'sqrt()' फंक्शन का उपयोग करके 'num' का स्क्वायर रूट प्रिंट करता है
    // '%.2f' का उपयोग करके फ्लोटिंग-पॉइंट नंबर को 2 दशमलव स्थानों तक फॉर्मेट करता है
    printf("Square root of %.2f is %.2f\n", num, sqrt(num));

    return 0;  // 0 लौटाता है, जो सफल प्रोग्राम निष्पादन को संकेत करता है
}
```

### व्याख्या:

- **`#include <stdio.h>`**: यह लाइन `printf` जैसी इनपुट-आउटपुट ऑपरेशंस के लिए मानक इनपुट-आउटपुट लाइब्रेरी को शामिल करती है।

- **`#include <math.h>`**: यह गणितीय फंक्शंस जैसे `sqrt()` के उपयोग के लिए गणित लाइब्रेरी को शामिल करती है।

- **`double num = 9.0;`**: यह `num` नामक डबल प्रकार के वेरिएबल को 9.0 के मान से इनिशियलाइज़ करता है।

- **`sqrt(num)`**: यह `num` का स्क्वायर रूट कैलकुलेट करता है, और `%.2f` यह सुनिश्चित करता है कि आउटपुट दो दशमलव स्थानों तक फॉर्मेटेड हो।

- प्रोग्राम `return 0;` के साथ समाप्त होता है, जो यह संकेत करता है कि प्रोग्राम सफलतापूर्वक निष्पादित हुआ है।

यह कोड `sqrt()` फंक्शन का उपयोग करके एक संख्या (9.0) का स्क्वायर रूट कैलकुलेट करता है और परिणाम को फॉर्मेट करके कंसोल पर प्रिंट करता है।
