# 🔄 تحديث الإخراج ديناميكيًا باستخدام display_with_id في Jupyter

## 🇸🇦 وصف المشروع (بالعربية)

هذا المشروع يشرح طريقة استخدام `display_id` لتحديث الإخراج داخل **Jupyter Notebook** دون تكرار أو إعادة طباعة الخرج في كل مرة. من خلال تعريف دالة `display_with_id`، يمكن عرض كائنات ثم تحديثها لاحقًا باستخدام نفس `display_id`.

### ✅ المميزات

- عرض أولي باستخدام `display_with_id`.
- تحديث نفس الموضع في الخرج باستخدام `update=True`.
- دعم عرض ناتج تنفيذ (`execute_result=True`) أو عرض عادي.
- إدارة أكثر تنظيماً لمخرجات الخلايا في Jupyter.

### 🧠 فكرة الاستخدام

بدل طباعة قيمة جديدة أسفل القديمة، يمكن تحديث القيمة المعروضة في نفس الموقع باستخدام `display_id`، وهذا مفيد في:

- التطبيقات التفاعلية.
- مراقبة القيم الحية (Live updates).
- عرض واجهات ديناميكية داخل الخلايا.

### 🛠️ المتطلبات

- Python 3.9 أو أعلى
- Jupyter Notebook (ضمن Anaconda)
- مكتبة `IPython.display` (مدمجة افتراضيًا)

### ▶️ كيفية الاستخدام

1. افتح الملف باستخدام Jupyter Notebook داخل Anaconda.
2. شغّل الخلية الأولى لتعريف الدالة.
3. نفّذ الخلايا التالية واحدة تلو الأخرى.
4. لاحظ كيف يتم تحديث القيمة الظاهرة دون إنشاء مخرجات جديدة.

---

## 🇬🇧 Project Description (English)

This project demonstrates how to use `display_id` in **Jupyter Notebook** to dynamically update displayed content instead of printing multiple outputs. By defining a helper function `display_with_id`, you can control where and how content appears in the notebook.

### ✅ Features

- Initial display using `display_with_id`.
- Update existing display using the same `display_id` (`update=True`).
- Supports both standard display and `execute_result` output types.
- Provides clean and interactive output areas.

### 🧠 Use Case

Instead of printing new outputs below old ones, this technique updates the existing display location. Useful for:

- Interactive applications.
- Live data monitoring.
- Dynamic dashboards in Jupyter.

### 🛠️ Requirements

- Python 3.9+
- Jupyter Notebook (Anaconda)
- `IPython.display` (included by default)

### ▶️ How to Use

1. Open the notebook in Jupyter via Anaconda.
2. Run the first cell to define the function.
3. Execute the remaining cells sequentially.
4. Observe how the outputs are updated in-place instead of being printed multiple times.
