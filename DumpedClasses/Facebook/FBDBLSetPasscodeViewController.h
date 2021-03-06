//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "FBAuthenticatingEnterPasscodeViewDelegate-Protocol.h"

@class FBAuthenticationEnterPasscodeView, FBDeviceBasedAccount, NSString;

@interface FBDBLSetPasscodeViewController : UIViewController <FBAuthenticatingEnterPasscodeViewDelegate>
{
    FBAuthenticationEnterPasscodeView *_enterPasscodeView;
    FBDeviceBasedAccount *_deviceBasedAccount;
    unsigned long long _flowType;
    NSString *_providedPasscode;
}

- (void).cxx_destruct;
- (void)_networkRequestTimedOut:(id)arg1;
- (void)_showUnknownErrorBar;
- (void)_showNetworkErrorBar;
- (void)_handleSetPasscodeSuccess:(id)arg1;
- (void)_handleSetPasscodeError:(id)arg1 cancelled:(_Bool)arg2;
- (void)secondaryButtonTapped;
- (void)passcodeEntered:(id)arg1 attempt:(long long)arg2;
- (id)_getInstruction;
- (id)_getTitle;
- (long long)preferredInterfaceOrientationForPresentation;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidAppear:(_Bool)arg1;
- (void)loadView;
- (id)initWithDeviceBasedAccount:(id)arg1 flowType:(unsigned long long)arg2 providedPasscode:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

