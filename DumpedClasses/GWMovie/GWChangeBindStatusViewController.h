//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GWBaseViewController.h"

#import "UITextFieldDelegate-Protocol.h"

@class GWBindPhoneVerifyCodeProvider, GWGetBindMobileCheckProvider, GWGetMobileCodeByModifyPassProvider, GWMobilecheckAuthProvider, GWModifyLoginPwdByMobileCodeProvider, GWSendCheckForMobileProvider, GWUpdateBindMobileProvider, NSString, NSTimer, UIButton, UITextField, UIView;

@interface GWChangeBindStatusViewController : GWBaseViewController <UITextFieldDelegate>
{
    NSTimer *timer;
    int Second;
    _Bool isOperationRunning;
    unsigned long long _changeBindType;
    NSString *_oldMobileCheckNum;
    NSString *_oldMobileSecurityCode;
    NSString *_currentMobileCheckNum;
    UIView *_contentView;
    UITextField *_topTextField;
    UITextField *_moddleTextField;
    UITextField *_BottomTextField;
    UIButton *_getCodeButton;
    NSString *_confirmButtonStr;
    GWSendCheckForMobileProvider *_sendCheckForMobileProvider;
    GWMobilecheckAuthProvider *_mobilecheckAuthProvider;
    GWGetBindMobileCheckProvider *_getBindMobileCheckProvider;
    GWUpdateBindMobileProvider *_updateBindMobileProvider;
    GWGetMobileCodeByModifyPassProvider *_getMobileCodeByModifyPassProvider;
    GWModifyLoginPwdByMobileCodeProvider *_modifyLoginPwdByMobileCodeProvider;
    GWBindPhoneVerifyCodeProvider *_sendMobileCheckProvider;
}

@property(retain, nonatomic) GWBindPhoneVerifyCodeProvider *sendMobileCheckProvider; // @synthesize sendMobileCheckProvider=_sendMobileCheckProvider;
@property(retain, nonatomic) GWModifyLoginPwdByMobileCodeProvider *modifyLoginPwdByMobileCodeProvider; // @synthesize modifyLoginPwdByMobileCodeProvider=_modifyLoginPwdByMobileCodeProvider;
@property(retain, nonatomic) GWGetMobileCodeByModifyPassProvider *getMobileCodeByModifyPassProvider; // @synthesize getMobileCodeByModifyPassProvider=_getMobileCodeByModifyPassProvider;
@property(retain, nonatomic) GWUpdateBindMobileProvider *updateBindMobileProvider; // @synthesize updateBindMobileProvider=_updateBindMobileProvider;
@property(retain, nonatomic) GWGetBindMobileCheckProvider *getBindMobileCheckProvider; // @synthesize getBindMobileCheckProvider=_getBindMobileCheckProvider;
@property(retain, nonatomic) GWMobilecheckAuthProvider *mobilecheckAuthProvider; // @synthesize mobilecheckAuthProvider=_mobilecheckAuthProvider;
@property(retain, nonatomic) GWSendCheckForMobileProvider *sendCheckForMobileProvider; // @synthesize sendCheckForMobileProvider=_sendCheckForMobileProvider;
@property(retain, nonatomic) NSString *confirmButtonStr; // @synthesize confirmButtonStr=_confirmButtonStr;
@property(retain, nonatomic) UIButton *getCodeButton; // @synthesize getCodeButton=_getCodeButton;
@property(retain, nonatomic) UITextField *BottomTextField; // @synthesize BottomTextField=_BottomTextField;
@property(retain, nonatomic) UITextField *moddleTextField; // @synthesize moddleTextField=_moddleTextField;
@property(retain, nonatomic) UITextField *topTextField; // @synthesize topTextField=_topTextField;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(copy, nonatomic) NSString *currentMobileCheckNum; // @synthesize currentMobileCheckNum=_currentMobileCheckNum;
@property(copy, nonatomic) NSString *oldMobileSecurityCode; // @synthesize oldMobileSecurityCode=_oldMobileSecurityCode;
@property(copy, nonatomic) NSString *oldMobileCheckNum; // @synthesize oldMobileCheckNum=_oldMobileCheckNum;
@property(nonatomic) unsigned long long changeBindType; // @synthesize changeBindType=_changeBindType;
- (void).cxx_destruct;
- (void)requestModifyLoginPwdByMobileCode;
- (void)requestMobileCodeByModifyPass;
- (void)requestUpdateBindMobile;
- (void)requestNewMobileCheck;
- (void)requestMobilecheckAuth;
- (void)requestOldMobileCheck:(id)arg1;
- (void)handleCurrentTitleText:(unsigned long long)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)didReceiveMemoryWarning;
- (void)repeats;
- (void)reviseAction:(id)arg1;
- (void)getCodeButtonAction:(id)arg1;
- (void)layouInputView;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

