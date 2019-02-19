#import "AppDelegate.h"
#import <TwitterKit/TwitterKit.h>

@interface AppDelegate (TwitterConnect)
- (BOOL)application:(UIApplication *)app openURL:(NSURL *)url options:(NSDictionary *)options;

@end