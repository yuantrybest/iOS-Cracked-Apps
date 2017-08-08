//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FBAuthHeaderContentFooterView.h"

@class UIButton, UIImageView, UITextField;

@interface FBAuthLoginApprovalsView : FBAuthHeaderContentFooterView
{
}

- (id)_footerView;
- (id)_loginApprovalsContent;
- (void)stopActivityIndicator;
- (void)startActivityIndicator;
@property(readonly, nonatomic) UIButton *resendButton;
@property(readonly, nonatomic) UIButton *noCodeButton;
@property(readonly, nonatomic) UIButton *helpButton;
- (id)signupButton;
@property(readonly, nonatomic) UIButton *backButton;
@property(readonly, nonatomic) UIButton *loginButton;
@property(readonly, nonatomic) UITextField *codeInput;
@property(readonly, nonatomic) UIImageView *logoImage;
- (id)initWithConfiguration:(id)arg1 showNoCodeButton:(_Bool)arg2 showResendButton:(_Bool)arg3;

@end
