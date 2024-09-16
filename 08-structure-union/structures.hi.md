### **1. Code without comments:**
```c
#include <stdio.h>

struct Person {
    char name[50];
    int age;
};

int main() {
    struct Person person = {"John Doe", 30};
    printf("Name: %s\n", person.name);
    printf("Age: %d\n", person.age);
    return 0;
}
```

### **2. Code with comments and explanations:**
```c
#include <stdio.h>  // इनपुट-आउटपुट कार्यों के लिए मानक लाइब्रेरी शामिल करता है

// 'Person' नामक एक संरचना परिभाषित करता है जिसमें दो सदस्य होते हैं: एक कैरेक्टर ऐरे 'name' और एक पूर्णांक 'age'
struct Person {
    char name[50];  // व्यक्ति का नाम स्टोर करने के लिए ऐरे, 49 कैरेक्टर और एक नल टर्मिनेटर के साथ
    int age;        // व्यक्ति की आयु स्टोर करने के लिए पूर्णांक
};

int main() {  // मुख्य फ़ंक्शन जहां प्रोग्राम निष्पादन शुरू होता है
    // 'struct Person' प्रकार का एक वेरिएबल 'person' घोषित करता है और इसे "John Doe" और 30 से प्रारंभ करता है
    struct Person person = {"John Doe", 30};
    
    // 'person' संरचना के 'name' सदस्य को प्रिंट करता है
    printf("Name: %s\n", person.name);

    // 'person' संरचना के 'age' सदस्य को प्रिंट करता है
    printf("Age: %d\n", person.age);

    return 0;  // सफल प्रोग्राम निष्पादन को सूचित करने के लिए 0 लौटाता है
}
```

### Explanation:

- `#include <stdio.h>`: यह मानक इनपुट-आउटपुट लाइब्रेरी को शामिल करता है, जो `printf` जैसे फ़ंक्शंस के लिए आवश्यक है।
- `struct Person { char name[50]; int age; };`: यह एक संरचना `Person` को परिभाषित करता है, जिसमें:
  - `char name[50];` व्यक्ति का नाम स्टोर करने के लिए एक ऐरे है, जिसमें 49 कैरेक्टर और एक नल टर्मिनेटर शामिल हैं।
  - `int age;` व्यक्ति की आयु स्टोर करने के लिए एक पूर्णांक है।
- `struct Person person = {"John Doe", 30};`: `struct Person` प्रकार का एक वेरिएबल `person` बनाता है, जिसे `name` के लिए `"John Doe"` और `age` के लिए `30` से प्रारंभ करता है।
- `printf("Name: %s\n", person.name);`: `person` संरचना के `name` सदस्य को प्रिंट करता है।
- `printf("Age: %d\n", person.age);`: `person` संरचना के `age` सदस्य को प्रिंट करता है.
- `return 0;`: `main` से 0 लौटाता है, जो बताता है कि प्रोग्राम सफलतापूर्वक निष्पादित हुआ है।
