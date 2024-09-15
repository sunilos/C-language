Here’s the code with comments and explanations in Hindi:

### **1. कोड बिना टिप्पणियों के:**
```c
#include <stdio.h>

int main() {
    FILE *file = fopen("example.txt", "w");
    
    if (file == NULL) {
        printf("Failed to create file.\n");
        return 1;
    }

    printf("File created successfully.\n");

    fclose(file);

    return 0;
}
```

### **2. कोड टिप्पणियों और स्पष्टीकरण के साथ:**
```c
#include <stdio.h>  // इनपुट-आउटपुट ऑपरेशंस के लिए मानक लाइब्रेरी को शामिल करता है

int main() {  // मुख्य फ़ंक्शन जहाँ से प्रोग्राम की कार्यवाही शुरू होती है
    // 'file' नामक FILE प्रकार का एक पॉइंटर घोषित करता है और "example.txt" को लेखन के लिए खोलता है
    FILE *file = fopen("example.txt", "w");
    
    // जांचता है कि फाइल सफलतापूर्वक बनाई और खोली गई है या नहीं
    if (file == NULL) {
        // यदि फाइल निर्माण विफल हो जाता है, तो एक त्रुटि संदेश प्रिंट करता है और 1 लौटाता है
        printf("Failed to create file.\n");
        return 1;  // त्रुटि इंगित करने के लिए 1 लौटाता है
    }

    // यदि फाइल सफलतापूर्वक बनाई गई है, तो सफलता संदेश प्रिंट करता है
    printf("File created successfully.\n");

    // फाइल को बंद करता है ताकि संसाधन मुक्त हो सकें
    fclose(file);

    return 0;  // सफल प्रोग्राम निष्पादन को इंगित करने के लिए 0 लौटाता है
}
```

### स्पष्टीकरण:

- `#include <stdio.h>` फ़ाइल ऑपरेशंस के लिए आवश्यक फ़ंक्शंस को शामिल करता है।
- `FILE *file = fopen("example.txt", "w");` "example.txt" नाम की फाइल को लेखन के लिए खोलता है। अगर फाइल नहीं है तो इसे बनाया जाएगा।
- `if (file == NULL)` जांचता है कि फाइल निर्माण विफल हुआ या नहीं। अगर विफल हुआ, तो त्रुटि संदेश प्रिंट करता है और प्रोग्राम `1` लौटाता है।
- `printf("File created successfully.\n");` फाइल सफलतापूर्वक बनाई गई और खोली गई है तो सफलता संदेश प्रिंट करता है।
- `fclose(file);` फाइल को बंद करता है जब ऑपरेशंस समाप्त हो जाते हैं।
