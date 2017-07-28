//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FMSharePhraseViewDelegate.h"
#import "FMURLRouteHandlerDelegate.h"
#import "UITextFieldDelegate.h"

@class FMBaseShareTextView, FMOpenTaocodeView, FMSharePictureView, FMShareTaocodeView, NSString;

@interface FMShareComponent : NSObject <FMSharePhraseViewDelegate, UITextFieldDelegate, FMURLRouteHandlerDelegate>
{
    FMBaseShareTextView *_weiboShareTextView;
    _Bool blockadeWxAppId;
    _Bool blockadeQQAppId;
    _Bool useTaocode;
    NSString *taocodeHead;
    FMSharePictureView *sharePictureView;
    _Bool _taoCodeShareCallbackFlag;
    FMShareTaocodeView *_shareTaocodeView;
    FMOpenTaocodeView *_openTaocodeView;
    CDUnknownBlockType _shareCallBack;
    id _target;
}

+ (void)utShareReflow:(id)arg1;
+ (void)shareComponent:(id)arg1 shareCallBack:(CDUnknownBlockType)arg2;
+ (void)shareComponent:(id)arg1;
+ (id)instance;
+ (void)urlRouterOpenHandlerWithURL:(id)arg1 query:(id)arg2 nativeParams:(id)arg3;
+ (void)handleOpenURL:(id)arg1 query:(id)arg2 nativeParams:(id)arg3;
+ (void)copyOpenShareType:(unsigned long long)arg1 withContent:(id)arg2;
+ (id)filterPhraseContent:(id)arg1;
@property(retain, nonatomic) id target; // @synthesize target=_target;
@property(copy, nonatomic) CDUnknownBlockType shareCallBack; // @synthesize shareCallBack=_shareCallBack;
@property(nonatomic) _Bool taoCodeShareCallbackFlag; // @synthesize taoCodeShareCallbackFlag=_taoCodeShareCallbackFlag;
@property(retain, nonatomic) FMOpenTaocodeView *openTaocodeView; // @synthesize openTaocodeView=_openTaocodeView;
@property(retain, nonatomic) FMShareTaocodeView *shareTaocodeView; // @synthesize shareTaocodeView=_shareTaocodeView;
- (void).cxx_destruct;
- (id)keyboardKeyWindow;
- (void)doTaocodeShare:(unsigned long long)arg1 shareContent:(id)arg2;
- (void)doImageShare:(unsigned long long)arg1 shareContent:(id)arg2;
- (void)shareTaocodeContent:(id)arg1;
- (void)shareBQContent:(id)arg1;
- (void)processImageForWeixin:(id)arg1 completeBlock:(CDUnknownBlockType)arg2;
- (void)doShareAction:(id)arg1 shareComponent:(id)arg2 shareType:(unsigned long long)arg3;
- (void)doUTShare:(int)arg1 shareContent:(id)arg2;
- (void)setBlockFlag:(id)arg1;
- (void)shareContent:(id)arg1 type:(unsigned long long)arg2;
- (id)toStrShareType:(unsigned long long)arg1;
- (void)shareContent:(id)arg1;
- (id)getShareComponent:(unsigned long long)arg1;
- (void)shareComponentInView:(id)arg1 target:(id)arg2;
- (void)shareComponent:(id)arg1;
- (void)setWeiboShareTextView:(id)arg1;
- (id)getWeiboShareTextView;
- (id)shareTarget;
- (void)setShareTarget:(id)arg1;
- (id)view;
- (void)sharePhraseViewSelfHideButtonClick:(id)arg1;
- (void)sharePhraseViewLabelLongPress:(id)arg1 withContent:(id)arg2;
- (void)sharePhraseViewButtonClick:(id)arg1 buttonText:(id)arg2;
- (void)setShouldHideSelfCopy:(_Bool)arg1;
- (void)intelligentOpenURL:(id)arg1;
- (void)analyzePhraseItemType:(id)arg1;
- (void)showPhraseShareContentView:(id)arg1 withShareType:(unsigned long long)arg2;
- (void)showPhraseShareAlertView:(_Bool)arg1 itemDO:(id)arg2 message:(id)arg3;
- (void)tryOpenTaocode;
- (void)checkPhraseShareContent;
- (void)phraseShareContent:(id)arg1 withType:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
