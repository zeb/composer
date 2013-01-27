#import <Cocoa/Cocoa.h>
#import <WebKit/WebKit.h>
#import "MainView.h"
#import "ExtendedWebView.h"
#import "WebViewDelegates.h"

@interface SubstanceAppDelegate : NSObject <NSApplicationDelegate> {
  NSWindow *window;
  MainView *mainView;
  WebView *webView;

  WebViewWithExtensions *m_webExtension;
  WebViewLoadDelegate *m_loadDelegate;
  WebViewPolicyDelegate *m_policyDelegate;
  NSTask *m_redisProcess;
}

- (void) dealloc;

@property (assign) IBOutlet NSWindow *window;
@property (assign) IBOutlet WebView *webView;
@property (assign) IBOutlet MainView *mainView;

@end
