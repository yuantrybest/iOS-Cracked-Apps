//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "DTMicroApplicationDelegate.h"

@class APLiveDemoMainController, NSString, UIViewController;

@interface APLiveBusinessAppDelegate : NSObject <DTMicroApplicationDelegate>
{
    APLiveDemoMainController *_root1Controller;
    UIViewController *_root2Controller;
}

@property(retain, nonatomic) UIViewController *root2Controller; // @synthesize root2Controller=_root2Controller;
@property(retain, nonatomic) APLiveDemoMainController *root1Controller; // @synthesize root1Controller=_root1Controller;
- (void).cxx_destruct;
- (void)applicationWillTerminate:(id)arg1 animated:(_Bool)arg2;
- (void)application:(id)arg1 willResumeWithOptions:(id)arg2;
- (void)applicationWillPause:(id)arg1;
- (void)applicationDidFinishLaunching:(id)arg1;
- (void)application:(id)arg1 willStartLaunchingWithOptions:(id)arg2;
- (void)applicationDidCreate:(id)arg1;
- (id)rootControllerInApplication:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

