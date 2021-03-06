//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "FBClassProvidable-Protocol.h"
#import "FBDiodeRootViewControllerProtocol-Protocol.h"
#import "FBMessengerInterstitialViewDelegate-Protocol.h"
#import "FBPresentableViewController-Protocol.h"
#import "FBSyncEngineJobListener-Protocol.h"

@class FBMessengerDiodeBadgeableQPCountManager, FBMessengerInterstitialController, FBMessengerInterstitialType, FBMessengerSyncEngineManager, FBUserSession, FBViewMarginCalculator, NSString, UIView;
@protocol FBMessengerInterstitialViewInterface, FBMessengerPromotionProperties;

@interface FBDiodeRootViewController : UIViewController <FBMessengerInterstitialViewDelegate, FBPresentableViewController, FBSyncEngineJobListener, FBDiodeRootViewControllerProtocol, FBClassProvidable>
{
    FBMessengerSyncEngineManager *_syncEngineManager;
    FBMessengerInterstitialController *_interstitialController;
    UIView<FBMessengerInterstitialViewInterface> *_interstitialView;
    FBViewMarginCalculator *_viewMarginCalculator;
    UIView *_wrappingCard;
    long long _location;
    FBUserSession *_session;
    FBMessengerInterstitialType *_messengerInterstitialType;
    FBMessengerDiodeBadgeableQPCountManager *_messengerDiodeBadgeableQPCountManager;
    id <FBMessengerPromotionProperties> _appProperties;
}

- (void).cxx_destruct;
- (void)_logInterstitialViewWillDisappearIfAppInstalled;
- (void)_logInterstitialViewEventToDiodeQPFunnelWithEventName:(id)arg1 qpType:(id)arg2 qpid:(id)arg3;
- (void)_trackPromotionClickIfNeeded;
- (void)_trackPromotionDismissedIfNeeded;
- (void)_trackPromotionDisappearIfNeeded;
- (void)_trackPromotionAppearanceIfNeeded;
- (void)_dismiss;
- (id)_leftNavBarButtonForLocation:(long long)arg1;
- (void)_configureInterstitial;
- (_Bool)_shouldDisplayInsideCard;
- (void)syncEngineDidCompleteSync:(unsigned long long)arg1;
- (void)syncEngineDidBeginSync:(unsigned long long)arg1 isInitialSync:(_Bool)arg2;
- (void)interstitialViewSelectRedirect:(id)arg1;
- (void)interstitialViewSelectLearnMore:(id)arg1;
- (void)interstitialViewSelectInstall:(id)arg1;
- (id)analyticsModule;
- (struct CGSize)contentSizeForViewInPopover;
- (long long)preferredStatusBarStyle;
@property(readonly, nonatomic) unsigned long long preferredPresentationOptions;
@property(readonly, nonatomic) unsigned long long preferredPresentationMethod;
- (_Bool)fb_showNavBarSearchField;
- (_Bool)fb_showAuxiliaryViewController;
- (_Bool)fb_enableChatBarButton;
- (long long)preferredInterfaceOrientationForPresentation;
- (unsigned long long)supportedInterfaceOrientations;
- (void)configureForLocation:(long long)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (id)initWithSyncEngineManager:(id)arg1 interstitialController:(id)arg2 interstitialView:(id)arg3 session:(id)arg4 diodeModuleProperties:(id)arg5 messengerDiodeBadgeableQPCountManager:(id)arg6 appProperties:(id)arg7;
- (id)initWithProviderMapData:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

