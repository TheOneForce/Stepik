// Получаем элемент, содержащий условие и другой текст
let contentElement = document.querySelector("div.html-content.rich-text-viewer.ember-view");

// Получаем текст из элемента без лишних пробелов и переносов
let contentText = contentElement.innerText;

// Создаем переменную для хранения текста
let contentVariable;

// Создаем пустую строку для хранения текста без пустых строк и с пропусками перед определенными строками
let contentWithBreaks = ""; // Сократил название переменной

// Проходим по каждой строке в тексте
for (let line of contentText.split("\n")) {
  // Если строка не пустая, то добавляем ее к строке без пустых строк и с пропусками перед определенными строками
  if (line.trim() !== "") {
    // Если строка начинается с "Input data format" или "Output Format" или "Note", то добавляем к ней дополнительный перенос
    if (line.startsWith("Input") || line.startsWith("Output") || line.startsWith("Note")) {
      line = "\n" + line;
    }
    contentWithBreaks += line + "\n";
  }
}

// Копируем текст без пустых строк и с пропусками перед определенными строками в переменную
contentVariable = contentWithBreaks;

// Добавляем комментарии к тексту
contentVariable = "/*\n" + contentVariable + "*/\n\n\n\n";

// Получаем все элементы pre с классом CodeMirror-line, которые содержат строки кода
let pres = document.querySelectorAll("pre.CodeMirror-line");

// Проходим по всем элементам и добавляем их текст в строку с переносом строки
for (let pre of pres) {
  contentVariable += pre.outerText + "\n";
}

// Заменяем все символы "   " (0xa0) на " " (4 пробела) с помощью метода replace() и регулярного выражения / /g 
contentVariable = contentVariable.replace(/\u00a0/g, "\u0020");
contentVariable = contentVariable.replace(/\u200b/g, "");

// Создаем объект Blob из текста с типом text/plain
let blob = new Blob([contentVariable], {type: "text/plain"});

// Создаем объект URL из объекта Blob
let url = URL.createObjectURL(blob);

// Получаем элемент title в head, который содержит номер задания
let title = document.querySelector("head > title");

// Получаем текст из title
let titleText = title.textContent;

// Разделяем текст по пробелу и берем второе слово, которое будет номером задания
let quizId = titleText.split(" ")[1];

// Создаем название файла из номера задания и расширения .cpp
let fileName = quizId + ".cpp";

// Создаем временный элемент a для сохранения файла
let a = document.createElement("a");
a.href = url;
a.download = fileName;

// Добавляем элемент a в документ
document.body.appendChild(a);

// Кликаем по элементу a для сохранения файла
a.click();

// Удаляем элемент a из документа
document.body.removeChild(a);

// Выводим сообщение об успешном сохранении файла
console.log("Файл сохранен на компьютере");