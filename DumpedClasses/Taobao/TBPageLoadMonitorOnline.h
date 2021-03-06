//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AliPerformanceLifeCycleProtocol.h"
#import "AliPerformanceRenderDelegate.h"

@class AliPerformanceRender, NSString, UIViewController;

@interface TBPageLoadMonitorOnline : NSObject <AliPerformanceLifeCycleProtocol, AliPerformanceRenderDelegate>
{
    _Bool _isLaunchInvalidate;
    _Bool _isResignActive;
    _Bool _isAppLaunched;
    _Bool _isVaildOSVersion;
    _Bool _isVaildUpdateTime;
    float _pageLoadExperienceValue;
    float _appLaunchExperienceValue;
    unsigned long long _lastClickTime;
    unsigned long long _launchStartTime;
    unsigned long long _launchEndTime;
    unsigned long long _launchFineEndTime;
    unsigned long long _renderEndTime;
    UIViewController *_recentPushVC;
    UIViewController *_curViewController;
    UIViewController *_curRealViewController;
    AliPerformanceRender *_readerSample;
}

+ (void)load;
@property(retain, nonatomic) AliPerformanceRender *readerSample; // @synthesize readerSample=_readerSample;
@property(nonatomic) __weak UIViewController *curRealViewController; // @synthesize curRealViewController=_curRealViewController;
@property(nonatomic) __weak UIViewController *curViewController; // @synthesize curViewController=_curViewController;
@property(nonatomic) __weak UIViewController *recentPushVC; // @synthesize recentPushVC=_recentPushVC;
@property(nonatomic) unsigned long long renderEndTime; // @synthesize renderEndTime=_renderEndTime;
@property(nonatomic) unsigned long long launchFineEndTime; // @synthesize launchFineEndTime=_launchFineEndTime;
@property(nonatomic) unsigned long long launchEndTime; // @synthesize launchEndTime=_launchEndTime;
@property(nonatomic) unsigned long long launchStartTime; // @synthesize launchStartTime=_launchStartTime;
@property(nonatomic) float appLaunchExperienceValue; // @synthesize appLaunchExperienceValue=_appLaunchExperienceValue;
@property(nonatomic) float pageLoadExperienceValue; // @synthesize pageLoadExperienceValue=_pageLoadExperienceValue;
@property(nonatomic) _Bool isVaildUpdateTime; // @synthesize isVaildUpdateTime=_isVaildUpdateTime;
@property(nonatomic) _Bool isVaildOSVersion; // @synthesize isVaildOSVersion=_isVaildOSVersion;
@property(nonatomic) unsigned long long lastClickTime; // @synthesize lastClickTime=_lastClickTime;
@property(nonatomic) _Bool isAppLaunched; // @synthesize isAppLaunched=_isAppLaunched;
@property(nonatomic) _Bool isResignActive; // @synthesize isResignActive=_isResignActive;
@property(nonatomic) _Bool isLaunchInvalidate; // @synthesize isLaunchInvalidate=_isLaunchInvalidate;
- (void).cxx_destruct;
- (void)uploadPerformanceData:(double)arg1 netRequestCost:(double)arg2 andPageName:(id)arg3 andOldCost:(double)arg4 andIsLaunch:(_Bool)arg5;
- (void)notificationRenderEnd:(id)arg1;
- (_Bool)calculateLoadTime:(unsigned long long)arg1 andEndTime:(unsigned long long)arg2 andRenderTime:(unsigned long long)arg3 andCost:(double *)arg4 andOldCost:(double *)arg5;
- (void)launchPerformance;
- (void)loadVCPerformance;
- (_Bool)isOpenRenderSample;
- (_Bool)isOpenDisableSample;
- (void)userClick;
- (void)updateLoadPerformance:(id)arg1 andIsFine:(_Bool)arg2;
- (void)startTrace:(id)arg1 startTime:(unsigned long long)arg2;
- (id)init;
- (void)stopSampleRenderPixel;
- (void)startSampleRenderPixel:(id)arg1;
- (void)viewDidLayoutSubviews:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1 viewController:(id)arg2;
- (void)uiViewLayoutSubviews;
- (void)navigationDidEndTransitionFromView:(id)arg1 toView:(id)arg2;
- (void)handlePageChange:(long long)arg1 fromVC:(id)arg2 toVC:(id)arg3 args:(id)arg4;
- (void)appWillResignActive:(id)arg1;
- (void)applicationOpenURL:(id)arg1;
- (void)userEvent;
- (void)copyLoadData:(unsigned long long)arg1 fromViewController:(id)arg2 toViewController:(id)arg3;
- (void)setViewController:(id)arg1 withHaveLayout:(_Bool)arg2;
- (void)setViewController:(id)arg1 withLayoutTime:(unsigned long long)arg2;
- (void)setViewController:(id)arg1 withStartTime:(unsigned long long)arg2;
- (void)generateExperienceValue;
- (id)appBootType;
- (void)setAppFirstLaunch;
- (_Bool)isAppFirstLaunch;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

