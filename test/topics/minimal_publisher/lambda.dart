import 'package:rcldart/rcldart.dart';
import 'package:dartx/dartx.dart';
/* This example creates a subclass of Node and uses a fancy C++11 lambda
 * function to shorten the callback syntax, at the expense of making the
 * code somewhat more difficult to understand at first glance. */

class MinimalPublisher  extends Node
{
  MinimalPublisher()
  :  _count = 0, super('minimal_publisher')
  {
    _publisher = create_publisher<std_msgs.String>('topic', 10);
    final timer_callback =
      () {
        final message = std_msgs.String();
        message.data = 'Hello, world! ${count++}';
        RCLDART_INFO(get_logger(), "Publishing: '${message.data}'");
        _publisher.publish(message);
      };
    _timer = create_wall_timer(500.milliseconds, timer_callback);
  }

  late TimerBase _timer;
  Publisher<std_msgs.String> _publisher;
  int _count;
};

int main(List<String> args)
{
  init(args);
  spin(MinimalPublisher());
  shutdown();
  return 0;
}
