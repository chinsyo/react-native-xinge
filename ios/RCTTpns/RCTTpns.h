
#import <React/RCTEventEmitter.h>
#import <React/RCTBridgeModule.h>



@interface RCTTpns : RCTEventEmitter 

+ (void)didFinishLaunchingWithOptions:(NSDictionary *)launchOptions;

+ (void)didReceiveRemoteNotification:(NSDictionary *)userInfo fetchCompletionHandler:(void (^)(UIBackgroundFetchResult))completionHandler;

@end
