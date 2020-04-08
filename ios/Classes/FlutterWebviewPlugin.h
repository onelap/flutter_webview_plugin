#import <Flutter/Flutter.h>
#import <WebKit/WebKit.h>

static FlutterMethodChannel *channel;

@interface FLTWKWebView : WKWebView
@end

@interface FlutterWebviewPlugin : NSObject<FlutterPlugin>
@property (nonatomic, retain) UIViewController *viewController;
@property (nonatomic, retain) FLTWKWebView *webview;
@end
