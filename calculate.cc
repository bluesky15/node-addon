// calculate.cc
#include <node.h>

    void Sum(const v8::FunctionCallbackInfo<v8::Value>& args)
    {
      v8::Isolate *isolate = args.GetIsolate();
        double i;
        double x = 3.1415926, y = 2.718;
        for (i = 0; i < 1000000000; i++)
        {
            x += y;
        }
        auto total = v8::Number::New(isolate, x);
        args.GetReturnValue().Set(total);
    }
    void Initialize(v8::Local<v8::Object> exports)
    {
        NODE_SET_METHOD(exports, "sum", Sum);
    }
    NODE_MODULE(calculate, Initialize);
