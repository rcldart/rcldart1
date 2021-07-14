class Parameter<T> {
  Parameter(this.name, T value) : value = ParameterValue(_value);
  final String name;
  final ParameterValue<T> _value;
  ParameterType get parameterType;
  String get typeName;
  T get value => _value.value;
}

class ParameterValue<T> {
  ParameterValue(this.value);
  T value;
}

class ParameterType {}
