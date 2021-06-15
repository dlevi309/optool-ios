#import <Foundation/Foundation.h>

@interface NSTask : NSObject

- (instancetype __nonnull)init;
- (void)launch;
- (void)waitUntilExit;
- (int)terminationStatus;
- (void)setArguments:(NSArray<NSString *> * __nullable)args;
- (void)setLaunchPath:(NSString * __nullable)path;
- (void)setStandardOutput:(id __nullable)output;
- (void)setStandardError:(id __nullable)output;
- (id __nullable)standardOutput;

@end
