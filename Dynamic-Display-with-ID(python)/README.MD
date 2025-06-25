# 📡 Dynamic Output Control in Jupyter using `display_id`

## 🇸🇦 وصف المشروع (بالعربية)

هذا المشروع يستعرض كيفية التحكم في عرض الإخراج داخل **Jupyter Notebook** بشكل ديناميكي باستخدام `display_id`. يتم ذلك من خلال دالة مخصصة `display_with_id` تتيح عرض البيانات وتحديثها في نفس الموضع دون تكرار الخرج.

### ✅ ما يقدمه المشروع:

- استخدام دالة `display_with_id` لعرض الكائنات.
- تحديث الإخراج في نفس الموضع باستخدام `update=True`.
- دعم عرض ناتج التنفيذ عبر `execute_result=True`.
- تقليل التكرار في عرض البيانات داخل الخلايا.

### 🛠️ متطلبات التشغيل

- Python 3.9 أو أعلى
- Jupyter Notebook (ضمن توزيعة Anaconda)
- مكتبة `IPython.display` (مضمّنة تلقائيًا)

### ▶️ كيفية التشغيل

1. افتح الملف داخل Jupyter Notebook.
2. شغّل الخلايا البرمجية بالتتابع.
3. راقب كيف يتم تحديث الإخراج دون إنشاء مخرجات متكررة.
4. جرّب تعديل القيم لتشاهد كيف تتغير النتائج في نفس الموقع.

---

## 🇬🇧 Project Description (English)

This project demonstrates how to **dynamically control output display** in Jupyter Notebook using `display_id`. A custom function `display_with_id` is used to either display new content, update existing output, or show execution results in the same output cell.

### ✅ Features

- Use `display_with_id` to display objects with a unique ID.
- Update output in-place using `update=True`.
- Render as execution result using `execute_result=True`.
- Prevents clutter by avoiding repeated output cells.

### 🛠️ Requirements

- Python 3.9+
- Jupyter Notebook (via Anaconda)
- Built-in `IPython.display` module

### ▶️ How to Run

1. Open the notebook using Jupyter.
2. Run the cells sequentially.
3. Observe how outputs are updated in the same position.
4. Modify values to test live updates.

---

