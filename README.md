# mse-template

## Установка и запуск

### Запуск через готовый Docker-образ

Скачайте образ из Docker Hub:

```bash
docker pull pasabanov/mse1h2026-helper:latest
```

Запустите контейнер, передав ссылку на Pull Request:

```bash
docker run pasabanov/mse1h2026-helper PULL_REQUEST_URL
```

---

### Сборка Docker-образа локально

Клонируйте репозиторий и перейдите в директорию проекта:

```bash
git clone https://github.com/moevm/mse1h2026-helper
cd mse1h2026-helper
```

Соберите Docker-образ из Dockerfile:

```bash
docker build -t mse1h2026-helper .
```

После сборки запустите контейнер, передав ссылку на Pull Request:

```bash
docker run mse1h2026-helper PULL_REQUEST_URL
```

---

## Проверка работоспособности

Для проверки работы приложения можно запустить контейнер с тестовой ссылкой на Pull Request:

```bash
docker run pasabanov/mse1h2026-helper https://github.com/moevm/mse1h2026-helper/pull/16
```
Или, если образ был собран локально:
```bash
docker run mse1h2026-helper https://github.com/moevm/mse1h2026-helper/pull/16
```
Если приложение работает корректно, в консоли появится результат обработки указанного Pull Request.